/*
 * XREFs of VidMmAllocateVirtualMemoryFromPartition @ 0x1C00BA804
 * Callers:
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C006632C (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 */

__int64 __fastcall VidMmAllocateVirtualMemoryFromPartition(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  _QWORD v8[4]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  if ( (a4 & 0x1080000) != 0 )
  {
    v7 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdEvent(v7);
    return 3223191824LL;
  }
  else
  {
    v8[3] = a1;
    v8[0] = 5LL;
    v8[2] = 3LL;
    v8[1] = 2LL;
    return ZwAllocateVirtualMemoryEx(-1LL, a2, a3, a4 | 0x20400000, a5, v8, 2);
  }
}
