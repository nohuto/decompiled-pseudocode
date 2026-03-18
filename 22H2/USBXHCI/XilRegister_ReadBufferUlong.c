/*
 * XREFs of XilRegister_ReadBufferUlong @ 0x1C001A970
 * Callers:
 *     Register_GetAllExtendedCapability @ 0x1C001A888 (Register_GetAllExtendedCapability.c)
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C003ED08 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadBufferUlong(__int64 a1, _DWORD *a2, void *a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  _DWORD *v7; // rsi

  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 601) )
    return Register_ReadSecureMmio(a1, (int)a2, 2, a4, a3);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  while ( v5 )
  {
    *v6++ = *v7++;
    --v5;
  }
  return result;
}
