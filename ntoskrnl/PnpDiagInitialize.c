/*
 * XREFs of PnpDiagInitialize @ 0x140B5A9D4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1403895F8 (McGenEventRegister_EtwRegister.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 */

__int64 __fastcall PnpDiagInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  NTSTATUS v4; // eax

  v2 = McGenEventRegister_EtwRegister(
         (const GUID *)MS_KernelPnP_Provider,
         a2,
         MS_KernelPnP_Provider_Context,
         MS_KernelPnP_Provider_Context);
  v3 = 0;
  PnpEtwHandle = MS_KernelPnP_Provider_Context[0];
  if ( v2 < 0 )
    v3 = v2;
  v4 = EtwRegister(
         &MS_KernelPnP_Rundown_Provider,
         (PETWENABLECALLBACK)PnpDiagRundownRegisterCallback,
         0LL,
         &PnpRundownEtwHandle);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
