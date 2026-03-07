FxObject *__fastcall FxObjectAndHandleHeaderInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _OWORD *AllocationStart,
        unsigned __int16 ObjectSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObjectType ObjectType)
{
  FxObject *v5; // rbx

  v5 = (FxObject *)AllocationStart;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    v5 = (FxObject *)(AllocationStart + 3);
    *AllocationStart = 0LL;
    AllocationStart[1] = 0LL;
    AllocationStart[2] = 0LL;
    *((_DWORD *)AllocationStart + 8) = 1146058822;
  }
  if ( ObjectType == FxObjectTypeExternal )
    FxContextHeaderInit((FxContextHeader *)((char *)v5 + ObjectSize), v5, Attributes);
  return v5;
}
