/*
 * XREFs of ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0114394
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C011434C (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004F354 (WPP_RECORDER_SF_qq.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0114454 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcessWorker(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq((__int64)a1, 4u, 0xDu, 0x16u, (__int64)&WPP_8a8a5c1bf24e3db582f892aeb1cd1399_Traceguids, a1, a2);
  *((_DWORD *)a2 + 205) |= 0x4000000u;
  *((_QWORD *)a2 + 96) = a1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 7);
  if ( v5 != v4 )
    goto LABEL_8;
  if ( v4 )
    result = UserReAllocPool(
               *((_QWORD *)a1 + 5),
               8LL * *((unsigned int *)a1 + 8),
               8LL * (unsigned int)(v4 + 4),
               2020242261LL);
  else
    result = Win32AllocPool(32LL, 2020242261LL);
  if ( result )
  {
    *((_DWORD *)a1 + 8) += 4;
    *((_QWORD *)a1 + 5) = result;
    v5 = *((_DWORD *)a1 + 7);
LABEL_8:
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * v5) = a2;
    ++*((_DWORD *)a1 + 7);
    SetProcessFlags(a1, a2);
    return 1LL;
  }
  return result;
}
