__int64 __fastcall CPropertyChangeResource::NotifyBooleanPropertyChanged(CPropertyChangeResource *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  int v3; // r10d
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-28h]
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v4 = *(unsigned int *)(v2 + 64);
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1240LL) + 40LL);
    if ( v5 )
      v7 = *(_DWORD *)(v5 + 76);
    else
      v7 = 0;
    LODWORD(v11) = v3;
    v12[0] = v7;
    v12[1] = v4;
    v8 = CoreUICallSend(v6, v12, 2LL, 14LL, 1, &unk_180339469, v11);
    v1 = v8;
    if ( v8 == -2018375675 )
    {
      return 0;
    }
    else if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xF0u, 0LL);
    }
  }
  return v1;
}
