/*
 * XREFs of vInitXLATE @ 0x1C029992C
 * Callers:
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  dword_1C02502AC = 256;
  xloIdent = 1;
  v0 = &unk_1C02502F8;
  dword_1C02502A4 = 1;
  qword_1C02502B0 = (__int64)&unk_1C02502F4;
  LODWORD(result) = 0;
  dword_1C02502E8 = 0;
  dword_1C02502C4 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
