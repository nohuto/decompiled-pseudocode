/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01140D4
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C0113E60 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0114014 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C0114240 (WPP_RECORDER_SF_qqD.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C025CF24 (_W32ExceptionHandler.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2, int a3, int a4)
{
  unsigned int v6; // edx
  __int64 v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-48h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD((unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)a2, a3, a4);
  v6 = *((_DWORD *)a2 + 3) & 0xFDFFFFFF;
  if ( *((_DWORD *)a1 + 6) )
    v6 = *((_DWORD *)a2 + 3) | 0x2000000;
  *((_DWORD *)a2 + 3) = v6;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)a2, &ApcState);
  v7 = *((_QWORD *)a2 + 40);
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
