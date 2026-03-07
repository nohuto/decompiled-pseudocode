__int64 __fastcall CRemoteRenderTarget::WaitForVBlank(CRemoteRenderTarget *this, void *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v2 + 40LL))(v2, a2);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x145u, 0LL);
  }
  else
  {
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x149u, 0LL);
  }
  return v5;
}
