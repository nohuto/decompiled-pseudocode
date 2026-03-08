/*
 * XREFs of MiFreeWsleList @ 0x14032B2B0
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiAgeWorkingSetTail @ 0x1402C9E50 (MiAgeWorkingSetTail.c)
 *     MiEmptyWorkingSetHelper @ 0x1402DE91C (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSetBuildup @ 0x1402E2A60 (MiTrimWorkingSetBuildup.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x1402F7470 (MiEmptyWorkingSetTail.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiAgePteWorker @ 0x140326530 (MiAgePteWorker.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x14036C29C (MiConvertAndFlushWsleVas.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140463EE0 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiRemoveWsleList @ 0x1402824E0 (MiRemoveWsleList.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiRebuildPageTableLeafAges @ 0x14032AD30 (MiRebuildPageTableLeafAges.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v18; // [rsp+24h] [rbp-1A4h]
  __int16 v19; // [rsp+26h] [rbp-1A2h]
  __int64 v20; // [rsp+28h] [rbp-1A0h]
  __int64 v21; // [rsp+30h] [rbp-198h]
  __int64 v22; // [rsp+38h] [rbp-190h]
  _BYTE v23[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v24[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v19 = 0;
  memset(v23, 0, sizeof(v23));
  v6 = *(unsigned int *)(a2 + 12);
  v20 = 20LL;
  v7 = MiTbFlushType(a1);
  v8 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v9 = 0LL;
  v17 = v7;
  v18 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( v8 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 344) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    while ( 1 )
    {
      for ( j = 0LL; j < v6; ++j )
      {
        v12 = (char *)&v24[j] + 1;
        v13 = *(_QWORD *)&v12[a2 - ((_QWORD)v24 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
        if ( i )
        {
          if ( v24[j] )
            LOWORD(v24[j]) = MiWsleFree(a1, v13, a3);
          else
            *v12 &= ~1u;
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))MiWsleFlush)(a1, v13, a3, &v17);
          v24[j] = v14;
          if ( !v14 )
            ++v9;
        }
      }
      if ( i )
        break;
      MiFlushTbList(&v17);
      i = 1;
    }
  }
  if ( v9 != v6 )
  {
    v15 = MiRemoveWsleList(a1, a2, v24, v6);
    if ( v15 )
      MiRebuildPageTableLeafAges(0LL, v15 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v9;
}
