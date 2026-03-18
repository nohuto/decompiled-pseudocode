/*
 * XREFs of ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2E0C
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2DDC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2F0C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall JobCalloutAddProcessWorker(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  struct tagPROCESSINFO *v2; // rdi
  int v4; // ecx
  __int64 result; // rax

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      8,
      22,
      (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids,
      (char)a1,
      (char)v2);
  *((_DWORD *)v2 + 204) |= 0x4000000u;
  *((_QWORD *)v2 + 95) = a1;
  v4 = *((_DWORD *)a1 + 8);
  if ( *((_DWORD *)a1 + 7) != v4 )
    goto LABEL_12;
  if ( v4 )
    result = UserReAllocPool(
               *((_QWORD *)a1 + 5),
               8LL * *((unsigned int *)a1 + 8),
               8LL * (unsigned int)(v4 + 4),
               2020242261LL);
  else
    result = Win32AllocPoolZInit(32LL, 2020242261LL);
  if ( result )
  {
    *((_DWORD *)a1 + 8) += 4;
    *((_QWORD *)a1 + 5) = result;
LABEL_12:
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * (unsigned int)(*((_DWORD *)a1 + 7))++) = v2;
    SetProcessFlags(a1, v2);
    return 1LL;
  }
  return result;
}
