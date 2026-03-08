/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C02D94E0
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C01D51A0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C01D5280 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<unsigned int,4>::AllocateElements(__int64 *a1, __int64 a2)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a2;
  if ( (unsigned int)a2 <= 4 )
  {
    *a1 = (__int64)(a1 + 1);
    v6 = 0LL;
    if ( (_DWORD)a2 )
    {
      a2 = (unsigned int)a2;
      do
      {
        *(_DWORD *)(v6 + *a1) = 0;
        v6 += 4LL;
        --a2;
      }
      while ( a2 );
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 < 4 )
      return 0LL;
    v5 = 4LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 4uLL) )
      v5 = -1LL;
    *a1 = operator new[](v5, 0x4B677844u, 256LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 6) = v2;
  return result;
}
