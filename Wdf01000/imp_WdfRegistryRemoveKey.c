/*
 * XREFs of imp_WdfRegistryRemoveKey @ 0x1C004BE70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004E4D4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryRemoveKey(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  __int64 result; // rax
  NTSTATUS v3; // ebx
  FxRegKey *pKey; // [rsp+30h] [rbp+8h] BYREF

  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  result = FxVerifierCheckIrqlLevel(pKey->m_Globals, 0);
  if ( (int)result >= 0 )
  {
    FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
    v3 = ZwDeleteKey(pKey->m_Key);
    if ( v3 >= 0 )
      pKey->DeleteObject(pKey);
    return (unsigned int)v3;
  }
  return result;
}
