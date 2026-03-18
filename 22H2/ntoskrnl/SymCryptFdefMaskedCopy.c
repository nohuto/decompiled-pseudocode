/*
 * XREFs of SymCryptFdefMaskedCopy @ 0x14040535C
 * Callers:
 *     SymCryptEcpointMaskedCopy @ 0x1403FEBC8 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptFdefModAddGeneric @ 0x140403930 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModElementMaskedCopy @ 0x140403C9C (SymCryptFdefModElementMaskedCopy.c)
 *     SymCryptFdefModSubGeneric @ 0x140404B60 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x140405780 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefMaskedCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefMaskedCopyAsm(a1, a2, a3, a4);
}
