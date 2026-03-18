/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01023D8
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C010206C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01022D4 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x1C01024F8 (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2, __int64 a3, int a4)
{
  struct tagPROCESSINFO *v4; // rdi
  unsigned int v6; // edx
  __int64 v7; // rdx
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-48h] BYREF

  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      a4);
  v6 = *((_DWORD *)v4 + 3) & 0xFDFFFFFF;
  if ( *((_DWORD *)a1 + 6) )
    v6 = *((_DWORD *)v4 + 3) | 0x2000000;
  *((_DWORD *)v4 + 3) = v6;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)v4, &ApcState);
  v7 = *((_QWORD *)v4 + 40);
  if ( *((_DWORD *)a1 + 6) )
  {
    while ( v7 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 480) + 28LL) |= 0x20000000u;
      *(_DWORD *)(v7 + 488) |= 0x20000000u;
      v7 = *(_QWORD *)(v7 + 664);
    }
  }
  else
  {
    while ( v7 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 480) + 28LL) &= ~0x20000000u;
      *(_DWORD *)(v7 + 488) &= ~0x20000000u;
      v7 = *(_QWORD *)(v7 + 664);
    }
  }
  KeUnstackDetachProcess(&ApcState);
}
