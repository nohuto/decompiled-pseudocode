/*
 * XREFs of IommuFreeLibraryContext @ 0x140520A48
 * Callers:
 *     IommupPasidDeviceDelete @ 0x14050C384 (IommupPasidDeviceDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     IommupFreeSystemContext @ 0x140521654 (IommupFreeSystemContext.c)
 */

__int64 __fastcall IommuFreeLibraryContext(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 *i; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rcx

  v1 = a1[1];
  v3 = *a1;
  v4 = (__int64 *)(v1 + 40);
  for ( i = *(__int64 **)(v1 + 40); i != v4; i = (__int64 *)*i )
  {
    if ( (__int64 *)i[3] != i + 3 )
      return 3221225473LL;
  }
  while ( 1 )
  {
    v6 = *v4;
    if ( *(__int64 **)(*v4 + 8) != v4 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
    if ( (__int64 *)v6 == v4 )
      break;
    HalpMmAllocCtxFree((__int64)a1, v6);
  }
  HalpMmAllocCtxFree((__int64)a1, v1);
  *a1 = 0LL;
  IommupFreeSystemContext(v3);
  HalpMmAllocCtxFree(v9, (__int64)a1);
  return 0LL;
}
