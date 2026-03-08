/*
 * XREFs of HalpPciHandleSecureAccess @ 0x140456190
 * Callers:
 *     HalpAcpiAccessSecureAddress @ 0x140456300 (HalpAcpiAccessSecureAddress.c)
 * Callees:
 *     HalpPCIConfig @ 0x1402D7810 (HalpPCIConfig.c)
 *     HalpPciIsAddressWithinMcfg @ 0x14045624E (HalpPciIsAddressWithinMcfg.c)
 */

char __fastcall HalpPciHandleSecureAccess(char a1, __int16 a2, __int64 a3, void *a4, unsigned int a5, unsigned int *a6)
{
  unsigned int v9; // edi
  char result; // al
  unsigned __int8 v11[4]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v12; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v13; // [rsp+48h] [rbp-8h] BYREF

  v11[0] = 0;
  v12 = 0;
  v13 = 0;
  if ( !(unsigned __int8)HalpPciIsAddressWithinMcfg(a3, &v12, v11, &v13) )
    return 0;
  v9 = a2 & 0xFFF;
  if ( a1 )
  {
    ++HalpSecureWriteAccessCount;
    HalpPCIConfig((unsigned int *)v12, v11[0], v13, a4, v9, a5, 1);
  }
  else
  {
    ++HalpSecureReadAccessCount;
    HalpPCIConfig((unsigned int *)v12, v11[0], v13, a4, v9, a5, 0);
  }
  result = 1;
  *a6 = a5;
  return result;
}
