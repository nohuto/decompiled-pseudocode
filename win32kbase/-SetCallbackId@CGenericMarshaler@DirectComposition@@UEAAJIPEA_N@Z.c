__int64 __fastcall DirectComposition::CGenericMarshaler::SetCallbackId(
        DirectComposition::CGenericMarshaler *this,
        __int64 a2,
        bool *a3)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CCallbackIdProperty>(
           (__int64)this,
           a2,
           a2,
           a3);
}
