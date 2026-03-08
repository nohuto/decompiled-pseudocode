/*
 * XREFs of Register_FindFirstExtendedCapability @ 0x1C001A95C
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071B88 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 */

unsigned int *__fastcall Register_FindFirstExtendedCapability(__int64 a1, unsigned __int8 a2)
{
  unsigned int *v2; // rbx
  int v4; // esi
  __int16 Ulong; // ax

  v2 = *(unsigned int **)(a1 + 56);
  if ( v2 )
  {
    v4 = a2;
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v2);
      if ( (unsigned __int8)Ulong == v4 )
        break;
      if ( (Ulong & 0xFF00) != 0 )
      {
        v2 += HIBYTE(Ulong);
        if ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
          continue;
      }
      return 0LL;
    }
  }
  return v2;
}
