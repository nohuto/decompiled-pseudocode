/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0348040
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0190840 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(__int64 *a1, __int64 a2)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a2;
  if ( (unsigned int)a2 <= 0x10 )
  {
    *a1 = (__int64)(a1 + 1);
    v6 = 0LL;
    if ( (_DWORD)a2 )
    {
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v6 + *a1) = 0LL;
        v6 += 8LL;
        --a2;
      }
      while ( a2 );
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 < 8 )
      return 0LL;
    v5 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v5 = -1LL;
    *a1 = operator new[](v5, 0x4B677844u, 256LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 34) = v2;
  return result;
}
