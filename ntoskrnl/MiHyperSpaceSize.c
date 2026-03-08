/*
 * XREFs of MiHyperSpaceSize @ 0x140222C78
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiInitializeWalkBounds @ 0x1402243DC (MiInitializeWalkBounds.c)
 *     MiQueryLeafPte @ 0x14031D370 (MiQueryLeafPte.c)
 *     MiRealVaToFlushType @ 0x140387A7C (MiRealVaToFlushType.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140B604AC (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x140B609A8 (MiAddSubRegionEntropy.c)
 * Callees:
 *     <none>
 */

__int64 MiHyperSpaceSize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140C66CF8;
  if ( !qword_140C66CF8 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C66D00[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C66CF8 = v3 + 8 * v4;
  }
  return result;
}
