int __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CApplicationChannel *v6; // r10
  int v8; // edi

  v6 = a2;
  switch ( a3 )
  {
    case 0xAu:
      return -1073741811;
    case 0x34u:
      v8 = 0;
      if ( a4
        && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4 + 9),
                               17LL) )
      {
        return -1073741811;
      }
      if ( a4 != this[47] )
      {
        if ( a4 )
        {
          if ( (*((_QWORD *)a4 + 3))++ == -1LL )
            KeBugCheck(0xC01E0103);
        }
        DirectComposition::CApplicationChannel::ReleaseResource(v6, this[47]);
        this[47] = a4;
        *((_DWORD *)this + 98) |= 1u;
        *a5 = 1;
      }
      return v8;
    case 0x35u:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 48,
               a4,
               1LL,
               39,
               this + 49,
               2,
               0,
               a5);
    default:
      return DirectComposition::CVisualMarshaler::SetReferenceProperty(
               (DirectComposition::CVisualMarshaler *)this,
               a2,
               a3,
               a4,
               a5);
  }
}
