__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  int CanReceiveInputThreadMessages; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, char *); // rbp
  int v10; // eax
  CMit *v11; // rax
  __int64 v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CMit *v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CanReceiveInputThreadMessages = CoreUICreate(v1);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v15 = 51;
    goto LABEL_17;
  }
  v7 = *v1;
  v8 = *((_QWORD *)this + 5);
  v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL);
  if ( v8 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CanReceiveInputThreadMessages = v9(v7, (char *)this + 40);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v15 = 54;
    goto LABEL_17;
  }
  CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v15 = 56;
    goto LABEL_17;
  }
  v10 = CGlobalMit::Create(*((struct CComposition **)this + 2), &v17);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\globalmit.cpp",
      (const char *)(unsigned int)v10,
      v14);
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v6, 0x3Bu, 0LL);
    return v6;
  }
  v11 = v17;
  v6 = 0;
  *((_QWORD *)this + 3) = v17;
  if ( v11 )
  {
    CanReceiveInputThreadMessages = CMit::Reset(v11);
    v6 = CanReceiveInputThreadMessages;
    if ( CanReceiveInputThreadMessages < 0 )
    {
      v15 = 63;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CanReceiveInputThreadMessages, v15, 0LL);
    }
  }
  return v6;
}
