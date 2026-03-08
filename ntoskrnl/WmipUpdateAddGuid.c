/*
 * XREFs of WmipUpdateAddGuid @ 0x1409DED7C
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1407FB638 (WmipUpdateModifyGuid.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipBuildInstanceSet @ 0x140867C6C (WmipBuildInstanceSet.c)
 *     WmipLinkDataSourceToList @ 0x1408681AC (WmipLinkDataSourceToList.c)
 *     WmipAllocEntry @ 0x140868798 (WmipAllocEntry.c)
 */

__int64 __fastcall WmipUpdateAddGuid(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, volatile signed __int64 **a5)
{
  _QWORD *v9; // rax
  unsigned int v10; // edi
  volatile signed __int64 *v11; // rbx
  __int64 result; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v9 = WmipAllocEntry((__int64)&WmipISChunkInfo);
  v10 = 0;
  v11 = v9;
  if ( !v9 )
    return 0LL;
  *((_DWORD *)v9 + 4) |= 8u;
  v13 = v9 + 5;
  v9[7] = a2;
  v9[8] = a1;
  v14 = (_QWORD *)(a1 + 40);
  v15 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v15 + 8) != a1 + 40 )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = v14;
  *(_QWORD *)(v15 + 8) = v13;
  *v14 = v13;
  if ( (int)WmipBuildInstanceSet(a2, a3, a4, (__int64)v11, *(_DWORD *)(a1 + 56)) < 0 )
  {
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, v11);
    return 0LL;
  }
  LOBYTE(v10) = (int)WmipLinkDataSourceToList(a1, 0, 0LL) >= 0;
  result = v10;
  *a5 = v11;
  return result;
}
