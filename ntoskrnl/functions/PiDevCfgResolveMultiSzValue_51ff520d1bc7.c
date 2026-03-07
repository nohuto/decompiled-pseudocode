__int64 __fastcall PiDevCfgResolveMultiSzValue(
        int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        __int64 *a8)
{
  size_t v8; // rbx
  _WORD *v10; // r14
  char v12; // al
  NTSTATUS RegistryValue; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  unsigned int *v18; // r13
  unsigned int v19; // esi
  void *v20; // rax
  __int64 v21; // r15
  unsigned int v22; // r13d
  int v23; // r12d
  const WCHAR *v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // r12d
  const WCHAR *v28; // r12
  bool v29; // zf
  unsigned int v30; // ebx
  unsigned int v31; // eax
  void *Pool2; // rax
  unsigned int v33; // [rsp+20h] [rbp-30h]
  NTSTATUS v34; // [rsp+24h] [rbp-2Ch]
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v8 = a2;
  P = 0LL;
  v10 = a3;
  *a7 = 0;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  *a8 = 0LL;
  if ( a1 == 1 || a1 == 2 )
  {
    v12 = PnpValidateStringData((__int64)a3, a2);
  }
  else
  {
    if ( a1 != 7 )
      return (unsigned int)-1073741823;
    v12 = PnpValidateMultiSzData(a3, a2);
  }
  if ( !v12 )
    return (unsigned int)-1073741823;
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v34 = RegistryValue;
  v17 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_27;
    v17 = 0;
    if ( (a4 & 0x40000) == 0 )
    {
      v19 = 0;
      v21 = 0LL;
      goto LABEL_26;
    }
    v31 = v8 + 2;
    if ( a1 == 7 )
      v31 = v8;
    v19 = v31;
    Pool2 = (void *)ExAllocatePool2(256LL, v31, 1667526736LL);
    v21 = (__int64)Pool2;
    if ( !Pool2 )
    {
      v17 = -1073741670;
      goto LABEL_27;
    }
    memmove(Pool2, v10, v8);
    goto LABEL_25;
  }
  v18 = (unsigned int *)P;
  if ( PnpValidateRegistryMultiSz(P, v14, v15, v16) )
  {
    if ( (a4 & 0x40000) != 0 )
    {
      v19 = v18[3];
      Src[0] = (char *)v18 + v18[2];
      if ( !v19 )
        v19 = 2;
      v20 = (void *)ExAllocatePool2(256LL, v19 + (unsigned int)v8, 1667526736LL);
      v21 = (__int64)v20;
      if ( v20 )
      {
        if ( v19 <= 2 )
        {
          v22 = 0;
        }
        else
        {
          memmove(v20, Src[0], v19);
          v22 = v19 - 2;
        }
        v23 = a4 & 0x20000;
        if ( a1 == 7 )
        {
          if ( !v23 )
          {
            if ( !*v10 )
              goto LABEL_24;
            v24 = (const WCHAR *)Src[0];
            do
            {
              v25 = -1LL;
              do
                ++v25;
              while ( v10[v25] );
              v26 = 2 * v25 + 2;
              if ( !PnpMultiSzContainsString(v24, v10) )
              {
                memmove((void *)(v21 + v22), v10, v26);
                v22 += v26;
                v19 += v26;
              }
              v10 += (unsigned __int64)v26 >> 1;
            }
            while ( *v10 );
            goto LABEL_23;
          }
          memmove((void *)(v21 + v22), v10, v8);
          v19 = v19 + v8 - 2;
        }
        else if ( v23 || v19 == 2 || !PnpMultiSzContainsString((PCWSTR)Src[0], v10) )
        {
          memmove((void *)(v21 + v22), v10, v8);
          v19 += v8;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v21 = ExAllocatePool2(256LL, v18[3], 1667526736LL);
      if ( v21 )
      {
        if ( a1 != 7 )
          RtlInitUnicodeString(&DestinationString, v10);
        v28 = (const WCHAR *)((char *)v18 + v18[2]);
        v33 = 0;
        v19 = 2;
        if ( *v28 )
        {
          do
          {
            RtlInitUnicodeString((PUNICODE_STRING)Src, v28);
            if ( a1 == 7 )
              v29 = PnpMultiSzContainsString(v10, (const WCHAR *)Src[1]) == 0LL;
            else
              v29 = RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)Src, 1u) == 0;
            if ( v29 )
            {
              v30 = LOWORD(Src[0]) + 2;
              memmove((void *)(v21 + v33), Src[1], v30);
              v33 += v30;
              v19 += v30;
            }
            v28 += ((unsigned __int64)LOWORD(Src[0]) >> 1) + 1;
          }
          while ( *v28 );
LABEL_23:
          v17 = v34;
        }
LABEL_24:
        if ( !v21 )
        {
LABEL_26:
          *a7 = v19;
          *a8 = v21;
LABEL_27:
          v18 = (unsigned int *)P;
          goto LABEL_28;
        }
LABEL_25:
        *(_WORD *)(v21 + 2 * ((unsigned __int64)v19 >> 1) - 2) = 0;
        goto LABEL_26;
      }
    }
    v17 = -1073741670;
  }
  else
  {
    v17 = -1073741823;
  }
LABEL_28:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return v17;
}
