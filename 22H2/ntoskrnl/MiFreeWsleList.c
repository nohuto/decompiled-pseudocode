/*
 * XREFs of MiFreeWsleList @ 0x1402A79B0
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14022DDD0 (MiAgeWorkingSetTail.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x140286BB4 (MiEmptyWorkingSetHelper.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiAgePteWorker @ 0x1402BA020 (MiAgePteWorker.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x1403229E0 (MiEmptyWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x1403302C8 (MiTrimWorkingSetBuildup.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiConvertAndFlushWsleVas @ 0x140339AFC (MiConvertAndFlushWsleVas.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053660C (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053C6C0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiRebuildPageTableLeafAges @ 0x1402DAED0 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x1402E4B70 (MiRemoveWsleList.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v20; // [rsp+24h] [rbp-1A4h]
  __int16 v21; // [rsp+26h] [rbp-1A2h]
  __int64 v22; // [rsp+28h] [rbp-1A0h]
  __int64 v23; // [rsp+30h] [rbp-198h]
  __int64 v24; // [rsp+38h] [rbp-190h]
  _BYTE v25[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v26[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v21 = 0;
  memset(v25, 0, sizeof(v25));
  v6 = *(unsigned int *)(a2 + 12);
  v22 = 20LL;
  v9 = MiTbFlushType(a1, v7, v8);
  v10 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v11 = 0LL;
  v19 = v9;
  v20 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( v10 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 360) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v14 = (char *)&v26[j] + 1;
      v15 = *(_QWORD *)&v14[a2 - ((_QWORD)v26 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        if ( v26[j] )
          LOWORD(v26[j]) = MiWsleFree(a1, v15, a3);
        else
          *v14 &= ~1u;
      }
      else
      {
        v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))MiWsleFlush)(a1, v15, a3, &v19);
        v26[j] = v16;
        if ( !v16 )
          ++v11;
      }
    }
    if ( !i )
      MiFlushTbList(&v19);
  }
  if ( v11 != v6 )
  {
    v17 = MiRemoveWsleList(a1, a2, v26, v6);
    if ( v17 )
      MiRebuildPageTableLeafAges(0LL, v17 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v11;
}
