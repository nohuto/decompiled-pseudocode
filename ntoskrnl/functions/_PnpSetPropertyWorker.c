__int64 __fastcall PnpSetPropertyWorker(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        ULONG a7)
{
  __int16 v7; // r11
  NTSTATUS v11; // ebx
  int Key; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  ULONG dwFlags; // [rsp+20h] [rbp-F0h]
  HANDLE v21; // [rsp+90h] [rbp-80h] BYREF
  HANDLE v22; // [rsp+98h] [rbp-78h]
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  int v24; // [rsp+A4h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-60h]
  __int64 v27; // [rsp+B8h] [rbp-58h]
  size_t pcchLength; // [rsp+C0h] [rbp-50h] BYREF
  wchar_t Dst[12]; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[40]; // [rsp+E0h] [rbp-30h] BYREF

  v7 = 0;
  v26 = a2;
  v27 = a6;
  v24 = 0;
  v23 = 0;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  if ( a7 > 0x7FFFFFFF )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v11 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  if ( a5 == 25 && a3 && *a3 != v7 )
    return (unsigned int)-1073741811;
  if ( RtlStringCchPrintfExW(
         pszDest,
         0x27uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         *(_DWORD *)a4,
         *(unsigned __int16 *)(a4 + 4),
         *(unsigned __int16 *)(a4 + 6),
         *(unsigned __int8 *)(a4 + 8),
         *(unsigned __int8 *)(a4 + 9),
         *(unsigned __int8 *)(a4 + 10),
         *(unsigned __int8 *)(a4 + 11),
         *(unsigned __int8 *)(a4 + 12),
         *(unsigned __int8 *)(a4 + 13),
         *(unsigned __int8 *)(a4 + 14),
         *(unsigned __int8 *)(a4 + 15)) < 0 )
    goto LABEL_20;
  swprintf_s(Dst, 9uLL, L"%04lX", *(unsigned int *)(a4 + 16));
  LOBYTE(dwFlags) = 1;
  v11 = PnpOpenPropertiesKey(a1, v26, 0LL, 4LL, dwFlags);
  if ( v11 < 0 )
  {
    v22 = 0LL;
    goto LABEL_13;
  }
  Key = PnpCtxRegCreateKey(a1, (_DWORD)v22, (unsigned int)pszDest, 0, 4, 0LL, (__int64)&v21, (__int64)&v24);
  if ( Key == -1073741444 )
    goto LABEL_20;
  if ( Key < 0 )
  {
    v21 = 0LL;
    v11 = Key;
    goto LABEL_13;
  }
  v13 = PnpCtxRegCreateKey(a1, (_DWORD)v21, (unsigned int)Dst, 0, 65542, 0LL, (__int64)&Handle, (__int64)&v23);
  if ( v13 == -1073741444 )
  {
LABEL_20:
    v11 = -1073741595;
LABEL_13:
    if ( Handle )
    {
      ZwClose(Handle);
      if ( v11 < 0 && v23 == 1 )
      {
        if ( a1 && (v16 = *(_QWORD *)(a1 + 224)) != 0 )
          v17 = *(_QWORD *)(v16 + 8);
        else
          v17 = 0LL;
        RegRtlDeleteTreeInternal(v21, Dst, v17, 0LL);
      }
    }
    goto LABEL_15;
  }
  if ( v13 >= 0 )
  {
    v14 = RegRtlSetValue(Handle, a7);
    if ( v14 != -1073741444 )
    {
      if ( v14 < 0 )
        v11 = v14;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
  Handle = 0LL;
  v11 = v13;
LABEL_15:
  if ( v21 )
  {
    ZwClose(v21);
    if ( v11 < 0 && v24 == 1 )
    {
      if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      RegRtlDeleteTreeInternal(v22, pszDest, v19, 0LL);
    }
  }
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)v11;
}
