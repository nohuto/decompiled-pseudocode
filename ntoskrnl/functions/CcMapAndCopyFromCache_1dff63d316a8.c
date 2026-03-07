char __fastcall CcMapAndCopyFromCache(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // r13
  char *v14; // r14
  int v15; // r15d
  void *VirtualAddress; // rdx
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rcx
  size_t Size; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  void *Src; // [rsp+60h] [rbp-58h]
  int v24; // [rsp+C0h] [rbp+8h]
  __int64 v25; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+18h] BYREF
  char v27; // [rsp+D8h] [rbp+20h]

  v27 = a4;
  v25 = a2;
  v24 = a1;
  v9 = a1;
  v10 = a3;
  v11 = a2;
  P = 0LL;
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !a3 )
    goto LABEL_17;
  v14 = a5;
  while ( 1 )
  {
    LODWORD(Size) = 0;
    v15 = 0;
    LODWORD(v26) = 0;
    VirtualAddress = (void *)CcGetVirtualAddress(v13, v11, (__int64 *)&P, &Size, 0, v14 == 0LL);
    Src = VirtualAddress;
    if ( (*(_DWORD *)(v13 + 152) & 8) != 0 )
      break;
    if ( !CcFetchDataForRead(v9, &v25, v10, v27, &v26, P, a7, a8, a9) )
      goto LABEL_20;
    v15 = v26;
    VirtualAddress = Src;
    *a6 |= v26;
LABEL_6:
    v18 = Size;
    v11 += (unsigned int)Size;
    v19 = (unsigned int)Size;
    if ( v14 )
    {
      *(_QWORD *)(*(_QWORD *)(v13 + 512) + 336LL) += (unsigned int)Size;
      if ( v15 )
        *(_QWORD *)(*(_QWORD *)(v13 + 512) + 344LL) += v19;
    }
    else if ( v15 )
    {
      *(_QWORD *)(*(_QWORD *)(v13 + 512) + 352LL) += (unsigned int)Size;
    }
    if ( v18 > v10 )
      v18 = v10;
    if ( v14 )
    {
      LOBYTE(v17) = (*(_DWORD *)(v13 + 152) & 0x1000) != 0;
      v12 = CcCopyBytesToUserBuffer(v14, (char *)VirtualAddress, v18, v17);
      if ( v12 < 0 )
        goto LABEL_21;
      v14 += v18;
    }
    CcFreeVirtualAddress((__int64)P);
    v25 = v11;
    P = 0LL;
    v10 -= v18;
    if ( !v10 )
      goto LABEL_15;
    v9 = v24;
  }
  if ( v27 )
    goto LABEL_6;
LABEL_20:
  v12 = -1073741608;
LABEL_21:
  if ( P )
    CcFreeVirtualAddress((__int64)P);
LABEL_15:
  if ( v12 == -1073741608 )
    return 0;
  if ( v12 < 0 )
  {
    CcUpdateSharedCacheMapFlag(v13, 8, 1);
    RtlRaiseStatus(v12);
  }
LABEL_17:
  if ( (*(_DWORD *)(v13 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v13, 8, 0);
  return 1;
}
