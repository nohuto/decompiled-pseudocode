__int64 __fastcall DirectComposition::CGenericMarshaler::SetIntegerProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
           (__int64)this,
           a3,
           a4,
           a5);
}
