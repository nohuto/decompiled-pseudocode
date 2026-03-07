__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v7; // r8d
  int *v9; // rcx
  struct DirectComposition::CResourceMarshaler **v10; // rdx

  if ( !a3 )
  {
    v9 = (int *)(this + 2);
    v10 = this + 9;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v10, (__int64)a4, 1, 196, v9, 0, 0, a5);
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v9 = (int *)(this + 2);
    v10 = this + 10;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v10, (__int64)a4, 1, 196, v9, 0, 0, a5);
  }
  if ( v7 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             this + 11,
             (__int64)a4,
             1,
             42,
             (int *)this + 4,
             0,
             0,
             a5);
  else
    return 3221225485LL;
}
