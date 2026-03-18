/*
 * XREFs of ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00AADD8
 * Callers:
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00AABA0 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C00AAD00 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::Runtime::Alloc(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, a1);
  *a3 = Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
