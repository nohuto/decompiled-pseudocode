__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  __int64 v6; // [rsp+20h] [rbp-28h]

  if ( a3 == 7 )
    return DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(
             (DirectComposition::CBrushMarshaler *)this,
             a2,
             this + 9,
             (unsigned int *)a4,
             v6,
             32,
             a5);
  else
    return 3221225485LL;
}
