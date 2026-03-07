__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1 - 88;
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 88)) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 48LL);
    if ( a2 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _DWORD *))(**(_QWORD **)(a1 + 24) + 32LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              a3,
              a4,
              &v18,
              v17);
      v13 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x35Fu, 0LL);
        return v13;
      }
      v14 = 1;
      if ( v18 || (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10), v17[0] != v15 - 1) )
        v14 = 6;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 72LL))(v4, v14, v4);
    }
    return 0;
  }
  else
  {
    v13 = -2147483634;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147483634, 0x350u, 0LL);
  }
  return v13;
}
