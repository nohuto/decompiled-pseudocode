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
