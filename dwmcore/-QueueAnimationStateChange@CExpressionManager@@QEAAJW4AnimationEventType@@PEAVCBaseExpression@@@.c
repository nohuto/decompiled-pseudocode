__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int v11; // ecx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] <= 0 )
    return 0;
  LODWORD(v12) = a2;
  *((_QWORD *)&v12 + 1) = a3;
  v4 = *(_DWORD *)(a1 + 256);
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v6 = -2147024362;
    goto LABEL_11;
  }
  if ( v5 > *(_DWORD *)(a1 + 252) )
  {
    v8 = DynArrayImpl<1>::AddMultipleAndSet(a1 + 232, 0x10u, (__int64)a3, &v12);
    v10 = v8;
    v6 = v8;
    if ( v8 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x265u, 0LL);
    return v6;
  }
  *(_OWORD *)(*(_QWORD *)(a1 + 232) + 16LL * v4) = v12;
  *(_DWORD *)(a1 + 256) = v5;
LABEL_5:
  (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0;
}
