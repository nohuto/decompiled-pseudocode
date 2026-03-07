__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1)
{
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v3 = (_BYTE *)(a1 + 52);
  if ( !HalpHvIommu || *v3 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      HalpIommuCleanupPageTable(*(_QWORD *)(a1 + 40));
      HalpMmAllocCtxFree(v5, v4);
    }
  }
  v6 = 0;
  if ( HalpHvIommu )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( !v7 || v7 == 2 )
    {
      v9 = *(unsigned int *)(a1 + 48);
      BYTE4(v9) = *v3;
      v6 = ((__int64 (__fastcall *)(__int64 *))qword_140C622C0)(&v9);
    }
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  HalpMmAllocCtxFree(v8, a1);
  return v6;
}
