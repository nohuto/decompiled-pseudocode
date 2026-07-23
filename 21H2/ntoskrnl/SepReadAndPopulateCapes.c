/*
 * XREFs of SepReadAndPopulateCapes @ 0x1407CDFCC
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CBCDC (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepRmCapPoolExpand @ 0x140598050 (SepRmCapPoolExpand.c)
 *     SeValidSecurityDescriptor @ 0x1405F1FD0 (SeValidSecurityDescriptor.c)
 *     SepRegOpenKey @ 0x1406C57D4 (SepRegOpenKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepReadAndPopulateCapes(HANDLE KeyHandle, int a2, unsigned int *a3, char **a4)
{
  char *v4; // r12
  _DWORD *PoolWithTag; // r14
  ULONG *v6; // rdi
  ULONG v8; // r15d
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  unsigned int v12; // eax
  char v13; // r15
  ULONG v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // eax
  char *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  char *v21; // rsi
  char *v22; // r15
  char *v23; // rsi
  __int16 v24; // ax
  char *v25; // rsi
  __int64 v26; // rcx
  NTSTATUS v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // esi
  ULONG v30; // esi
  unsigned int v31; // esi
  char *v32; // rsi
  char *v33; // rsi
  void *v34; // rdx
  __int64 v35; // rcx
  char *v36; // rsi
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  char v38; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int i; // [rsp+40h] [rbp-C0h]
  unsigned int v42; // [rsp+44h] [rbp-BCh]
  char *v43; // [rsp+48h] [rbp-B8h]
  ULONG v44; // [rsp+50h] [rbp-B0h]
  char **v45; // [rsp+58h] [rbp-A8h]
  unsigned int *v46; // [rsp+60h] [rbp-A0h]
  wchar_t pszDest[344]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyInformation[560]; // [rsp+320h] [rbp+220h] BYREF

  v45 = a4;
  v4 = 0LL;
  Length = 0;
  v38 = 0;
  PoolWithTag = KeyInformation;
  v6 = 0LL;
  Handle = 0LL;
  v46 = a3;
  v8 = 560;
  v10 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x230u, &Length);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_2;
  if ( v10 != -2147483643 && v10 != -1073741789 )
    goto LABEL_4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x70536553u);
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    v13 = 0;
    goto LABEL_15;
  }
  v8 = Length;
  v38 = 1;
  v11 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, Length, &Length);
  if ( v11 >= 0 )
  {
LABEL_2:
    v12 = PoolWithTag[5];
    v42 = v12;
    if ( !v12 )
    {
      *v45 = 0LL;
      *v46 = 0;
      goto LABEL_4;
    }
    v15 = a2 + 18;
    v16 = 56 * v12;
    v6 = (ULONG *)ExAllocatePoolWithTag(PagedPool, v15, 0x70536553u);
    if ( v6 )
    {
      v17 = 0;
      for ( i = 0; v17 < v42; i = v17 )
      {
        LODWORD(ResultLength) = v17;
        v11 = RtlStringCbPrintfW(
                pszDest,
                0x157uLL,
                L"%s\\%d",
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                ResultLength);
        if ( v11 < 0 )
          goto LABEL_10;
        v11 = SepRegOpenKey(pszDest, 0x201u, &Handle);
        if ( v11 < 0 )
          goto LABEL_10;
        v27 = ZwQueryKey(Handle, KeyFullInformation, PoolWithTag, v8, &Length);
        v11 = v27;
        if ( v27 < 0 )
        {
          if ( v27 != -2147483643 && v27 != -1073741789 )
            goto LABEL_4;
          v13 = v38;
          if ( v38 )
            ExFreePoolWithTag(PoolWithTag, 0x70536553u);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x70536553u);
          if ( !PoolWithTag )
          {
            v11 = -1073741670;
            goto LABEL_15;
          }
          v8 = Length;
          v38 = 1;
          v11 = ZwQueryKey(Handle, KeyFullInformation, PoolWithTag, Length, &Length);
          if ( v11 < 0 )
            goto LABEL_10;
        }
        v28 = PoolWithTag[10] + 18;
        if ( v28 > v15 )
        {
          v6 = (ULONG *)SepRmCapPoolExpand(v6, v28);
          if ( !v6 )
            goto LABEL_36;
          v15 = v28;
        }
        v11 = ZwQueryValueKey(Handle, &CapeName, KeyValuePartialInformation, v6, v15, &Length);
        if ( v11 < 0 )
          goto LABEL_10;
        v29 = v6[2] + ((v16 + 1) & 0xFFFFFFFE);
        v11 = ZwQueryValueKey(Handle, &CapePredicate, KeyValuePartialInformation, v6, v15, &Length);
        if ( v11 < 0 )
          goto LABEL_10;
        v30 = v6[2] + v29;
        v11 = ZwQueryValueKey(Handle, &CapeSD, KeyValuePartialInformation, v6, v15, &Length);
        if ( v11 < 0 )
          goto LABEL_10;
        v31 = v6[2] + ((v30 + 7) & 0xFFFFFFF8);
        v11 = ZwQueryValueKey(Handle, &CapeStagedSD, KeyValuePartialInformation, v6, v15, &Length);
        if ( v11 < 0 )
          goto LABEL_10;
        v16 = v6[2] + ((v31 + 7) & 0xFFFFFFF8);
        ZwClose(Handle);
        Handle = 0LL;
        v17 = i + 1;
      }
      v18 = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x70536553u);
      v4 = v18;
      if ( v18 )
      {
        memset(v18, 0, v16);
        v19 = v42;
        v43 = &v4[v16];
        v20 = 0;
        v21 = &v4[56 * v42];
        i = 0;
        if ( v42 )
        {
          v22 = v4 + 8;
          do
          {
            LODWORD(ResultLength) = v20;
            v11 = RtlStringCbPrintfW(
                    pszDest,
                    0x157uLL,
                    L"%s\\%d",
                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                    ResultLength);
            if ( v11 < 0 )
              goto LABEL_10;
            v11 = SepRegOpenKey(pszDest, 0x201u, &Handle);
            if ( v11 < 0 )
              goto LABEL_10;
            v11 = ZwQueryValueKey(Handle, &CapeFlags, KeyValuePartialInformation, v6, v15, &Length);
            if ( v11 < 0 )
              goto LABEL_10;
            if ( v6[2] != 4 )
            {
              v11 = -1073741811;
              goto LABEL_10;
            }
            *(_DWORD *)&v4[56 * i + 48] = v6[3];
            v11 = ZwQueryValueKey(Handle, &CapeName, KeyValuePartialInformation, v6, v15, &Length);
            if ( v11 < 0 )
              goto LABEL_10;
            v23 = (char *)((unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            if ( &v23[v6[2]] > v43 )
              goto LABEL_68;
            v24 = *((_WORD *)v6 + 4);
            *((_WORD *)v22 - 3) = v24;
            *((_WORD *)v22 - 4) = v24;
            *(_QWORD *)v22 = v23;
            memmove(v23, v6 + 3, v6[2]);
            v25 = &v23[v6[2]];
            v11 = ZwQueryValueKey(Handle, &CapePredicate, KeyValuePartialInformation, v6, v15, &Length);
            if ( v11 < 0 )
              goto LABEL_10;
            v26 = v6[2];
            if ( &v25[v26] > v43 )
              goto LABEL_68;
            *((_DWORD *)v22 + 2) = v26;
            if ( v6[2] )
            {
              *((_QWORD *)v22 + 2) = v25;
              memmove(v25, v6 + 3, v6[2]);
            }
            else
            {
              *((_QWORD *)v22 + 2) = 0LL;
            }
            v32 = &v25[v6[2]];
            v11 = ZwQueryValueKey(Handle, &CapeSD, KeyValuePartialInformation, v6, v15, &Length);
            if ( v11 < 0 )
              goto LABEL_10;
            v33 = (char *)((unsigned __int64)(v32 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( &v33[v6[2]] > v43 )
              goto LABEL_68;
            *((_QWORD *)v22 + 3) = v33;
            memmove(v33, v6 + 3, v6[2]);
            v34 = (void *)*((_QWORD *)v22 + 3);
            v44 = v6[2];
            if ( !SeValidSecurityDescriptor(v44, v34) )
              goto LABEL_64;
            v11 = ZwQueryValueKey(Handle, &CapeStagedSD, KeyValuePartialInformation, v6, v15, &Length);
            if ( v11 < 0 )
              goto LABEL_10;
            v35 = v6[2];
            v36 = (char *)((unsigned __int64)&v33[v44 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
            if ( &v36[v35] > v43 )
            {
LABEL_68:
              v11 = -1073741789;
              goto LABEL_10;
            }
            if ( (_DWORD)v35 )
            {
              *((_QWORD *)v22 + 4) = v36;
              memmove(v36, v6 + 3, v6[2]);
              if ( !SeValidSecurityDescriptor(v6[2], *((PSECURITY_DESCRIPTOR *)v22 + 4)) )
              {
LABEL_64:
                v11 = -1073741703;
                goto LABEL_10;
              }
            }
            else
            {
              *((_QWORD *)v22 + 4) = 0LL;
            }
            v21 = &v36[v6[2]];
            ZwClose(Handle);
            v22 += 56;
            Handle = 0LL;
            v20 = i + 1;
            v19 = v42;
            i = v20;
          }
          while ( v20 < v42 );
        }
        *v45 = v4;
        *v46 = v19;
LABEL_4:
        if ( v11 >= 0 )
        {
          v13 = v38;
          goto LABEL_6;
        }
        goto LABEL_10;
      }
    }
LABEL_36:
    v11 = -1073741670;
  }
LABEL_10:
  v13 = v38;
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
LABEL_6:
  if ( v13 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x70536553u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x70536553u);
  return (unsigned int)v11;
}
