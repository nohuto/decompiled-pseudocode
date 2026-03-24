/*
 * XREFs of vInitXLATE @ 0x1C029A92C
 * Callers:
 *     InitializeGre @ 0x1C029A0FC (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  dword_1C025128C = 256;
  xloIdent = 1;
  v0 = &unk_1C02512D8;
  dword_1C0251284 = 1;
  qword_1C0251290 = (__int64)&unk_1C02512D4;
  LODWORD(result) = 0;
  dword_1C02512C8 = 0;
  dword_1C02512A4 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
