/*
 * XREFs of SymCryptModElementSetValue @ 0x1403F3B80
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointSetValue @ 0x1403F96E0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefModElementSetValueGeneric @ 0x1403FE7A4 (SymCryptFdefModElementSetValueGeneric.c)
 */

__int64 __fastcall SymCryptModElementSetValue(int a1, int a2, int a3, _DWORD *a4, void *a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // ebx

  v8 = SymCryptFdefModElementSetValueGeneric(a1, a2, a3, (int)a4, a5, a6, a7);
  if ( !v8 )
    (*(void (__fastcall **)(_DWORD *, void *, __int64, __int64))((char *)off_1400064D0 + (*a4 & 0x380)))(a4, a5, a6, a7);
  return v8;
}
