/*
 * XREFs of SymCryptModElementSetValue @ 0x140400FE0
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefModElementSetValueGeneric @ 0x14040BC34 (SymCryptFdefModElementSetValueGeneric.c)
 */

__int64 __fastcall SymCryptModElementSetValue(int a1, int a2, int a3, _DWORD *a4, void *a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // ebx

  v8 = SymCryptFdefModElementSetValueGeneric(a1, a2, a3, (int)a4, a5, a6, a7);
  if ( !v8 )
    (*(void (__fastcall **)(_DWORD *, void *, __int64, __int64))((char *)off_140006960 + (*a4 & 0x380)))(a4, a5, a6, a7);
  return v8;
}
