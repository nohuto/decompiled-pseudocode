__int64 __fastcall CLegacySwapChain::SetHardwareProtection(CLegacySwapChain *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = *((_QWORD *)this - 26);
  v5 = 0;
  if ( !v4 )
  {
    v5 = -2003304307;
    v8 = -2003304307;
    v10 = 342;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this - 324) != a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 327;
      goto LABEL_6;
    }
    *((_DWORD *)this - 23) = *((_DWORD *)this - 29);
    v7 = *((_QWORD *)this - 54);
    *((_BYTE *)this - 324) = a2;
    v6 = (*(__int64 (**)(void))(v7 + 272))();
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 337;
LABEL_6:
      v8 = v6;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v8, v10, 0LL);
    }
  }
  return v5;
}
