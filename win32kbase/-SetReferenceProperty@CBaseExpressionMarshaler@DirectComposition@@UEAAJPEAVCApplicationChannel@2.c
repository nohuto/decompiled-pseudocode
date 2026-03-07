__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CWeakReferenceBase **)this + 9,
             (unsigned int *)a4,
             (__int64)a4,
             0x93u,
             (int *)this + 4,
             64,
             1,
             a5);
  else
    return 3221225485LL;
}
