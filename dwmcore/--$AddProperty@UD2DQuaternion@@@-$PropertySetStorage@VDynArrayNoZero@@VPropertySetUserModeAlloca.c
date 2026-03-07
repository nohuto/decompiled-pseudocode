__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DQuaternion>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v10; // r8d
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v14) = a2;
  v10 = v7 + 1;
  HIDWORD(v14) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    return v11;
  }
  if ( v10 > *(_DWORD *)(a1 + 20) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v14);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
      return v11;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
    *(_DWORD *)(a1 + 24) = v10;
  }
  v11 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 16, 1, 0LL);
  if ( (v11 & 0x80000000) != 0 )
  {
    DynArray<CExcludeVisualReference *,0>::RemoveAt(a1, v7);
    return v11;
  }
  *(_DWORD *)(a1 + 56) += 16;
  *(_OWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
  *a4 = v7;
  return 0LL;
}
