__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        _BYTE *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v9; // r8d
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  __int64 result; // rax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v14) = a2;
  v9 = v7 + 1;
  HIDWORD(v14) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v9 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
      *(_DWORD *)(a1 + 24) = v9;
      goto LABEL_5;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, &v14);
    v12 = v10;
    if ( v10 >= 0 )
    {
LABEL_5:
      v12 = DynArrayImpl<0>::Grow((int)a1 + 32, 1, 1, 1, 0LL);
      if ( v12 >= 0 )
      {
        ++*(_DWORD *)(a1 + 56);
        *(_BYTE *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
        result = 0LL;
        *a4 = v7;
        return result;
      }
      DynArray<CExcludeVisualReference *,0>::RemoveAt(a1, (unsigned int)v7);
      return (unsigned int)v12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
  }
  return (unsigned int)v12;
}
