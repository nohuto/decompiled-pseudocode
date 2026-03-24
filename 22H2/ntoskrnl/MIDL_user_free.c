/*
 * XREFs of MIDL_user_free @ 0x140980370
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14076E344 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CECDC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
