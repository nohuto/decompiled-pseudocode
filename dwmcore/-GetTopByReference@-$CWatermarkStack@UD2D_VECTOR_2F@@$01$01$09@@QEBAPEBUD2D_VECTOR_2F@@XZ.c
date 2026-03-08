/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEBAPEBUD2D_VECTOR_2F@@XZ @ 0x1800FFC88
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::GetTopByReference(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
