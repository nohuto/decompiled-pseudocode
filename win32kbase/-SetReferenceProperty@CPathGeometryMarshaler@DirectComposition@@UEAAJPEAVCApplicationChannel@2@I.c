__int64 __fastcall DirectComposition::CPathGeometryMarshaler::SetReferenceProperty(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 4 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 12,
             (__int64)a4,
             1,
             169,
             (int *)this + 4,
             2048,
             0,
             a5);
  else
    return DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
