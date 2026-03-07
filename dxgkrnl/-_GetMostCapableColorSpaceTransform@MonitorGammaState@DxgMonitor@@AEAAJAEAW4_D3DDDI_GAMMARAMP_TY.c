__int64 __fastcall DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
        DxgMonitor::MonitorGammaState *this,
        enum _D3DDDI_GAMMARAMP_TYPE *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  enum _D3DDDI_GAMMARAMP_TYPE v6; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  *a2 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v5 = *(_DWORD *)(v4 + 48);
  v6 = D3DDDI_GAMMARAMP_MATRIX_3x4;
  if ( (v5 & 4) != 0 )
    goto LABEL_4;
  if ( (v5 & 1) != 0 )
  {
    v6 = D3DDDI_GAMMARAMP_RGB256x3x16;
LABEL_4:
    *a2 = v6;
    return 0LL;
  }
  return 3221225659LL;
}
