/*
 * XREFs of MiDecreaseUsedPtesCount @ 0x1402D0E90
 * Callers:
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiReducePteUseCount @ 0x1402D0E3C (MiReducePteUseCount.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiUpdateAwePageTable @ 0x140649AB0 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x14064DD80 (MiDeleteLargeUserPde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtesCount(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // r9
  int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = HIWORD(*(_DWORD *)(BugCheckParameter2 + 16)) & 0x3FF;
  v4 = BugCheckParameter4;
  if ( v3 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v3, (unsigned int)BugCheckParameter4);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  result = ((unsigned int)(*(_QWORD *)(BugCheckParameter2 + 16) >> 16) & 0x3FF) - v4;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ ((((*(_QWORD *)(BugCheckParameter2 + 16) >> 16) & 0x3FF)
                                                                                                - v4) << 16)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
