/*
 * XREFs of ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02E025C
 * Callers:
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 */

void __fastcall EPOINTL::vScale(EPOINTL *this, const struct POINTFL *a2)
{
  int *v2; // rbx
  float v3; // xmm2_4
  int v4; // esi
  unsigned int v6; // r8d

  v2 = (int *)((char *)this + 4);
  v3 = *((float *)a2 + 1);
  v4 = *((_DWORD *)this + 1);
  if ( !(unsigned int)bFToL((float)*(int *)this * *(float *)a2, (int *)this, 6u)
    || !(unsigned int)bFToL((float)v4 * v3, v2, v6) )
  {
    *v2 = 0;
    *(_DWORD *)this = 0;
  }
}
