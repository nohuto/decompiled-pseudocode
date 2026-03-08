/*
 * XREFs of ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800EC3F4
 * Callers:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180040864 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v5; // rsi
  signed __int64 v7; // r8
  _QWORD *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

  v5 = a4 + 2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)a3 - a2) >> 3);
  if ( v7 >= 0 )
  {
    if ( v7 <= 0 || a4[1] - *v5 >= (unsigned __int64)v7 )
      goto LABEL_4;
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( *v5 < (unsigned __int64)-v7 )
    goto LABEL_11;
LABEL_4:
  v9 = (_QWORD *)(a2 + 16);
  v10 = *a4;
  v11 = *a4 + 24LL * *v5;
  while ( v9 - 2 != a3 )
  {
    *(_DWORD *)v11 = *((_DWORD *)v9 - 4);
    *(_DWORD *)(v11 + 4) = *((_DWORD *)v9 - 3);
    *(_DWORD *)(v11 + 8) = *((_DWORD *)v9 - 2);
    v12 = *v9;
    *v9 = 0LL;
    v13 = *(volatile signed __int32 **)(v11 + 16);
    *(_QWORD *)(v11 + 16) = v12;
    if ( v13 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v13);
    v11 += 24LL;
    v9 += 3;
  }
  result = a1;
  *v5 = 0xAAAAAAAAAAAAAAABuLL * ((v11 - v10) >> 3);
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
