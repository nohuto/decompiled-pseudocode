__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // ecx
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-48h]
  _QWORD v17[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-18h]

  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *(unsigned int *)(v5 + 64);
    v9 = *(_QWORD *)(v5 + 48);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1240LL) + 40LL);
    if ( v9 )
      v11 = *(_DWORD *)(v9 + 76);
    else
      v11 = 0;
    v12 = *(_OWORD *)&a3->m11;
    v13 = *(_QWORD *)&a3->m[2][0];
    v17[0] = v11;
    LODWORD(v16) = v6;
    v17[1] = v8;
    v18 = v12;
    v19 = v13;
    v14 = CoreUICallSend(v10, v17, 2LL, 14LL, 7, &unk_18033948B, v16);
    v4 = v14;
    if ( v14 == -2018375675 )
    {
      return 0;
    }
    else if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1FBu, 0LL);
    }
  }
  return v4;
}
