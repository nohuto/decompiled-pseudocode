__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  __int64 *v1; // rdx
  unsigned int v2; // ebx
  int v3; // eax
  float v4; // xmm0_4
  bool v5; // zf
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v9; // rcx
  _DWORD v10[8]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (__int64 *)((char *)this + 128);
  v2 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fmaxf(0.0, *((float *)this + 52))) & _xmm) < 0.0000011920929 )
  {
    v9 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return (unsigned int)-2003304438;
  }
  else if ( !*v1 )
  {
    v3 = *((_DWORD *)this + 47);
    v10[5] = 0;
    v10[6] = 0;
    v4 = fmaxf(1.0, *((float *)this + 51));
    v10[0] = v3;
    v10[1] = *((_DWORD *)this + 48);
    v10[2] = *((_DWORD *)this + 46);
    v10[3] = *((_DWORD *)this + 49);
    v5 = *((_BYTE *)this + 212) == 0;
    *(float *)&v10[4] = v4;
    v10[7] = !v5;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(*g_DeviceManager + 144LL))(
           g_DeviceManager,
           v10,
           0LL,
           0LL,
           v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1D6u, 0LL);
  }
  return v2;
}
