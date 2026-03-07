__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8,
        _DWORD *a9)
{
  int v9; // ebx
  int v10; // r15d
  __int64 Pool2; // rax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  HANDLE v14; // r8
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // eax
  __int128 v20; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P = 0LL;
  *a9 = 0;
  Pool2 = ExAllocatePool2(256LL, 48LL * a7, 1483763280LL);
  *a8 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_11;
  }
  PiPnpRtlBeginOperation((__int64 **)&P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_11;
  v13 = a6 + 20;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = *(_DWORD *)v13;
    v16 = *a8 + 48LL * (unsigned int)*a9;
    if ( !*(_DWORD *)v13 )
      goto LABEL_5;
    if ( v15 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, (__int64)&Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v13 - 20);
      v20 = *(_OWORD *)(v13 - 4);
      *(_DWORD *)(v16 + 32) = 0;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_DWORD *)(v16 + 36) = 0;
      *(_OWORD *)(v16 + 16) = v20;
      goto LABEL_9;
    }
    v14 = Handle;
    v15 = *(_DWORD *)v13;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_11;
    v17 = a6 + 32LL * v12;
    v18 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, (int)v14, v17, v15, a5, (_OWORD *)v16)
        : PiDqPnPGetObjectProperty(a3, v10, (__int64)v14, v17, v15, *(NTSTRSAFE_PCWSTR *)(v13 + 4), (PVOID *)v16);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_11;
LABEL_9:
    ++*a9;
    ++v12;
    v13 += 32LL;
    if ( v12 >= a7 )
      goto LABEL_11;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_11:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v9;
}
