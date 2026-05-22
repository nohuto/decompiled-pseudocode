/*
 * XREFs of ?_Tidy@?$deque@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801675F8
 * Callers:
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180157A7C (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<IUnknown>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)(a1[1]
                                                                            + 8
                                                                            * ((a1[2] - 1LL) & ((unsigned __int64)(a1[3] + v2 - 1) >> 1)))
                                                                + 8LL * ((*((_DWORD *)a1 + 6) + (_DWORD)v2 - 1) & 1)));
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}
