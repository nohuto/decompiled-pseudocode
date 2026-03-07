__int64 __fastcall PopWriteHeaderPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  void *v4; // rbp
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // eax
  int *v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  size_t v14; // r8
  size_t v15; // rbx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ebx
  size_t v20; // r8
  int v21; // eax
  int v22; // edx
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // edx
  unsigned int v26; // ebx

  v2 = *(unsigned int *)(a1 + 152);
  v4 = *(void **)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 0;
  memset(v4, 0, v2 << 12);
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
    return 3221225495LL;
  v7 = PopHiberScratchPages;
  v8 = *(_DWORD *)(v6 + 40) >> 12;
  *(_DWORD *)(a2 + 72) = v8;
  if ( v8 < v7 )
    return 3221225495LL;
  v9 = (int *)(*(_QWORD *)(a1 + 120) + 48LL);
  if ( v7 )
  {
    v10 = v4;
    v11 = v7;
    do
    {
      v12 = *v9;
      v9 += 2;
      *v10++ = v12;
      --v11;
    }
    while ( v11 );
  }
  PopWriteHiberPages(
    a1,
    v4,
    (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12,
    (unsigned int)(*(_DWORD *)(a1 + 248) + 2));
  v13 = PopHiberScratchPages;
  *(_DWORD *)(a2 + 72) = PopHiberScratchPages;
  *(_DWORD *)(a2 + 76) = tcpxsum(0, (const char *)v4, (4 * v13 + 4095) & 0xFFFFF000);
  *(_BYTE *)(a2 + 1086) = PopHiberResumeXhciHandoffSkip;
  if ( *(_QWORD *)(a1 + 240) )
  {
    v14 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 12;
    *(_DWORD *)(a1 + 184) = 1;
    memset(v4, 0, v14);
    v15 = (unsigned int)(*(_DWORD *)(a1 + 248) << 12);
    memmove(v4, *(const void **)(a1 + 240), v15);
    *(_DWORD *)(a2 + 964) = tcpxsum(0, (const char *)v4, v15);
    v16 = *(_DWORD *)(a1 + 248);
    *(_DWORD *)(a2 + 968) = v16;
    PopWriteHiberPages(a1, v4, v16, 2LL);
    v17 = tcpxsum(0, (const char *)v4, v15);
    v18 = *(_DWORD *)(a2 + 964);
    v19 = v17;
    if ( v18 != v17 )
    {
      DbgPrint("Checksum for resume context page changed from %lx to %lx\n", v18, v17);
      KeBugCheckEx(0xA0u, 3uLL, *(unsigned int *)(a2 + 964), v19, 0x2051uLL);
    }
  }
  v20 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 12;
  *(_DWORD *)(a1 + 184) = 2;
  memset(v4, 0, v20);
  memmove(v4, *(const void **)(a1 + 176), 0x5C0uLL);
  *(_DWORD *)(a2 + 80) = tcpxsum(0, (const char *)v4, 0x5C0u);
  PopWriteHiberPages(a1, v4, 1LL, 1LL);
  v21 = tcpxsum(0, (const char *)v4, 0x5C0u);
  v22 = *(_DWORD *)(a2 + 80);
  v23 = v21;
  if ( v22 != v21 )
  {
    DbgPrint("Checksum for context page changed from %lx to %lx\n", v22, v21);
    KeBugCheckEx(0xA0u, 3uLL, *(unsigned int *)(a2 + 80), v23, 0x2067uLL);
  }
  v24 = tcpxsum(0, (const char *)v4, 0x1000u);
  v25 = *(_DWORD *)(a2 + 80);
  v26 = v24;
  if ( v25 != v24 )
  {
    DbgPrint("Checksum for partial context page %lx doesn't match full %lx\n", v25, v24);
    KeBugCheckEx(0xA0u, 4uLL, *(unsigned int *)(a2 + 80), v26, 0x206EuLL);
  }
  return 0LL;
}
