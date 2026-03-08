/*
 * XREFs of ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x1800E59FC
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     _lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator() @ 0x1800E58F8 (_lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_--operator().c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<PrimitiveUVDesc const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800E5A18LL);
  }
  return *((_QWORD *)a1 + 1) + 52 * a2;
}
