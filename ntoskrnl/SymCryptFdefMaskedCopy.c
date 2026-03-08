/*
 * XREFs of SymCryptFdefMaskedCopy @ 0x1403FFE3C
 * Callers:
 *     SymCryptEcpointMaskedCopy @ 0x1403F96A8 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptFdefModAddGeneric @ 0x1403FE410 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModElementMaskedCopy @ 0x1403FE77C (SymCryptFdefModElementMaskedCopy.c)
 *     SymCryptFdefModSubGeneric @ 0x1403FF640 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x140400260 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefMaskedCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefMaskedCopyAsm(a1, a2, a3, a4);
}
