/*
 * XREFs of EngCTGetGammaTable @ 0x1C01275A0
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
    v3 = (const BYTE *)&ajGammaCT_10;
    v4 = (const BYTE *)&ajGammaCT_10;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_11;
    v4 = (const BYTE *)&ajGammaCT_11;
  }
  else if ( ulGamma < 0x514 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_12;
    v4 = (const BYTE *)&ajGammaCT_12;
  }
  else if ( ulGamma < 0x578 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_13;
    v4 = (const BYTE *)&ajGammaCT_13;
  }
  else if ( ulGamma < 0x5DC )
  {
    v3 = (const BYTE *)&ajGammaInvCT_14;
    v4 = (const BYTE *)&ajGammaCT_14;
  }
  else if ( ulGamma < 0x640 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_15;
    v4 = (const BYTE *)&ajGammaCT_15;
  }
  else if ( ulGamma < 0x6A4 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_16;
    v4 = (const BYTE *)&ajGammaCT_16;
  }
  else if ( ulGamma < 0x708 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_17;
    v4 = (const BYTE *)&ajGammaCT_17;
  }
  else if ( ulGamma < 0x76C )
  {
    v3 = (const BYTE *)&ajGammaInvCT_18;
    v4 = (const BYTE *)&ajGammaCT_18;
  }
  else if ( ulGamma < 0x7D0 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_19;
    v4 = (const BYTE *)&ajGammaCT_19;
  }
  else if ( ulGamma < 0x834 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_20;
    v4 = (const BYTE *)&ajGammaCT_20;
  }
  else if ( ulGamma < 0x898 )
  {
    v3 = (const BYTE *)&ajGammaInvCT_21;
    v4 = (const BYTE *)&ajGammaCT_21;
  }
  else
  {
    v3 = (const BYTE *)&ajGammaInvCT_22;
    v4 = (const BYTE *)&ajGammaCT_22;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
