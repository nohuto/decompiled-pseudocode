__int64 __fastcall DynArray<CCommonRegistryData::GpuId,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 6, 1, a2);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 3 * v2;
      *(_DWORD *)(v7 + 2 * v8) = *(_DWORD *)a2;
      *(_WORD *)(v7 + 2 * v8 + 4) = *(_WORD *)(a2 + 4);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  return v6;
}
