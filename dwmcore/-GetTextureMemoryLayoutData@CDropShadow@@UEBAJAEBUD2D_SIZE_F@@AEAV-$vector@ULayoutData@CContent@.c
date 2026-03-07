__int64 __fastcall CDropShadow::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  v3 = 0;
  a3[1] = *a3;
  if ( !*(_DWORD *)(a1 + 124) )
  {
    v4 = *(_QWORD *)(a1 + 176);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 272LL))(v4);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1D8u, 0LL);
    }
  }
  return v3;
}
