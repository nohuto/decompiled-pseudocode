__int64 __fastcall DirectComposition::CGenericMarshaler::SetHandleProperty(
        DirectComposition::CGenericMarshaler *this,
        unsigned int a2,
        __int64 a3,
        bool *a4)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CHandleProperty>(
           (__int64)this,
           a2,
           a3,
           a4);
}
