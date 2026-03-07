__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  FxObject *ObjectFromHandle; // rax
  void **v5; // r9
  const void *_a1; // r10
  _WDF_OBJECT_ATTRIBUTES *v7; // r11
  unsigned int v8; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 offset; // [rsp+58h] [rbp+10h] BYREF

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  offset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle(Handle, &offset);
  if ( offset )
  {
    v8 = -1073741767;
    WPP_IFR_SF_qd(ObjectFromHandle->m_Globals, 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, _a1, -1073741767);
  }
  else
  {
    return (unsigned int)FxObjectAllocateContext(ObjectFromHandle, v7, 0, v5);
  }
  return v8;
}
