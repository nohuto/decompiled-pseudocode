__int64 __fastcall CPropertyChangeResource::NotifyVector4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector4 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v8 = *(unsigned int *)(v5 + 64);
    v9 = *(_QWORD *)(v5 + 48);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1240LL) + 40LL);
    if ( v9 )
      v11 = *(_DWORD *)(v9 + 76);
    else
      v11 = 0;
    v12 = *(_OWORD *)a3;
    v15[0] = v11;
    v15[1] = v8;
    v16 = v12;
    v13 = CoreUICallSend(v10, v15, 2LL, 14LL, 4, &unk_180339479, v6, &v16);
    v4 = v13;
    if ( v13 == -2018375675 )
    {
      return 0;
    }
    else if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x177u, 0LL);
    }
  }
  return v4;
}
