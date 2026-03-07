__int64 __fastcall CLegacyRenderTarget::WaitForVBlank(CLegacyRenderTarget *this, void *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_QWORD *)this + 4);
  v4 = 0LL;
  if ( v2 )
  {
    LOBYTE(v4) = a2 != 0LL;
    return (*(unsigned int (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v2 + 48LL))(
             v2,
             v4,
             (unsigned __int64)&v7 & -(__int64)(a2 != 0LL));
  }
  else
  {
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x357u, 0LL);
  }
  return v5;
}
