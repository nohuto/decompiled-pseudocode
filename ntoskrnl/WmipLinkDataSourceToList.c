/*
 * XREFs of WmipLinkDataSourceToList @ 0x1408681AC
 * Callers:
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x1409DED7C (WmipUpdateAddGuid.c)
 * Callees:
 *     WmipFindGEByGuid @ 0x14069BDF4 (WmipFindGEByGuid.c)
 *     WmipAllocGuidEntry @ 0x140841224 (WmipAllocGuidEntry.c)
 *     WmipRegisterEtwProvider @ 0x14085074C (WmipRegisterEtwProvider.c)
 */

__int64 __fastcall WmipLinkDataSourceToList(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v8; // esi
  _QWORD *GEByGuid; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rcx

  v3 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v8 = 0;
  while ( v5 != v3 )
  {
    v13 = v5 - 5;
    if ( (*(_DWORD *)(v5 - 3) & 8) != 0 )
    {
      GEByGuid = WmipFindGEByGuid((_QWORD *)v13[7], 0);
      if ( !GEByGuid )
      {
        GEByGuid = WmipAllocGuidEntry();
        if ( !GEByGuid )
          return (unsigned int)-1073741670;
        v10 = WmipGEHeadPtr;
        *(_OWORD *)(GEByGuid + 9) = *(_OWORD *)v13[7];
        v11 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          goto LABEL_18;
        *GEByGuid = v11;
        GEByGuid[1] = v10;
        *(_QWORD *)(v11 + 8) = GEByGuid;
        *(_QWORD *)v10 = GEByGuid;
      }
      *((_DWORD *)v13 + 4) &= ~8u;
      v13[7] = GEByGuid;
      v12 = (_QWORD *)GEByGuid[8];
      if ( (_QWORD *)*v12 != GEByGuid + 7 )
        goto LABEL_18;
      *v13 = GEByGuid + 7;
      v13[1] = v12;
      *v12 = v13;
      GEByGuid[8] = v13;
      ++*((_DWORD *)GEByGuid + 9);
      if ( (v13[2] & 0x80000) != 0 )
        WmipRegisterEtwProvider((__int64)(v5 - 5), a3);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( a2 )
  {
    v14 = WmipDSHeadPtr;
    *(_DWORD *)(a1 + 16) |= 0x40000000u;
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
LABEL_18:
      __fastfail(3u);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v15;
    *v15 = a1;
    *(_QWORD *)(v14 + 8) = a1;
  }
  return v8;
}
