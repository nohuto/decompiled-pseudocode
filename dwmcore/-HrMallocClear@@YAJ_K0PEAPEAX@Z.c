/*
 * XREFs of ?HrMallocClear@@YAJ_K0PEAPEAX@Z @ 0x180278D14
 * Callers:
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E498 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall HrMallocClear(__int64 a1, unsigned __int64 a2, void **a3)
{
  unsigned int v3; // ebx
  void *v5; // rax

  v3 = 0;
  if ( a3 && a2 && 0xFFFFFFFFFFFFFFFFuLL / a2 > 8 )
  {
    v5 = DefaultHeap::AllocClear(8 * a2);
    *a3 = v5;
    if ( !v5 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
