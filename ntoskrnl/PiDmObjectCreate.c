__int64 __fastcall PiDmObjectCreate(int a1, const wchar_t *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v6; // r13
  __int64 Pool2; // rax
  __int64 v8; // rdi
  __int64 **v9; // rsi
  __int64 v10; // rcx
  signed int PWSTR; // ebx
  __int64 *v12; // rdx
  __int64 *v13; // r8
  wchar_t *v14; // r8
  wchar_t *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  DEVPROPKEY **v19; // r12
  __int64 *v20; // rsi
  unsigned int CachedKeyIndex; // eax
  wchar_t *v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  DEVPROPKEY **v26; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v26 = 0LL;
  v25 = 0;
  LOBYTE(v29) = 0;
  PiDmGetCacheKeys(a1, &v26, &v25);
  v6 = v25;
  Pool2 = ExAllocatePool2(256LL, 24 * v25 + 112, 1517317712LL);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v9 = (__int64 **)(Pool2 + 16);
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_DWORD *)(Pool2 + 28) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)(Pool2 + 16));
  if ( PWSTR < 0 )
    goto LABEL_40;
  v12 = *v9;
  if ( a1 == 3 )
  {
    PWSTR = CmSetDeviceInterfacePathFormat(v10, v12, 0);
    if ( PWSTR >= 0 )
    {
      v13 = *v9;
      PWSTR = 0;
      String = 0LL;
      v14 = (wchar_t *)(v13 + 1);
      if ( !v14 )
        goto LABEL_11;
      v15 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v16;
      }
      while ( v16 );
      goto LABEL_9;
    }
LABEL_40:
    PiDmObjectRelease((unsigned int *)v8);
    return (unsigned int)PWSTR;
  }
  PWSTR = PnpValidateObjectName(v10, (__int64)v12, a1);
  if ( PWSTR < 0 )
    goto LABEL_40;
  v14 = (wchar_t *)*v9;
  PWSTR = 0;
  String = 0LL;
  if ( v14 )
  {
    v23 = v14;
    v16 = 0x7FFFLL;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v16;
    }
    while ( v16 );
LABEL_9:
    PWSTR = v16 == 0 ? 0xC000000D : 0;
    if ( v16 )
    {
      String.Buffer = v14;
      String.Length = 2 * (0x7FFF - v16);
      String.MaximumLength = String.Length + 2;
    }
  }
LABEL_11:
  if ( PWSTR < 0 )
    goto LABEL_40;
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)(v8 + 24));
  if ( a1 == 1 )
  {
    v24 = (_QWORD *)(v8 + 88);
  }
  else if ( a1 == 2 || a1 == 4 )
  {
    v24 = (_QWORD *)(v8 + 40);
  }
  else
  {
    if ( (unsigned int)(a1 - 5) >= 2 )
      goto LABEL_16;
    *(_QWORD *)(v8 + 48) = v8 + 40;
    *(_QWORD *)(v8 + 40) = v8 + 40;
    v24 = (_QWORD *)(v8 + 64);
  }
  *v24 = v24;
  v24[1] = v24;
LABEL_16:
  if ( (_DWORD)v6 )
  {
    v17 = (_DWORD *)(v8 + 112);
    v18 = v6;
    do
    {
      *v17 = 1;
      v17 += 6;
      --v18;
    }
    while ( v18 );
  }
  v19 = v26;
  v20 = (__int64 *)&off_140001508;
  do
  {
    if ( a1 == *((_DWORD *)v20 - 2) )
    {
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v19, v6, *v20);
      if ( CachedKeyIndex >= (unsigned int)v6 )
      {
        PWSTR = -1073741595;
        goto LABEL_40;
      }
      PWSTR = PiDmCacheDataEncode(
                17,
                &v29,
                1u,
                (int)v19[3 * CachedKeyIndex + 1],
                HIDWORD(v19[3 * CachedKeyIndex + 1]),
                v8 + 112 + 24LL * CachedKeyIndex);
      if ( PWSTR < 0 )
        goto LABEL_40;
    }
    ++v3;
    v20 += 7;
  }
  while ( v3 < 3 );
  if ( PWSTR < 0 )
    goto LABEL_40;
  *a3 = v8;
  return (unsigned int)PWSTR;
}
