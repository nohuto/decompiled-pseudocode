__int64 __fastcall DataSourceProxy::GetPropertyValue(
        DataSourceProxy *this,
        struct CDataSourceReader *a2,
        int a3,
        struct CExpressionValue *a4)
{
  char v8; // al
  CComposition *v9; // rcx
  unsigned __int64 EffectiveCompositionFrameId; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( DataSourceProxy::DoesResourceHaveAccess(this, a2) )
  {
    v8 = *((_BYTE *)this + 224);
    if ( (v8 & 1) == 0 )
    {
      v9 = g_pComposition;
      *((_BYTE *)this + 224) = v8 | 1;
      EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(v9);
      (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 1) + 24LL))(
        (char *)this + 8,
        EffectiveCompositionFrameId);
    }
    return DataSourcePropertySet::GetPropertyValue((DataSourceProxy *)((char *)this + 64), a3, a4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
