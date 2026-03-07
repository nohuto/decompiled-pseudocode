__int64 __fastcall DirectComposition::CProxyGeometryClipMarshaler::SetReferenceProperty(
        DirectComposition::CProxyGeometryClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 4 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 96,
             a4,
             1LL,
             67,
             (char *)this + 16,
             2048,
             0,
             a5);
  if ( a3 == 5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 104,
             a4,
             1LL,
             194,
             (char *)this + 16,
             4096,
             0,
             a5);
  return DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
