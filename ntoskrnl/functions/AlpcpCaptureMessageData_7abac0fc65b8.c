__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, char *a3)
{
  __int64 v3; // rsi
  size_t v7; // rsi
  void *v8; // rcx
  unsigned __int64 v10; // r15
  void *v11; // rcx
  size_t v12; // r14
  __int64 Pool2; // rax
  struct _KPROCESS *v14; // rcx
  int v15; // r14d
  struct _KPROCESS *v16; // rcx
  struct _KPROCESS *v17; // rcx

  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
    v7 = *(_QWORD *)(v3 + 32) - 40LL;
  else
    v7 = 512LL;
  if ( a2 <= v7 )
  {
    if ( a3 )
      memmove((void *)(a1 + 280), a3, a2);
    v8 = *(void **)(a1 + 224);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x42456C41u);
      v16 = *(struct _KPROCESS **)(a1 + 48);
      *(_QWORD *)(a1 + 224) = 0LL;
      if ( v16 )
        AlpcpReleasePagedPoolQuota(v16, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v10 = *(_QWORD *)(a1 + 232);
  if ( a2 <= v10 + v7 )
    goto LABEL_10;
  v11 = *(void **)(a1 + 224);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v12 = a2 - v7;
  Pool2 = ExAllocatePool2(256LL, a2 - v7, 1111845953LL);
  v14 = *(struct _KPROCESS **)(a1 + 48);
  *(_QWORD *)(a1 + 224) = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 232) = v12;
    if ( !v14 || (v15 = AlpcpChargePagedPoolQuota((__int64)v14, v12 - v10), v15 >= 0) )
    {
LABEL_10:
      if ( a3 )
      {
        memmove((void *)(a1 + 280), a3, v7);
        memmove(*(void **)(a1 + 224), &a3[v7], a2 - v7);
      }
      return 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
    v17 = *(struct _KPROCESS **)(a1 + 48);
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
    AlpcpReleasePagedPoolQuota(v17, v10);
    return (unsigned int)v15;
  }
  else
  {
    if ( v14 )
      AlpcpReleasePagedPoolQuota(v14, v10);
    return 3221225626LL;
  }
}
