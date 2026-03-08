/*
 * XREFs of ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00C0E44
 * Callers:
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C00C0C04 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00C0CDC (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::Runtime::Alloc(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, a1, a2);
  *a3 = Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
