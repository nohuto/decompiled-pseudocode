/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x140696944
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1406962A4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x14025D8B0 (RtlGetCurrentServiceSessionId.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x1402E0198 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     SepQueryNameString @ 0x140696CCC (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, int *a2, unsigned int a3, HANDLE *a4)
{
  int v5; // ecx
  NTSTATUS AppContainerSidType; // ebx
  PVOID v8; // r14
  unsigned int v9; // r12d
  void *v10; // r12
  __int64 v11; // r9
  _QWORD *v12; // r13
  NTSTATUS v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  struct _OBJECT_TYPE *v17; // rax
  unsigned int v18; // esi
  char *v19; // rdi
  char v20; // si
  unsigned int v21; // edi
  __int64 v23; // r9
  PULONG v24; // rsi
  PULONG v25; // rdi
  PULONG v26; // rbx
  PULONG v27; // rax
  void *v28; // rcx
  PVOID Sid; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h]
  unsigned int v31; // [rsp+54h] [rbp-ACh]
  unsigned int v32; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  PCUNICODE_STRING p_UnicodeString; // [rsp+68h] [rbp-98h]
  HANDLE *v35; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING String1; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v40[8]; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v41; // [rsp+C0h] [rbp-40h] BYREF
  char v42; // [rsp+D0h] [rbp-30h]
  wchar_t pszDest[256]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t SourceString[256]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v35 = a4;
  v32 = a3;
  v5 = *a2;
  Sid = a2;
  v31 = 0;
  AppContainerSidType = 0;
  v8 = 0LL;
  v30 = 0;
  v9 = 0;
  P = 0LL;
  p_UnicodeString = 0LL;
  UnicodeString = 0LL;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_7;
    v23 = *(unsigned int *)(a1 + 120);
    p_UnicodeString = (PCUNICODE_STRING)(a2 + 2);
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v23);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      v40[0] = 1;
      v9 = 1;
      if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId() )
        goto LABEL_7;
      RtlInitUnicodeString(&v41, L"\\BaseNamedObjects");
      v42 = 1;
LABEL_6:
      v9 = 2;
LABEL_7:
      if ( !v32 )
        goto LABEL_31;
      v12 = Sid;
      do
      {
        if ( v8 )
          ObfDereferenceObject(v8);
        Sid = 0LL;
        v13 = ObReferenceObjectByHandle(*v35, 0, 0LL, 0, &Sid, 0LL);
        v8 = Sid;
        AppContainerSidType = v13;
        if ( v13 >= 0 )
        {
          v16 = (char *)Sid - 48;
          v17 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Sid - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Sid - 48) >> 8)];
          if ( v17 != ObpSymbolicLinkObjectType
            && v17 != ObpDirectoryObjectType
            && (v17 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Sid + 1) + 72LL) != 17) )
          {
            goto LABEL_38;
          }
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          AppContainerSidType = SepQueryNameString(v8, &P, v14, v15);
          if ( AppContainerSidType < 0 )
            break;
          if ( !P || !*((_WORD *)P + 1) || (v18 = 0, String2 = *(UNICODE_STRING *)P, !v9) )
          {
LABEL_38:
            AppContainerSidType = -1073741811;
            break;
          }
          while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v18), &String2, 1u) )
          {
            if ( ++v18 >= v9 )
              goto LABEL_38;
          }
          if ( v40[24 * v18] )
          {
            if ( (v16[26] & 2) == 0 )
              goto LABEL_38;
            v19 = &v16[-ObpInfoMaskToOffset[v16[26] & 3]];
            if ( !v19 || !*((_WORD *)v19 + 5) )
              goto LABEL_38;
            String1 = *(UNICODE_STRING *)(v19 + 8);
            if ( !RtlEqualUnicodeString(&String1, p_UnicodeString, 1u) )
            {
              v20 = 0;
              v21 = 0;
              while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * v21], 1u) )
              {
                if ( ++v21 >= 5 )
                {
                  if ( v30 != 1 )
                    goto LABEL_38;
                  v28 = (void *)v12[1];
                  Sid = 0LL;
                  if ( (int)RtlGetAppContainerParent(v28) < 0 )
                    goto LABEL_38;
                  String2 = 0LL;
                  AppContainerSidType = RtlConvertSidToUnicodeString(&String2, Sid, 1u);
                  if ( AppContainerSidType >= 0 )
                  {
                    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
                      v20 = 1;
                    RtlFreeUnicodeString(&String2);
                  }
                  ExFreePoolWithTag(Sid, 0);
                  if ( !v20 )
                    goto LABEL_38;
                  break;
                }
              }
            }
          }
        }
        ++v35;
        ++v31;
      }
      while ( v31 < v32 );
    }
  }
  else
  {
    AppContainerSidType = RtlGetAppContainerSidType(*((PSID *)a2 + 1));
    if ( AppContainerSidType >= 0 )
    {
      v10 = (void *)*((_QWORD *)a2 + 1);
      v24 = RtlSubAuthoritySid(*((PSID *)a2 + 1), 0xBu);
      v25 = RtlSubAuthoritySid(v10, 0xAu);
      v26 = RtlSubAuthoritySid(v10, 9u);
      v27 = RtlSubAuthoritySid(v10, 8u);
      AppContainerSidType = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v27, *v26, *v25, *v24);
      if ( AppContainerSidType >= 0 )
      {
        RtlInitUnicodeString(&UnicodeString, SourceString);
        v11 = *(unsigned int *)(a1 + 120);
        p_UnicodeString = &UnicodeString;
        AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v11);
        if ( AppContainerSidType >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          v40[0] = 1;
          RtlInitUnicodeString(&v41, L"\\Device\\NamedPipe");
          v42 = 0;
          goto LABEL_6;
        }
      }
    }
  }
LABEL_31:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)AppContainerSidType;
}
