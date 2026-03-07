__int64 __fastcall DynArray<unsigned short,0>::AddMultipleAndSet(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 6;
  if ( (int)v2 + 6 >= (unsigned int)v2 )
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 2, 6, a2);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
    }
    else
    {
      v7 = *a2;
      v8 = *(unsigned int *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      *(_QWORD *)(v9 + 2 * v2) = v7;
      *(_DWORD *)(v9 + 2 * v8 + 8) = *((_DWORD *)a2 + 2);
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
