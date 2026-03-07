__int64 __fastcall DirectComposition::CLegacyStereoRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CLegacyStereoRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  if ( a3 != 5 || !(_DWORD)a4 )
    return DirectComposition::CLegacyRenderTargetMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *a5 = 0;
  return 3221225485LL;
}
