__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetIntegerProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d
  int v7; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    *((_DWORD *)this + 18) = a4;
    goto LABEL_5;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 19) = a4;
    goto LABEL_5;
  }
  if ( v7 == 1 )
  {
    *((_DWORD *)this + 20) = a4;
LABEL_5:
    *((_DWORD *)this + 4) &= ~0x40u;
    *a5 = 1;
    return result;
  }
  return 3221225485LL;
}
