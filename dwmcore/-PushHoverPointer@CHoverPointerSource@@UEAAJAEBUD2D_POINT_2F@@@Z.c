__int64 __fastcall CHoverPointerSource::PushHoverPointer(struct D2D_POINT_2F *this, const struct D2D_POINT_2F *a2)
{
  int v2; // edi
  struct IMessageCallSendHost *v5; // rbx
  CComposition *v6; // rdi
  int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  struct CManipulationManager *v11; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+88h] [rbp+38h] BYREF
  struct D2D_POINT_2F v13; // [rsp+90h] [rbp+40h]
  struct D2D_POINT_2F *v14; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  if ( this[9].x == a2->x && this[9].y == a2->y )
    return (unsigned int)v2;
  this[9] = *a2;
  if ( !CMit::s_pMessageSession )
    goto LABEL_15;
  v5 = CMit::s_pMessageCallSendHost;
  if ( !CMit::s_pMessageCallSendHost )
  {
    if ( (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
      RaiseFailFastException(0LL, 0LL, 0);
LABEL_15:
    v5 = CMit::s_pMessageCallSendHost;
  }
  v12 = v5;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v12);
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (CComposition *)this[3];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    ManipulationManager = CComposition::GetManipulationManager(v6, &v11);
    v2 = ManipulationManager;
    if ( ManipulationManager < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ManipulationManager, 0x49u, 0LL);
    }
    else
    {
      v9 = *((_QWORD *)v11 + 7);
      if ( v9 )
      {
        (*(void (__fastcall **)(struct D2D_POINT_2F *))(*(_QWORD *)&this[1] + 8LL))(this + 1);
        v13 = this[9];
        v14 = this;
        v10 = v9;
        v2 = CoreUICallSend(v5, &v10, 1LL, 12LL, 4, &unk_180339458, &v14);
        if ( v2 < 0 )
          (*(void (__fastcall **)(struct D2D_POINT_2F *))(*(_QWORD *)&this[1] + 16LL))(this + 1);
      }
      else
      {
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0x4Au, 0LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v2;
}
