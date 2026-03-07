__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, void *a2, const WCHAR *a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r12d
  void *Pool2; // rdi
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int InfoKey; // ebx
  __int64 v15; // rcx
  signed int i; // eax
  __int64 v17; // rbx
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rbx
  size_t v21; // rbx
  wchar_t *v22; // rax
  wchar_t *v23; // rsi
  HANDLE j; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  wchar_t *v30; // rax
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // r14d
  __int64 v37; // rcx
  HANDLE v38; // r15
  __int64 dwFlags; // [rsp+28h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  int v42; // [rsp+50h] [rbp-10h] BYREF
  int v43; // [rsp+54h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v45; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *a1;
  v5 = 0;
  Handle = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  v42 = 0;
  v45 = 0;
  Pool2 = 0LL;
  v43 = 0;
  v10 = 0;
  if ( a4 <= 1 )
  {
    if ( v4 && (v11 = *(_QWORD *)(v4 + 224)) != 0 )
      v12 = *(_QWORD *)(v11 + 8);
    else
      v12 = 0LL;
    v13 = RegRtlDeleteTreeInternal(a2, a3, v12, 0);
    InfoKey = v13;
LABEL_7:
    if ( v13 == -1073741444 )
      InfoKey = 0;
    goto LABEL_83;
  }
  v15 = 0LL;
  if ( v4 )
    v15 = *(_QWORD *)(v4 + 224);
  v13 = SysCtxRegOpenKey(v15, (__int64)a2, (__int64)a3, 0, 0x3001Fu, (__int64)&Handle);
  InfoKey = v13;
  if ( v13 < 0 )
    goto LABEL_7;
  for ( i = PnpGetGenericStorePropertyKeys(
              *a1,
              (__int64)Handle,
              0LL,
              0,
              0LL,
              0,
              (unsigned int *)&DestinationString.Length);
        ;
        i = PnpGetGenericStorePropertyKeys(
              *a1,
              (__int64)Handle,
              0LL,
              0,
              (__int64)Pool2,
              v17,
              (unsigned int *)&DestinationString.Length) )
  {
    InfoKey = i;
    if ( i != -1073741789 )
      break;
    v17 = *(unsigned int *)&DestinationString.Length;
    if ( *(_DWORD *)&DestinationString.Length <= v10 )
    {
      InfoKey = -1073741595;
      goto LABEL_81;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v10 = v17;
    Pool2 = (void *)ExAllocatePool2(256LL, 20 * v17, 1111770192LL);
    if ( !Pool2 )
    {
      InfoKey = -1073741801;
      goto LABEL_83;
    }
  }
  if ( i == -1073741275 || i >= 0 )
  {
    if ( i != -1073741275 )
      v5 = v10;
    InfoKey = 0;
    v18 = 0LL;
    if ( i != -1073741275 )
      InfoKey = i;
    if ( v5 )
    {
      do
      {
        v19 = PnpDeletePropertyWorker(*a1, (__int64)Handle, 0LL, (__int64)Pool2 + 20 * v18, 0, dwFlags, 0);
        InfoKey = v19;
        if ( v19 == -1073741275 || v19 == -1073741790 )
        {
          InfoKey = 0;
        }
        else if ( v19 < 0 )
        {
          goto LABEL_81;
        }
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < v5 );
    }
    if ( InfoKey >= 0 )
    {
      if ( wcschr(a3, 0x5Cu) )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a3[v20] );
        v21 = v20 + 1;
        v22 = (wchar_t *)ExAllocatePool2(256LL, 2 * v21, 1111770192LL);
        v23 = v22;
        if ( v22 )
        {
          RtlStringCchCopyExW(v22, v21, a3, 0LL, 0LL, 0x900u);
          for ( j = Handle; ; j = 0LL )
          {
            if ( !j )
            {
              v25 = 0LL;
              if ( *a1 )
                v25 = *(_QWORD *)(*a1 + 224);
              v26 = SysCtxRegOpenKey(v25, (__int64)a2, (__int64)v23, 0, 0x3001Fu, (__int64)&Handle);
              InfoKey = v26;
              if ( v26 < 0 )
              {
                if ( v26 == -1073741444 )
                  InfoKey = 0;
                goto LABEL_80;
              }
              InfoKey = PnpCtxRegQueryInfoKey(v27, (int)Handle, (int)&v42, 0, (__int64)&v45, 0LL, 0LL);
              if ( InfoKey < 0 || v42 || v45 )
                goto LABEL_80;
              j = Handle;
            }
            if ( *a1 && (v28 = *(_QWORD *)(*a1 + 224)) != 0 )
              v29 = *(_QWORD *)(v28 + 8);
            else
              v29 = 0LL;
            InfoKey = RegRtlDeleteKeyTransacted(j, 0LL, v29);
            if ( InfoKey == -1073741444 )
            {
              InfoKey = 0;
            }
            else if ( InfoKey < 0 )
            {
              v31 = InfoKey == -1073741535;
              goto LABEL_78;
            }
            v30 = wcsrchr(v23, 0x5Cu);
            if ( !v30 )
              goto LABEL_80;
            *v30 = 0;
            ZwClose(Handle);
            Handle = 0LL;
          }
        }
LABEL_39:
        InfoKey = -1073741801;
        goto LABEL_81;
      }
      if ( *a1 && (v32 = *(_QWORD *)(*a1 + 224)) != 0 )
        v33 = *(_QWORD *)(v32 + 8);
      else
        v33 = 0LL;
      v34 = RegRtlDeleteKeyTransacted(Handle, 0LL, v33);
      InfoKey = v34;
      if ( v34 == -1073741444 )
      {
        InfoKey = 0;
      }
      else if ( v34 == -1073741535 )
      {
        InfoKey = PnpCtxRegQueryInfoKey(v35, (int)Handle, 0, 0, (__int64)&v45, (__int64)&v43, 0LL);
        if ( InfoKey >= 0 )
        {
          v36 = v43 + 1;
          if ( v45 )
          {
            v23 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v36, 1111770192LL);
            if ( v23 )
            {
              while ( 1 )
              {
                v45 = v36;
                InfoKey = PnpCtxRegEnumValue(v37, Handle, 0, v23, (__int64)&v45, 0LL, 0LL, 0LL);
                if ( InfoKey < 0 )
                  break;
                v38 = Handle;
                DestinationString = 0LL;
                InfoKey = RtlInitUnicodeStringEx(&DestinationString, v23);
                if ( InfoKey >= 0 )
                  InfoKey = ZwDeleteValueKey(v38, &DestinationString);
                if ( ((InfoKey + 0x80000000) & 0x80000000) == 0 && InfoKey != -1073741772 )
                  goto LABEL_80;
              }
              v31 = InfoKey == -2147483622;
LABEL_78:
              if ( v31 )
                InfoKey = 0;
LABEL_80:
              ExFreePoolWithTag(v23, 0);
              goto LABEL_81;
            }
            goto LABEL_39;
          }
        }
      }
    }
  }
LABEL_81:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_83:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
