/*
 * XREFs of MiFreeWsleList @ 0x140280B00
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2FC (MiConvertAndFlushWsleVas.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiAgePteWorker @ 0x14027C0D0 (MiAgePteWorker.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiAgeWorkingSetTail @ 0x140334210 (MiAgeWorkingSetTail.c)
 *     MiEmptyWorkingSetHelper @ 0x140348CFC (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSetBuildup @ 0x14034F7C0 (MiTrimWorkingSetBuildup.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x140361E30 (MiEmptyWorkingSetTail.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14046BDE0 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiRebuildPageTableLeafAges @ 0x1402188C0 (MiRebuildPageTableLeafAges.c)
 *     MiTbFlushType @ 0x14025B98C (MiTbFlushType.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140281280 (MiWsleFree.c)
 *     MiRemoveWsleList @ 0x1402A7CB0 (MiRemoveWsleList.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  bool v8; // zf
  __int64 v9; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-1A0h]
  __int64 v19; // [rsp+30h] [rbp-198h]
  __int64 v20; // [rsp+38h] [rbp-190h]
  _BYTE v21[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v22[20]; // [rsp+E0h] [rbp-E8h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = *(unsigned int *)(a2 + 12);
  v18 = 20LL;
  v7 = MiTbFlushType(a1);
  v8 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v9 = 0LL;
  v17 = v7;
  v19 = 0LL;
  v20 = 0LL;
  if ( v8 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 344) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    while ( 1 )
    {
      for ( j = 0LL; j < v6; ++j )
      {
        v12 = (char *)&v22[j] + 1;
        v13 = *(_QWORD *)&v12[a2 - ((_QWORD)v22 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
        if ( i )
        {
          if ( v22[j] )
            LOWORD(v22[j]) = MiWsleFree(a1, v13, a3);
          else
            *v12 &= ~1u;
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64 *))MiWsleFlush)(a1, v13, a3, &v17);
          v22[j] = v14;
          if ( !v14 )
            ++v9;
        }
      }
      if ( i )
        break;
      MiFlushTbList((int *)&v17);
      i = 1;
    }
  }
  if ( v9 != v6 )
  {
    v15 = MiRemoveWsleList(a1, a2, v22, v6, v17, v18, v19, v20);
    if ( v15 )
      MiRebuildPageTableLeafAges(0LL, v15 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v9;
}
