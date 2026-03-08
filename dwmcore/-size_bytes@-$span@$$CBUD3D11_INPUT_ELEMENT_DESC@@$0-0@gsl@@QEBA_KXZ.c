/*
 * XREFs of ?size_bytes@?$span@$$CBUD3D11_INPUT_ELEMENT_DESC@@$0?0@gsl@@QEBA_KXZ @ 0x180025FEC
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180026018 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<D3D11_INPUT_ELEMENT_DESC const,-1>::size_bytes(_QWORD *a1)
{
  if ( *a1 >= 0x7FFFFFFFFFFFFFFuLL )
  {
    gsl::details::terminate((gsl::details *)0x7FFFFFFFFFFFFFFLL);
    JUMPOUT(0x180026011LL);
  }
  return 32LL * *a1;
}
