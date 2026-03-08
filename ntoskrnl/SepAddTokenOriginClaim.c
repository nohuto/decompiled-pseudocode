/*
 * XREFs of SepAddTokenOriginClaim @ 0x140794680
 * Callers:
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1407945AC (SeDuplicateTokenAndAddOriginClaim.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(_DWORD *a1, int a2, __int64 a3, char a4)
{
  int appended; // ebx
  _DWORD *v6; // rdi
  UNICODE_STRING v7; // xmm0
  __int64 v8; // rcx
  wchar_t *Pool2; // rax
  const UNICODE_STRING *v11; // rdi
  NTSTATUS v12; // eax
  __int16 v13; // cx
  __int64 v14; // rbx
  __int64 v15; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-59h] BYREF
  int v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h]
  UNICODE_STRING *v19; // [rsp+38h] [rbp-41h]
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-29h] BYREF
  int v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+64h] [rbp-15h]
  int v24; // [rsp+68h] [rbp-11h]
  const UNICODE_STRING *v25; // [rsp+70h] [rbp-9h]
  UNICODE_STRING v26; // [rsp+78h] [rbp-1h]
  UNICODE_STRING v27; // [rsp+88h] [rbp+Fh]
  UNICODE_STRING SourceString; // [rsp+98h] [rbp+1Fh] BYREF
  USHORT pusResult; // [rsp+E8h] [rbp+6Fh] BYREF
  int v30; // [rsp+F0h] [rbp+77h] BYREF

  *(_QWORD *)&SourceString.Length = 1966108LL;
  *(_QWORD *)&v27.Length = 4849736LL;
  SourceString.Buffer = L"POLICYAPPID://";
  v27.Buffer = L"SMARTLOCKER://SMARTSCREENORIGINCLAIM";
  *(_QWORD *)&v26.Length = 6422624LL;
  v26.Buffer = L"SMARTLOCKER://SMARTSCREENORIGINCLAIMNOTINHERITED";
  pusResult = 0;
  appended = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v20 = 0LL;
  if ( a2 != 536 )
  {
    DWORD2(v20) = a2;
LABEL_3:
    *(_QWORD *)&v20 = a1;
    goto LABEL_4;
  }
  v6 = a1;
  if ( *a1 )
  {
    DWORD2(v20) = 524;
    goto LABEL_3;
  }
  a1 = (_DWORD *)v20;
LABEL_4:
  if ( !a1 )
    goto LABEL_8;
  v17 = 1;
  v19 = &v21;
  v18 = 1;
  if ( a4 )
    v7 = v26;
  else
    v7 = v27;
  v8 = *(_QWORD *)(a3 + 776);
  v25 = (const UNICODE_STRING *)&v20;
  v22 = 16;
  v21 = v7;
  v24 = 1;
  v23 = 65;
  v30 = 4;
  appended = AuthzBasepSetSecurityAttributesToken(v8, &v30, (__int64)&v17);
  if ( appended >= 0 )
  {
LABEL_8:
    if ( v6 )
    {
      v11 = (const UNICODE_STRING *)*((_QWORD *)v6 + 66);
      RtlInitUnicodeString(&DestinationString, 0LL);
      while ( v11 )
      {
        v12 = RtlUShortAdd(0x1Cu, v11[-2].Length, &pusResult);
        appended = v12;
        if ( v12 < 0 )
          break;
        appended = RtlUShortAdd(pusResult, v13 - 26, &pusResult);
        if ( appended < 0 )
          break;
        v14 = pusResult;
        DestinationString.Length = 0;
        if ( pusResult > DestinationString.MaximumLength )
        {
          if ( DestinationString.Buffer )
            ExFreePoolWithTag(DestinationString.Buffer, 0x434F6553u);
          DestinationString.MaximumLength = v14;
          Pool2 = (wchar_t *)ExAllocatePool2(258LL, v14, 1129276755LL);
          DestinationString.Buffer = Pool2;
          if ( !Pool2 )
          {
            appended = -1073741670;
            goto LABEL_10;
          }
        }
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        appended = RtlAppendUnicodeStringToString(&DestinationString, v11 - 2);
        if ( appended < 0 )
          break;
        v15 = *(_QWORD *)(a3 + 776);
        v19 = &v21;
        v17 = 1;
        v25 = v11 - 1;
        v18 = 1;
        v21 = DestinationString;
        v22 = 3;
        v24 = 1;
        v23 = 65;
        v30 = 4;
        appended = AuthzBasepSetSecurityAttributesToken(v15, &v30, (__int64)&v17);
        if ( appended < 0 )
          break;
        v11 = *(const UNICODE_STRING **)&v11->Length;
      }
    }
  }
  Pool2 = DestinationString.Buffer;
LABEL_10:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x434F6553u);
  return (unsigned int)appended;
}
