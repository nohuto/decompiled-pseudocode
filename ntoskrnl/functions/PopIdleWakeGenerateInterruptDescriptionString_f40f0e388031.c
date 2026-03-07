__int64 __fastcall PopIdleWakeGenerateInterruptDescriptionString(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  UNICODE_STRING *v5; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // edx
  unsigned __int16 *v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 Pool2; // rax
  const wchar_t *v18; // rdx
  __int64 v19; // r8
  __int16 v20; // cx
  signed __int64 v21; // r9
  unsigned int i; // ebx
  __int64 v23; // r8
  __int16 v24; // r11
  const wchar_t *v25; // r9
  __int16 v26; // dx
  size_t v27; // r10
  char *v28; // rcx
  size_t v29; // [rsp+20h] [rbp-50h]
  ULONG v30; // [rsp+28h] [rbp-48h]
  size_t pcchDest; // [rsp+30h] [rbp-40h] BYREF
  size_t pcchDestLength; // [rsp+38h] [rbp-38h] BYREF
  wchar_t *ppszDest; // [rsp+40h] [rbp-30h] BYREF
  __int64 v34; // [rsp+48h] [rbp-28h] BYREF
  __int128 v35; // [rsp+50h] [rbp-20h]
  __int64 v36; // [rsp+60h] [rbp-10h]

  v2 = (unsigned int *)(a2 + 784);
  v34 = 0LL;
  v3 = 0;
  v36 = a2 + 784;
  v35 = 0LL;
  v4 = 0;
  v5 = (UNICODE_STRING *)(a2 + 768);
  v7 = (__int64 *)(a1 + 8);
  do
  {
    v8 = v7[3];
    if ( v8 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      if ( !v10 )
        return 3221225485LL;
      result = PopGenerateDeviceFriendlyName(v10, 3, (UNICODE_STRING *)&v2[4 * *v2 + 2]);
      if ( (int)result < 0 )
        return result;
      ++*v2;
    }
    else if ( *v7 )
    {
      v9 = v3++;
      *(&v34 + v9) = *v7;
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 3 );
  if ( !v3
    || (result = MmEnumerateSystemImages(
                   (__int64 (__fastcall *)(PVOID *, __int64))PopIdleWakeSystemImageCallback,
                   (__int64)&v34),
        (int)result >= 0) )
  {
    v12 = 0LL;
    v13 = 0;
    if ( *v2 )
    {
      v14 = (unsigned __int16 *)(v2 + 2);
      do
      {
        v15 = v12 + 4;
        if ( !v13 )
          v15 = v12;
        v12 = v15 + *v14;
        v14 += 8;
        ++v13;
      }
      while ( v13 < *v2 );
    }
    v16 = v12 + 24;
    if ( v16 <= 0xFFFF )
    {
      Pool2 = ExAllocatePool2(256LL, v16, 1734960208LL);
      v5->Buffer = (wchar_t *)Pool2;
      if ( Pool2 )
      {
        *(_BYTE *)(a2 + 760) = 1;
        v5->Length = 0;
        v5->MaximumLength = v16;
        if ( (v16 & 1) == 0 && (_WORD)v16 != 0xFFFF && (v5->Buffer || !(_WORD)v16) )
        {
          v18 = L"Interrupt: ";
          v19 = 0x7FFFLL;
          v20 = 0;
          if ( (unsigned __int64)(unsigned __int16)v16 >> 1 )
          {
            v21 = (char *)v5->Buffer - (char *)L"Interrupt: ";
            do
            {
              if ( !v19 )
                break;
              if ( !*v18 )
                break;
              *(const wchar_t *)((char *)v18 + v21) = *v18;
              --v19;
              ++v18;
              ++v20;
            }
            while ( ((unsigned __int64)(unsigned __int16)v16 >> 1) + v19 - 0x7FFF );
          }
          v5->Length = 2 * v20;
        }
        for ( i = 0; i < *v2; ++i )
        {
          if ( i )
          {
            ppszDest = 0LL;
            pcchDest = 0LL;
            pcchDestLength = 0LL;
            if ( RtlUnicodeStringValidateDestWorker(v5, &ppszDest, &pcchDest, &pcchDestLength, v29, v30) >= 0 )
            {
              v23 = 0x7FFFLL;
              v24 = pcchDestLength;
              v25 = L", ";
              v26 = 0;
              v27 = pcchDest - pcchDestLength;
              if ( pcchDest != pcchDestLength )
              {
                v28 = (char *)ppszDest + 2 * pcchDestLength - (_QWORD)L", ";
                do
                {
                  if ( !v23 )
                    break;
                  if ( !*v25 )
                    break;
                  *(const wchar_t *)((char *)v25 + (_QWORD)v28) = *v25;
                  --v23;
                  ++v25;
                  ++v26;
                }
                while ( v23 + v27 - 0x7FFF );
              }
              v5->Length = 2 * (v24 + v26);
            }
          }
          RtlUnicodeStringCat(v5, (PCUNICODE_STRING)&v2[4 * i + 2]);
        }
        return 0LL;
      }
      else
      {
        return 3221225626LL;
      }
    }
    else
    {
      return 2147483653LL;
    }
  }
  return result;
}
