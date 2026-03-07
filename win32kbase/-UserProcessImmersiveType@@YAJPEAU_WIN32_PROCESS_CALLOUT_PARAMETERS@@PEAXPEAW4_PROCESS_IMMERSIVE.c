int __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        int *a5)
{
  char v8; // r12
  bool v9; // di
  int result; // eax
  __int64 v11; // rdx
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v13; // rax
  WORD NumberOfSections; // cx
  WORD v15; // ax
  void *v16; // rsi
  char *v17; // rsi
  char v18; // [rsp+40h] [rbp-68h] BYREF
  char v19[3]; // [rsp+41h] [rbp-67h] BYREF
  WORD v20; // [rsp+44h] [rbp-64h]
  WORD v21; // [rsp+48h] [rbp-60h]
  PVOID TokenInformation; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  void *Source1; // [rsp+60h] [rbp-48h]
  __int64 v25; // [rsp+68h] [rbp-40h] BYREF
  __int64 v26; // [rsp+70h] [rbp-38h] BYREF

  v19[0] = 0;
  TokenInformation = 0LL;
  v18 = 0;
  v23 = 0LL;
  v8 = 0;
  v9 = 0;
  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, &TokenInformation);
    if ( result >= 0 )
    {
      v25 = 0LL;
      v26 = 0LL;
      result = (unsigned __int16)AppModelPolicy_GetPolicy_Internal(a2, v11, (char *)&TokenInformation + 4, &v26, &v25);
      if ( (_WORD)result )
        result = (unsigned __int16)result | 0xC0070000;
      if ( result >= 0 )
      {
        PsQueryProcessAttributesByToken(a2, 0LL, &v18);
        if ( v18 )
        {
          result = RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v23, 0LL);
          if ( result < 0 )
            return result;
          v9 = (v23 & 0x800) != 0;
          if ( (v23 & 0x200) != 0 )
            v8 = 1;
        }
        PsQueryProcessAttributesByToken(a2, v19, 0LL);
        *a5 = (unsigned __int8)v19[0];
        if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
        {
          ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
          v13 = RtlImageNtHeader(ProcessSectionBaseAddress);
          if ( !v13 )
            return -1073741823;
          Source1 = (char *)&v13->OptionalHeader + v13->FileHeader.SizeOfOptionalHeader;
          NumberOfSections = v13->FileHeader.NumberOfSections;
          v21 = NumberOfSections;
          v15 = 0;
          LOBYTE(v16) = (_BYTE)Source1;
          while ( 1 )
          {
            v20 = v15;
            if ( v15 >= NumberOfSections )
              break;
            if ( ((unsigned __int8)v16 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v17 = (char *)Source1;
            if ( RtlCompareMemory(Source1, ".imrsiv", 8uLL) == 8 )
            {
              if ( *(_DWORD *)a4 )
              {
                *a5 = 1;
                *(_DWORD *)a3 = 1;
                return 0;
              }
              else if ( (unsigned int)TokenInformation < 0x2000 )
              {
                return -1073741823;
              }
              else
              {
                *(_DWORD *)a3 = 2;
                return 0;
              }
            }
            v16 = v17 + 40;
            Source1 = v16;
            v15 = v20 + 1;
            NumberOfSections = v21;
          }
        }
        if ( *a5 )
        {
          if ( !v9 && !*(_DWORD *)a4 || HIDWORD(TokenInformation) == 196608 || v8 )
            *a5 = 0;
          else
            *(_DWORD *)a3 = 1;
        }
        return 0;
      }
    }
  }
  return result;
}
