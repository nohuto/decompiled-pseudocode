__int64 __fastcall CLightStack::Push(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  DWORD2(v11) = a3;
  *(_QWORD *)&v11 = a2;
  v5 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_9;
  }
  v6 = 0;
  if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, 1LL, &v11);
    v6 = v9;
    if ( v9 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, 0x20u, 0LL);
    return v6;
  }
  *(_OWORD *)(*(_QWORD *)a1 + 16LL * v3) = v11;
  *(_DWORD *)(a1 + 24) = v5;
LABEL_4:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return v6;
}
