/*
 * XREFs of ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D938C
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D935C (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D948C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcessWorker(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  char v4; // dl
  int v5; // ecx
  __int64 result; // rax

  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0xDu,
      0x16u,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      a1,
      a2);
  *((_DWORD *)a2 + 203) |= 0x4000000u;
  *((_QWORD *)a2 + 95) = a1;
  v5 = *((_DWORD *)a1 + 8);
  if ( *((_DWORD *)a1 + 7) != v5 )
    goto LABEL_12;
  if ( v5 )
    result = UserReAllocPool(
               *((_QWORD *)a1 + 5),
               8LL * *((unsigned int *)a1 + 8),
               8LL * (unsigned int)(v5 + 4),
               2020242261LL);
  else
    result = Win32AllocPoolZInit(32LL, 2020242261LL);
  if ( result )
  {
    *((_DWORD *)a1 + 8) += 4;
    *((_QWORD *)a1 + 5) = result;
LABEL_12:
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * (unsigned int)(*((_DWORD *)a1 + 7))++) = a2;
    SetProcessFlags(a1, a2);
    return 1LL;
  }
  return result;
}
