void __fastcall CompositorTracing::DwmHolographicInteropTextureAdd_(CompositorTracing *this, int a2, char a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  ULONG v7; // r9d
  char v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  ULONG v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  char *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v5 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      v16 = 0;
      v13 = 0;
      v14 = &v8;
      v12 = v7;
      v11 = &v9;
      v8 = a3;
      v9 = a2;
      v15 = 1;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_18037F8E1, 0LL, 0LL, v7, &v10);
    }
  }
}
