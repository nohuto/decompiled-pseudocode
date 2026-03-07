__int64 __fastcall DynArray<tagRECT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  _OWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v4 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v9 = a2;
      v7 = DynArrayImpl<0>::Grow(a1, 16, 1, 0, (__int64)&v9);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u, 0LL);
      else
        *(_OWORD *)((unsigned int)(16 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v9;
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)a1 + 16LL * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
