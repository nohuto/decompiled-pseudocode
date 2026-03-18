/*
 * XREFs of SymCryptFdefMaskedCopy @ 0x14040D3B0
 * Callers:
 *     SymCryptEcpointMaskedCopy @ 0x140406AD8 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptFdefModAddGeneric @ 0x14040B8A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModElementMaskedCopy @ 0x14040BC0C (SymCryptFdefModElementMaskedCopy.c)
 *     SymCryptFdefModSubGeneric @ 0x14040CB70 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x14040D7E0 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefMaskedCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefMaskedCopyAsm(a1, a2, a3, a4);
}
