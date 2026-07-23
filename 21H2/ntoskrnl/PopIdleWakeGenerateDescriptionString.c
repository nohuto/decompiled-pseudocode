/*
 * XREFs of PopIdleWakeGenerateDescriptionString @ 0x1408F4300
 * Callers:
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F4740 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     RtlUnicodeStringCat @ 0x1402AB490 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14036F1D0 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

signed int __fastcall PopIdleWakeGenerateDescriptionString(int *a1, __int64 a2)
{
  __int64 v2; // rax
  UNICODE_STRING *v3; // rbx
  wchar_t *v6; // r8
  signed int result; // eax
  __int64 v8; // rdx
  wchar_t *v9; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  wchar_t *PoolWithTag; // rax
  const wchar_t *v13; // r15
  SIZE_T v14; // r11
  SIZE_T v15; // rsi
  wchar_t *v16; // rax
  __int128 v17; // xmm0
  unsigned int *v18; // r15
  __int64 v19; // xmm1_8
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned __int16 *v22; // rdx
  SIZE_T v23; // rdi
  wchar_t *v24; // rax
  size_t *v25; // r9
  size_t v26; // r8
  const wchar_t *v27; // rcx
  __int64 v28; // r9
  __int16 v29; // dx
  signed __int64 v30; // r10
  unsigned int i; // esi
  unsigned __int64 MaximumLength; // rcx
  unsigned __int64 Length; // rdx
  wchar_t *Buffer; // r9
  const wchar_t *v35; // r8
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int16 v39; // r10
  unsigned __int64 v40; // r11
  char *v41; // r9
  size_t v42; // [rsp+20h] [rbp-60h]
  ULONG v43; // [rsp+28h] [rbp-58h]
  size_t pcbLength; // [rsp+30h] [rbp-50h] BYREF
  size_t v45; // [rsp+38h] [rbp-48h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-40h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-38h] BYREF
  __int128 v48; // [rsp+50h] [rbp-30h] BYREF
  __int64 v49; // [rsp+60h] [rbp-20h]
  __int64 v50; // [rsp+68h] [rbp-18h]

  v2 = *a1;
  v3 = (UNICODE_STRING *)(a2 + 392);
  pcbLength = 0LL;
  v45 = 0LL;
  if ( (unsigned int)v2 > 4 )
  {
    if ( (_DWORD)v2 == 6 )
    {
      v11 = *((unsigned __int8 *)a1 + 8);
      if ( (unsigned __int8)v11 >= 0x10u )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x67696450u);
        v3->Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_BYTE *)(a2 + 384) = 1;
          *(_DWORD *)&v3->Length = 0x400000;
          return RtlUnicodeStringPrintf(
                   v3,
                   L"Timer(Component:Index): %d:%d",
                   *((unsigned __int8 *)a1 + 8),
                   *((unsigned __int8 *)a1 + 10));
        }
        return -1073741670;
      }
      v13 = PopIrTimerDescriptions[v11];
      result = RtlStringCbLengthW(v13, 0xFFFFuLL, &pcbLength);
      if ( result < 0 )
        return result;
      if ( *((_BYTE *)a1 + 8) == 3 )
      {
        result = RtlStringCbLengthW((STRSAFE_PCNZWCH)a1 + 5, 0x80uLL, &v45);
        if ( result < 0 )
          return result;
        v15 = pcbLength + v45 + 42;
      }
      else
      {
        v15 = pcbLength + 48;
      }
      if ( v15 > v14 )
        return -2147483643;
      v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x67696450u);
      v3->Buffer = v16;
      if ( v16 )
      {
        *(_BYTE *)(a2 + 384) = 1;
        v3->Length = 0;
        v3->MaximumLength = v15;
        if ( *((_BYTE *)a1 + 8) == 3 )
          return RtlUnicodeStringPrintf(v3, L"Timer(Name:Index): %s:%s", v13, (char *)a1 + 10);
        else
          return RtlUnicodeStringPrintf(v3, L"Timer(Name:Index): %s:%d", v13, *((unsigned __int8 *)a1 + 10));
      }
    }
    else
    {
      if ( (_DWORD)v2 != 5 )
        return -1073741811;
      v17 = *(_OWORD *)(a1 + 2);
      v18 = (unsigned int *)(a2 + 408);
      v19 = *((_QWORD *)a1 + 3);
      v50 = a2 + 408;
      v48 = v17;
      v49 = v19;
      result = MmEnumerateSystemImages(
                 (__int64 (__fastcall *)(PVOID *, __int64))PopIdleWakeSystemImageCallback,
                 (__int64)&v48);
      if ( result < 0 )
        return result;
      v20 = 0LL;
      v21 = 0;
      if ( *v18 )
      {
        v22 = (unsigned __int16 *)(v18 + 2);
        do
        {
          if ( v21 )
            v20 += 4LL;
          ++v21;
          v20 += *v22;
          v22 += 8;
        }
        while ( v21 < *v18 );
      }
      v23 = v20 + 24;
      if ( v23 > 0xFFFF )
        return -2147483643;
      v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v23, 0x67696450u);
      v3->Buffer = v24;
      if ( v24 )
      {
        *(_BYTE *)(a2 + 384) = 1;
        v3->Length = 0;
        v3->MaximumLength = v23;
        ppszDest = 0LL;
        pcchDest = 0LL;
        result = RtlUnicodeStringValidateDestWorker(v3, &ppszDest, &pcchDest, v25, v42, v43);
        if ( result >= 0 )
        {
          v26 = pcchDest;
          v27 = L"Interrupt: ";
          v28 = 0x7FFFLL;
          result = 0;
          v29 = 0;
          if ( !pcchDest )
            goto LABEL_43;
          v30 = (char *)ppszDest - (char *)L"Interrupt: ";
          do
          {
            if ( !v28 )
              break;
            if ( !*v27 )
              break;
            *(const wchar_t *)((char *)v27 + v30) = *v27;
            --v28;
            ++v27;
            ++v29;
            --v26;
          }
          while ( v26 );
          if ( !v26 && v28 && *v27 )
LABEL_43:
            result = -2147483643;
          v3->Length = 2 * v29;
        }
        for ( i = 0; i < *v18; ++i )
        {
          if ( i )
          {
            MaximumLength = v3->MaximumLength;
            Length = v3->Length;
            if ( (((unsigned __int16)Length | (unsigned __int16)MaximumLength) & 1) == 0
              && (unsigned __int16)Length <= (unsigned __int16)MaximumLength
              && (_WORD)MaximumLength != 0xFFFF )
            {
              Buffer = v3->Buffer;
              if ( Buffer || !__PAIR32__(MaximumLength, Length) )
              {
                v35 = L", ";
                v36 = MaximumLength >> 1;
                v37 = Length >> 1;
                v38 = 0x7FFFLL;
                v39 = 0;
                v40 = v36 - v37;
                if ( v40 )
                {
                  v41 = (char *)Buffer + 2 * v37 - (_QWORD)L", ";
                  do
                  {
                    if ( !v38 )
                      break;
                    if ( !*v35 )
                      break;
                    *(const wchar_t *)((char *)v35 + (_QWORD)v41) = *v35;
                    --v38;
                    ++v35;
                    ++v39;
                  }
                  while ( v38 + v40 - 0x7FFF );
                }
                v3->Length = 2 * (v39 + v37);
              }
            }
          }
          result = RtlUnicodeStringCat(v3, (PCUNICODE_STRING)&v18[4 * i + 2]);
        }
        return result;
      }
    }
    return -1073741670;
  }
  _mm_lfence();
  v6 = PopDiagStaticWakeSourceDescriptions[v2];
  result = 0;
  *v3 = 0LL;
  if ( v6 )
  {
    v8 = 0x7FFFLL;
    v9 = v6;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v8;
    }
    while ( v8 );
    result = v8 == 0 ? 0xC000000D : 0;
    if ( v8 )
    {
      if ( v3 )
      {
        v10 = 2 * (v8 != 0 ? 0x7FFF - v8 : 0);
        v3->Buffer = v6;
        v3->Length = v10;
        v3->MaximumLength = v10 + 2;
        return result;
      }
      return -1073741811;
    }
  }
  return result;
}
