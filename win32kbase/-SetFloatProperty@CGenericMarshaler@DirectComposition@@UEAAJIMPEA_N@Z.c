__int64 __fastcall DirectComposition::CGenericMarshaler::SetFloatProperty(
        DirectComposition::CGenericMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
           (__int64)this,
           a2,
           a3,
           a4);
}
