__int64 __fastcall CHolographicInteropTarget::GetPresentStatisticsDWM(
        CHolographicInteropTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  int v4; // ebx
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 40);
    v4 = -2147467259;
    if ( v3 )
    {
      v3 = (_QWORD *)v3[4];
      if ( v3 )
        v4 = (*(__int64 (__fastcall **)(_QWORD *, struct DXGI_FRAME_STATISTICS_DWM *, char *))(*v3 + 24LL))(v3, a2, &v6);
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, &dword_180383C70, 2u, v4, 0x129u, 0LL);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180383C70, 2u, -2003304307, 0x12Du, 0LL);
  }
  return (unsigned int)v4;
}
