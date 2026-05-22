/*
 * XREFs of ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x18009FC30
 * Callers:
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x18009FDA4 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800A3578 (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IRawInputProvider>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
