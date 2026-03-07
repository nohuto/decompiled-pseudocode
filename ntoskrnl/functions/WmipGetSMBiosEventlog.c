__int64 __fastcall WmipGetSMBiosEventlog(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  int v6; // r11d
  __int128 *v7; // r10
  size_t v8; // r12
  int v9; // r13d
  unsigned int v10; // ebx
  char v11; // dl
  unsigned __int16 v12; // r9
  unsigned int v13; // esi
  void *v14; // r14
  __int128 v15; // xmm0
  const void *v16; // rax
  void *v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+58h] BYREF

  BaseAddress = 0LL;
  v18 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  result = WmipFindSMBiosStructure(15, &v18, &BaseAddress, &NumberOfBytes);
  if ( (int)result < 0 )
    return result;
  v5 = v18;
  v6 = *(unsigned __int8 *)(v18 + 1);
  v7 = (__int128 *)(v18 + 4);
  v8 = *(unsigned __int16 *)(v18 + 4);
  v9 = *(unsigned __int8 *)(v18 + 10);
  v10 = *(_DWORD *)(v18 + 16);
  if ( (unsigned __int8)v6 < 0x17u )
  {
    v12 = 0;
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v12 = *(unsigned __int8 *)(v18 + 21) * *(unsigned __int8 *)(v18 + 22);
    if ( v6 != v12 + 23 )
    {
      if ( BaseAddress )
        MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
      ExReleaseResourceLite(&WmipSMBiosLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225473LL;
    }
  }
  v13 = v12 + v8 + 23;
  if ( *a2 < v13 )
  {
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    result = 3221225507LL;
  }
  else
  {
    *(_BYTE *)(a1 + 3) = 0;
    v14 = (void *)(v12 + a1 + 23);
    *(_WORD *)a1 = v12;
    *(_BYTE *)(a1 + 2) = v11;
    if ( v11 == 1 )
    {
      memmove((void *)(a1 + 4), v7, *(unsigned __int8 *)(v5 + 1) - 4LL);
    }
    else
    {
      v15 = *v7;
      *(_WORD *)(a1 + 20) = 0;
      *(_OWORD *)(a1 + 4) = v15;
      *(_BYTE *)(a1 + 22) = 0;
    }
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 == 3
      && (NumberOfBytes = v10, v16 = (const void *)MmMapIoSpaceEx(v10, v8, 4u), v17 = (void *)v16, v14)
      && v16 )
    {
      memmove(v14, v16, v8);
      MmUnmapIoSpace(v17, v8);
      result = 0LL;
    }
    else
    {
      result = 3221225473LL;
    }
  }
  *a2 = v13;
  return result;
}
