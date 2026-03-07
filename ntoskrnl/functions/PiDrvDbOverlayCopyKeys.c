__int64 __fastcall PiDrvDbOverlayCopyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  char *Pool2; // rdi
  void *v10; // r15
  int Key; // ebx
  ULONG v12; // esi
  __int64 v13; // rcx
  ULONG v14; // eax
  unsigned int v15; // r12d
  ULONG i; // r13d
  int v17; // eax
  __int64 v18; // rcx
  ULONG v19; // r14d
  __int64 v20; // rsi
  unsigned int v21; // r12d
  const wchar_t **v22; // r14
  __int64 v23; // rdx
  __int16 v24; // ax
  ULONG v25; // ecx
  __int64 v26; // rcx
  HANDLE v27; // rdx
  int v28; // eax
  ULONG v29; // r13d
  __int64 v30; // r14
  ULONG v32; // [rsp+40h] [rbp-69h] BYREF
  ULONG v33; // [rsp+44h] [rbp-65h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-61h] BYREF
  ULONG v35; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v36; // [rsp+50h] [rbp-59h]
  ULONG ResultLength; // [rsp+54h] [rbp-55h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-41h]
  int v41; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v42; // [rsp+70h] [rbp-39h]
  ULONG v43; // [rsp+74h] [rbp-35h] BYREF
  HANDLE v44; // [rsp+78h] [rbp-31h]
  PVOID P; // [rsp+80h] [rbp-29h]
  __int64 v46; // [rsp+88h] [rbp-21h]
  __int64 v47; // [rsp+90h] [rbp-19h]
  __int64 KeyInformation; // [rsp+98h] [rbp-11h] BYREF
  int v49; // [rsp+A0h] [rbp-9h]

  v46 = a6;
  v47 = a8;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  KeyInformation = 0LL;
  v49 = 0;
  v10 = 0LL;
  v44 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v41 = 0;
  v42 = 0;
  v32 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v43 = 0;
  ResultLength = 0;
  v40 = a7;
  Key = SysCtxRegOpenKey(0LL, a1, a2, 8u, 0x20019u, (__int64)&KeyHandle);
  if ( Key >= 0 )
  {
    if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) >= 0
      && (KeyInformation & 0x200000000LL) != 0 )
    {
      Key = -2147483603;
      goto LABEL_82;
    }
    v12 = 0;
    Key = PnpCtxRegCreateKey(0LL, a3);
    if ( Key >= 0 )
    {
      if ( (int)PnpCtxRegQueryInfoKey(v13, (int)KeyHandle, 0, (int)&v32, 0LL, (__int64)&v35, (__int64)&v33) < 0 )
      {
        v15 = 0;
      }
      else
      {
        v14 = v35;
        if ( v32 > v35 )
          v14 = v32;
        v15 = 2 * v14 + 2;
        v36 = v15;
        if ( 2 * v14 != -2 )
        {
          Pool2 = (char *)ExAllocatePool2(256LL, v15, 1650749520LL);
          if ( !Pool2 )
          {
            Key = -1073741670;
            goto LABEL_82;
          }
        }
      }
      if ( (!v33 || (v10 = (void *)ExAllocatePool2(256LL, v33, 1650749520LL)) != 0LL)
        && (!v46 || !a7 || (P = (PVOID)ExAllocatePool2(256LL, 8LL * a7, 1650749520LL)) != 0LL) )
      {
        for ( i = 0; ; ++i )
        {
          v35 = i;
          v34 = v15 >> 1;
          v17 = RegRtlEnumKey(KeyHandle, i, Pool2, &v34);
          if ( v17 == -2147483622 )
          {
            if ( Key >= 0 )
            {
              v29 = v33;
              while ( 1 )
              {
                v34 = v15 >> 1;
                v33 = v29;
                v17 = PnpCtxRegEnumValue(v18, KeyHandle, v12, Pool2, (__int64)&v34, (__int64)&v43, v10, (__int64)&v33);
                if ( v17 == -2147483622 )
                  break;
                if ( v17 == -1073741789 )
                {
                  if ( v34 > v15 >> 1 )
                  {
                    v15 = 2 * v34;
                    if ( Pool2 )
                      ExFreePoolWithTag(Pool2, 0);
                    Pool2 = (char *)ExAllocatePool2(256LL, v15, 1650749520LL);
                    if ( !Pool2 )
                      goto LABEL_56;
                  }
                  v30 = v33;
                  if ( v33 > v29 )
                  {
                    v29 = v33;
                    if ( v10 )
                      ExFreePoolWithTag(v10, 0);
                    v10 = (void *)ExAllocatePool2(256LL, v30, 1650749520LL);
                    if ( !v10 )
                      goto LABEL_15;
                  }
                  --v12;
                }
                else
                {
                  if ( v17 < 0 )
                    goto LABEL_75;
                  if ( v42 != 2
                    || (ResultLength = 0,
                        (unsigned int)RegRtlQueryValue(v44, (const WCHAR *)Pool2, 0LL, 0LL, &ResultLength) != -1073741789) )
                  {
                    Key = RegRtlSetValue(v44, (const WCHAR *)Pool2, v43, v10, v33);
                    if ( Key < 0 )
                      goto LABEL_76;
                  }
                }
                ++v12;
              }
            }
            goto LABEL_76;
          }
          if ( v17 == -1073741789 )
          {
            v15 = 2 * v34;
            v36 = 2 * v34;
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            Pool2 = (char *)ExAllocatePool2(256LL, v15, 1650749520LL);
            if ( Pool2 )
            {
              --i;
              continue;
            }
LABEL_56:
            Key = -1073741670;
            goto LABEL_78;
          }
          if ( v17 < 0 )
            goto LABEL_75;
          v19 = 0;
          v32 = 0;
          if ( !v46 )
            goto LABEL_42;
          v20 = v34;
          if ( !v34 )
            goto LABEL_41;
          v21 = 0;
          if ( !v40 )
            goto LABEL_40;
          v22 = (const wchar_t **)v46;
          while ( wcsnicmp(*v22, (const wchar_t *)Pool2, (unsigned int)(v20 - 1)) )
          {
LABEL_36:
            ++v21;
            ++v22;
            if ( v21 >= v40 )
              goto LABEL_39;
          }
          v23 = (__int64)&(*v22)[v20];
          v24 = *(_WORD *)(v23 - 2);
          if ( v24 )
            break;
          LODWORD(v20) = 0;
LABEL_39:
          i = v35;
          v19 = v32;
LABEL_40:
          v15 = v36;
          if ( !(_DWORD)v20 )
          {
            v12 = 0;
            continue;
          }
LABEL_41:
          v12 = 0;
LABEL_42:
          if ( !v47 )
            goto LABEL_49;
          v17 = SysCtxRegOpenKey(0LL, v47, (__int64)Pool2, 0, 0x20019u, (__int64)&Handle);
          if ( v17 == -1073741772 )
          {
            Handle = 0LL;
            continue;
          }
          if ( v17 < 0 )
          {
LABEL_75:
            Key = v17;
            goto LABEL_76;
          }
          Key = PnpCtxRegQueryInfoKey(v26, (int)Handle, (int)&v41, 0, 0LL, 0LL, 0LL);
          if ( Key >= 0 )
          {
            if ( !v41 )
            {
              ZwClose(Handle);
              v27 = 0LL;
              Handle = 0LL;
              goto LABEL_50;
            }
LABEL_49:
            v27 = Handle;
LABEL_50:
            v28 = PiDrvDbOverlayCopyKeys(
                    (_DWORD)KeyHandle,
                    (_DWORD)Pool2,
                    (_DWORD)v44,
                    (_DWORD)Pool2,
                    0,
                    (unsigned __int64)P & -(__int64)(v19 != 0),
                    v19,
                    (__int64)v27);
            Key = v28;
            if ( v28 == -2147483603 )
            {
              Key = 0;
              continue;
            }
            if ( v28 >= 0 )
              continue;
          }
          goto LABEL_76;
        }
        if ( v24 == 92 && P )
        {
          v25 = v32;
          *((_QWORD *)P + v32) = v23;
          v32 = v25 + 1;
        }
        goto LABEL_36;
      }
LABEL_15:
      Key = -1073741670;
LABEL_76:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_78:
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
LABEL_82:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v44 )
    ZwClose(v44);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)Key;
}
