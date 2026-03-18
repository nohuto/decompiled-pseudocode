/*
 * XREFs of EngCTGetGammaTable @ 0x1C0039DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngCTGetGammaTable(ULONG ulGamma, const BYTE **pGammaTable, const BYTE **pInverseGammaTable)
{
  const BYTE *v3; // rax
  const BYTE *v4; // rcx

  if ( ulGamma < 0x44C )
  {
    v3 = (const BYTE *)&unk_1C030D870;
    v4 = (const BYTE *)&unk_1C030D870;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&unk_1C030DA70;
    v4 = (const BYTE *)&unk_1C030D970;
  }
  else if ( ulGamma < 0x514 )
  {
    v3 = (const BYTE *)&unk_1C030D770;
    v4 = (const BYTE *)&unk_1C030D670;
  }
  else if ( ulGamma < 0x578 )
  {
    v3 = (const BYTE *)&unk_1C030DC70;
    v4 = (const BYTE *)&unk_1C030DB70;
  }
  else if ( ulGamma < 0x5DC )
  {
    v3 = (const BYTE *)&unk_1C030DE70;
    v4 = (const BYTE *)&unk_1C030DD70;
  }
  else if ( ulGamma < 0x640 )
  {
    v3 = (const BYTE *)&unk_1C030E070;
    v4 = (const BYTE *)&unk_1C030DF70;
  }
  else if ( ulGamma < 0x6A4 )
  {
    v3 = (const BYTE *)&unk_1C030E270;
    v4 = (const BYTE *)&unk_1C030E170;
  }
  else if ( ulGamma < 0x708 )
  {
    v3 = (const BYTE *)&unk_1C030E470;
    v4 = (const BYTE *)&unk_1C030E370;
  }
  else if ( ulGamma < 0x76C )
  {
    v3 = (const BYTE *)&unk_1C030E670;
    v4 = (const BYTE *)&unk_1C030E570;
  }
  else if ( ulGamma < 0x7D0 )
  {
    v3 = (const BYTE *)&unk_1C030E870;
    v4 = (const BYTE *)&unk_1C030E770;
  }
  else if ( ulGamma < 0x834 )
  {
    v3 = (const BYTE *)&unk_1C030EA70;
    v4 = (const BYTE *)&unk_1C030E970;
  }
  else if ( ulGamma < 0x898 )
  {
    v3 = (const BYTE *)&unk_1C030EC70;
    v4 = (const BYTE *)&unk_1C030EB70;
  }
  else
  {
    v3 = (const BYTE *)&unk_1C030EE70;
    v4 = (const BYTE *)&unk_1C030ED70;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
