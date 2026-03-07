unsigned __int64 __fastcall HalpIumGetNextVariableName(size_t *a1, void *a2, _OWORD *a3)
{
  size_t v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 Pool2; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx

  if ( !qword_140C621F0 )
    return 0x8000000000000003uLL;
  v7 = *a1;
  v8 = 2072544LL;
  if ( v7 < 0x1F9FE0 )
    v8 = v7;
  *a1 = v8;
  v9 = (v8 + 4127) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = ExAllocatePool2(64LL, v9, 2001103699LL);
  v11 = Pool2;
  if ( !Pool2 )
    return 0x8000000000000009uLL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 32;
  memmove((void *)(Pool2 + 32), a2, *a1);
  *(_QWORD *)v11 = *a1;
  *(_OWORD *)(v11 + 16) = *a3;
  v12 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_140C621F0)(4LL, v11, v9);
  *a1 = *(_QWORD *)v11;
  *a3 = *(_OWORD *)(v11 + 16);
  if ( v12 )
  {
    if ( v12 == 0x8000000000000005uLL && v9 == 2072576 )
      v12 = 0x8000000000000004uLL;
  }
  else
  {
    memmove(a2, *(const void **)(v11 + 8), *a1);
  }
  ExFreePoolWithTag((PVOID)v11, 0);
  return v12;
}
