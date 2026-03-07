__int64 __fastcall CEffectBrush::GetSourceInputBounds(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64); // rcx
  int v17; // eax
  unsigned int v18; // ecx

  v4 = *(_DWORD *)(a1 + 144);
  v8 = DynArrayImpl<0>::Grow(a4, 16, v4, 1, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x385u, 0LL);
    return v10;
  }
  v11 = 0;
  *(_DWORD *)(a4 + 24) = v4;
  if ( v4 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v14 = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 120));
      if ( v14 )
      {
        v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))(v14 + 64 + *(int *)(*(_QWORD *)(v14 + 64) + 8LL));
        v17 = (**v16)(v16, a3, *(_QWORD *)a4 + 16LL * v11);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x38Cu, 0LL);
          return v10;
        }
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)a4 + v12) = *a2;
      }
      ++v11;
      v13 += 8LL;
      v12 += 16LL;
    }
    while ( v11 < v4 );
  }
  return v10;
}
