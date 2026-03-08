/*
 * XREFs of EngCTGetGammaTable @ 0x1C0091B00
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
    v3 = (const BYTE *)&unk_1C0310080;
    v4 = (const BYTE *)&unk_1C0310080;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&unk_1C0310280;
    v4 = (const BYTE *)&unk_1C0310180;
  }
  else if ( ulGamma < 0x514 )
  {
    v3 = (const BYTE *)&unk_1C030FF80;
    v4 = (const BYTE *)&unk_1C030FE80;
  }
  else if ( ulGamma < 0x578 )
  {
    v3 = (const BYTE *)&unk_1C0310480;
    v4 = (const BYTE *)&unk_1C0310380;
  }
  else if ( ulGamma < 0x5DC )
  {
    v3 = (const BYTE *)&unk_1C0310680;
    v4 = (const BYTE *)&unk_1C0310580;
  }
  else if ( ulGamma < 0x640 )
  {
    v3 = (const BYTE *)&unk_1C0310880;
    v4 = (const BYTE *)&unk_1C0310780;
  }
  else if ( ulGamma < 0x6A4 )
  {
    v3 = (const BYTE *)&unk_1C0310A80;
    v4 = (const BYTE *)&unk_1C0310980;
  }
  else if ( ulGamma < 0x708 )
  {
    v3 = (const BYTE *)&unk_1C0310C80;
    v4 = (const BYTE *)&unk_1C0310B80;
  }
  else if ( ulGamma < 0x76C )
  {
    v3 = (const BYTE *)&unk_1C0310E80;
    v4 = (const BYTE *)&unk_1C0310D80;
  }
  else if ( ulGamma < 0x7D0 )
  {
    v3 = (const BYTE *)&unk_1C0311080;
    v4 = (const BYTE *)&unk_1C0310F80;
  }
  else if ( ulGamma < 0x834 )
  {
    v3 = (const BYTE *)&unk_1C0311280;
    v4 = (const BYTE *)&unk_1C0311180;
  }
  else if ( ulGamma < 0x898 )
  {
    v3 = (const BYTE *)&unk_1C0311480;
    v4 = (const BYTE *)&unk_1C0311380;
  }
  else
  {
    v3 = (const BYTE *)&unk_1C0311680;
    v4 = (const BYTE *)&unk_1C0311580;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
