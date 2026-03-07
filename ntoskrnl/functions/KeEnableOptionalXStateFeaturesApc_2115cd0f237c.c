void __fastcall KeEnableOptionalXStateFeaturesApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v4; // rdx
  ULONG_PTR v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 104);
  v6 = 0;
  if ( (int)KxEnableOptionalXStateFeatures(v1, v4, v2, &v6) < 0 || !v6 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
      MmDeleteKernelStackEx(v5, 8u, v1);
  }
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 120), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 120), 0);
}
