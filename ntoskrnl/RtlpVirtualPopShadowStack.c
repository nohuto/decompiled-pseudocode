/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x140302EB0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140281720 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140281BF0 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x14045BDC0 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14045BC40 (RtlLocateExtendedFeature2.c)
 */

void __fastcall RtlpVirtualPopShadowStack(__int64 a1, int a2, int a3)
{
  __int64 ExtendedFeature2; // rax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(a1 + 1232, 11LL, 0xFFFFF780000003D8uLL, 0LL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += (unsigned int)(8 * a2);
      }
    }
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232) += (unsigned int)(8 * a3);
  }
}
