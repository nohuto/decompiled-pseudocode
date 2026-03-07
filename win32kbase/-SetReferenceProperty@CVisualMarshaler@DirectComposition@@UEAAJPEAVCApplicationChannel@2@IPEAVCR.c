int __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // ebx
  int v7; // r9d
  int v11; // r10d
  unsigned int v12; // r10d

  v5 = 0;
  v7 = a3;
  *a5 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4
        && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4 + 9),
                               187LL) )
      {
        return -1073741811;
      }
      if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 17) )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 17));
        *((_QWORD *)this + 17) = a4;
        *((_DWORD *)this + 4) |= 0x100u;
        *a5 = 1;
      }
      return v5;
    case 4:
      goto LABEL_8;
    case 5:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 19,
               (__int64)a4,
               1,
               56,
               (int *)this + 4,
               1024,
               0,
               a5);
    case 6:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 20,
               (__int64)a4,
               1,
               67,
               (int *)this + 4,
               4096,
               0,
               a5);
    case 10:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 21,
               (__int64)a4,
               1,
               47,
               (int *)this + 4,
               2048,
               0,
               a5);
    case 22:
      if ( a4 )
        v11 = *((_DWORD *)a4 + 8);
      else
        v11 = 0;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
        McTemplateK0qqqxx_EtwWriteTransfer(
          v11,
          0,
          *((_DWORD *)this + 8),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 8),
          v11,
          *((_DWORD *)this + 8),
          v11);
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 27,
               (__int64)a4,
               1,
               89,
               (int *)this + 4,
               0x100000,
               0,
               a5);
    case 38:
LABEL_8:
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              196LL)
        || v7 != 4 && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v12, 200LL) )
      {
        return DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, v7 == 38, a5);
      }
      return -1073741811;
    case 39:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 28,
               (__int64)a4,
               1,
               17,
               (int *)this + 4,
               0x4000000,
               0,
               a5);
    case 49:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 29,
               (__int64)a4,
               1,
               202,
               (int *)this + 92,
               4,
               0,
               a5);
    default:
      return -1073741811;
  }
}
