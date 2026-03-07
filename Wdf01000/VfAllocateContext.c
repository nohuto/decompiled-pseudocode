__int64 __fastcall VfAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FX_POOL ***ContextHeader)
{
  unsigned int v3; // ebx
  _FX_DRIVER_GLOBALS *v4; // rdi
  __int64 result; // rax
  ULONG Tag; // ecx
  void *v9; // rax
  FX_POOL **v10; // rax
  __m128i v11; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 size; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  size = 0LL;
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 8);
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo )
    {
      result = FxCalculateObjectTotalSize(v4, 0, 0, Attributes, &size);
      if ( (int)result < 0 )
        return result;
      Tag = v4->Tag;
      v9 = retaddr;
      v11.m128i_i64[0] = 0LL;
      v11.m128i_i64[1] = 64LL;
      if ( !v4->FxPoolTrackingOn )
        v9 = 0LL;
      v10 = FxPoolAllocator(v4, &v4->FxPoolFrameworks, &v11, size, Tag, v9);
      if ( v10 )
        *ContextHeader = v10;
      else
        return (unsigned int)-1073741670;
    }
    else
    {
      v3 = -1073741773;
      WPP_IFR_SF_qd(v4, 3u, 0xBu, 0xBu, WPP_Verifier_cpp_Traceguids, Attributes, -1073741773);
    }
    return v3;
  }
  return result;
}
