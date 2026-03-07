void __fastcall FxObjectHandleGetPtr(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Handle,
        unsigned __int16 Type,
        void **PPObject)
{
  __int64 Offset; // r10
  FxObject *v5; // rcx

  LOWORD(Offset) = 0;
  if ( !Handle )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, Type);
  v5 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxObject *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == Type )
    *PPObject = v5;
  else
    FxObjectHandleGetPtrQI(v5, PPObject, (void *)Handle, Type, Offset);
}
