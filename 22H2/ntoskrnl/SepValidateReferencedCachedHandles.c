/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x14070F440
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14070EDA4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140348150 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x1403482A0 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A5970 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x1406EF2F0 (RtlGetAppContainerSidType.c)
 *     SepQueryNameString @ 0x14070F83C (SepQueryNameString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, char **a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  int AppContainerSidType; // ebx
  struct _DMA_ADAPTER *v9; // r14
  unsigned int v10; // r12d
  char *v11; // r12
  __int64 v12; // r9
  const UNICODE_STRING *v13; // r13
  NTSTATUS v14; // eax
  char *v15; // rdi
  struct _OBJECT_TYPE *v16; // rdx
  __int64 v17; // rax
  char *v18; // rdi
  unsigned int v19; // edi
  PULONG v21; // rsi
  PULONG v22; // rdi
  PULONG v23; // rbx
  PULONG v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG v28; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h]
  unsigned int v32; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object[2]; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v35; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v38[8]; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v39; // [rsp+98h] [rbp-68h] BYREF
  char v40; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t SourceString[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v4 = 0;
  v35 = a4;
  v32 = a3;
  v6 = *(_DWORD *)a2;
  v31 = 0;
  v29 = 0;
  AppContainerSidType = 0;
  v30 = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  Object[0] = 0LL;
  UnicodeString = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_9;
    v25 = *(unsigned int *)(a1 + 120);
    Object[0] = a2 + 1;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v25);
    if ( AppContainerSidType < 0 )
      goto LABEL_34;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v38[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId(v27, v26) )
      goto LABEL_9;
    RtlInitUnicodeString(&v39, L"\\BaseNamedObjects");
    v40 = 1;
  }
  else
  {
    AppContainerSidType = RtlGetAppContainerSidType(a2[1], &v30);
    if ( AppContainerSidType < 0 )
      goto LABEL_34;
    v11 = a2[1];
    if ( v30 == 2 )
    {
      AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, v11, 1u);
      if ( AppContainerSidType < 0 )
        goto LABEL_34;
      v29 = 1;
    }
    else
    {
      v21 = RtlSubAuthoritySid(a2[1], 0xBu);
      v22 = RtlSubAuthoritySid(v11, 0xAu);
      v23 = RtlSubAuthoritySid(v11, 9u);
      v24 = RtlSubAuthoritySid(v11, 8u);
      v28 = *v21;
      v4 = 0;
      AppContainerSidType = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v24, *v23, *v22, v28);
      if ( AppContainerSidType < 0 )
        goto LABEL_34;
      RtlInitUnicodeString(&UnicodeString, SourceString);
    }
    v12 = *(unsigned int *)(a1 + 120);
    Object[0] = &UnicodeString;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
    if ( AppContainerSidType < 0 )
      goto LABEL_34;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v38[0] = 1;
    RtlInitUnicodeString(&v39, L"\\Device\\NamedPipe");
    v40 = 0;
  }
  v10 = 2;
LABEL_9:
  if ( !v32 )
    goto LABEL_34;
  v13 = (const UNICODE_STRING *)Object[0];
  while ( 1 )
  {
    if ( v9 )
      HalPutDmaAdapter(v9);
    Object[0] = 0LL;
    v14 = ObReferenceObjectByHandle(*v35, 0, 0LL, 0, Object, 0LL);
    v9 = (struct _DMA_ADAPTER *)Object[0];
    AppContainerSidType = v14;
    if ( v14 < 0 )
      goto LABEL_33;
    v15 = (char *)Object[0] - 48;
    v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    if ( v16 != ObpDirectoryObjectType
      && v16 != ObpSymbolicLinkObjectType
      && (v16 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object[0] + 1) + 72LL) != 17) )
    {
      break;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    AppContainerSidType = SepQueryNameString(v9, &P);
    if ( AppContainerSidType < 0 )
      goto LABEL_34;
    if ( !P )
      break;
    if ( !*((_WORD *)P + 1) )
      break;
    *(_OWORD *)Object = *(_OWORD *)P;
    if ( !v10 )
      break;
    while ( !RtlPrefixUnicodeString(
               (UNICODE_STRING *)((char *)&DestinationString + 24 * v4),
               (PCUNICODE_STRING)Object,
               1u) )
    {
      if ( ++v4 >= v10 )
        goto LABEL_53;
    }
    v17 = 3LL * v4;
    v4 = 0;
    if ( v38[8 * v17] )
    {
      if ( (v15[26] & 2) != 0 )
        v18 = &v15[-ObpInfoMaskToOffset[v15[26] & 3]];
      else
        v18 = 0LL;
      if ( !v18 || !*((_WORD *)v18 + 5) )
        break;
      *(_OWORD *)Object = *(_OWORD *)(v18 + 8);
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)Object, v13, 1u) )
      {
        v19 = 0;
        while ( !RtlEqualUnicodeString(
                   (PCUNICODE_STRING)Object,
                   (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * v19],
                   1u) )
        {
          if ( ++v19 >= 5 )
            goto LABEL_53;
        }
      }
    }
LABEL_33:
    ++v35;
    if ( ++v31 >= v32 )
      goto LABEL_34;
  }
LABEL_53:
  AppContainerSidType = -1073741811;
LABEL_34:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    HalPutDmaAdapter(v9);
  if ( v29 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)AppContainerSidType;
}
