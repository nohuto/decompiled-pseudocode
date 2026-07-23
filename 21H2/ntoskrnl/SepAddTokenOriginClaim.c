/*
 * XREFs of SepAddTokenOriginClaim @ 0x140922CB0
 * Callers:
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14092290C (SeDuplicateTokenAndAddOriginClaim.c)
 * Callees:
 *     RtlUShortAdd @ 0x14023071C (RtlUShortAdd.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(_DWORD *a1, int a2, __int64 a3)
{
  int appended; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  const UNICODE_STRING *v7; // rdi
  __int16 v8; // cx
  __int64 v9; // rbx
  wchar_t *Pool2; // rax
  __int64 v11; // rcx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-39h] BYREF
  int v14; // [rsp+30h] [rbp-29h] BYREF
  int v15; // [rsp+34h] [rbp-25h]
  UNICODE_STRING *p_DestinationString; // [rsp+38h] [rbp-21h]
  __int128 v17; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  int v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+74h] [rbp+1Bh]
  int v22; // [rsp+78h] [rbp+1Fh]
  const UNICODE_STRING *v23; // [rsp+80h] [rbp+27h]
  USHORT pusResult; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+D0h] [rbp+77h] BYREF

  *(_QWORD *)&SourceString.Length = 1966108LL;
  pusResult = 0;
  SourceString.Buffer = L"POLICYAPPID://";
  appended = 0;
  v5 = 0LL;
  Destination = 0LL;
  v17 = 0LL;
  if ( a2 == 536 )
  {
    v5 = a1;
    if ( !*a1 )
    {
      a1 = (_DWORD *)v17;
      goto LABEL_7;
    }
    DWORD2(v17) = 524;
  }
  else
  {
    DWORD2(v17) = a2;
  }
  *(_QWORD *)&v17 = a1;
LABEL_7:
  if ( !a1 )
    goto LABEL_9;
  v14 = 1;
  p_DestinationString = &DestinationString;
  v15 = 1;
  RtlInitUnicodeString(&DestinationString, L"SMARTLOCKER://SMARTSCREENORIGINCLAIM");
  v6 = *(_QWORD *)(a3 + 776);
  v23 = (const UNICODE_STRING *)&v17;
  v20 = 16;
  v22 = 1;
  v21 = 65;
  v25 = 4;
  appended = AuthzBasepSetSecurityAttributesToken(v6, &v25, (__int64)&v14);
  if ( appended >= 0 )
  {
LABEL_9:
    if ( v5 )
    {
      v7 = (const UNICODE_STRING *)*((_QWORD *)v5 + 66);
      RtlInitUnicodeString(&Destination, 0LL);
      while ( v7 )
      {
        appended = RtlUShortAdd(0x1Cu, v7[-2].Length, &pusResult);
        if ( appended < 0 )
          break;
        appended = RtlUShortAdd(pusResult, v8 - 26, &pusResult);
        if ( appended < 0 )
          break;
        v9 = pusResult;
        Destination.Length = 0;
        if ( pusResult > Destination.MaximumLength )
        {
          if ( Destination.Buffer )
            ExFreePoolWithTag(Destination.Buffer, 0x434F6553u);
          Destination.MaximumLength = v9;
          Pool2 = (wchar_t *)ExAllocatePool2(258LL, v9, 1129276755LL);
          Destination.Buffer = Pool2;
          if ( !Pool2 )
          {
            appended = -1073741670;
            goto LABEL_23;
          }
        }
        RtlCopyUnicodeString(&Destination, &SourceString);
        appended = RtlAppendUnicodeStringToString(&Destination, v7 - 2);
        if ( appended < 0 )
          break;
        v11 = *(_QWORD *)(a3 + 776);
        p_DestinationString = &DestinationString;
        v14 = 1;
        v23 = v7 - 1;
        v15 = 1;
        DestinationString = Destination;
        v20 = 3;
        v22 = 1;
        v21 = 65;
        v25 = 4;
        appended = AuthzBasepSetSecurityAttributesToken(v11, &v25, (__int64)&v14);
        if ( appended < 0 )
          break;
        v7 = *(const UNICODE_STRING **)&v7->Length;
      }
    }
  }
  Pool2 = Destination.Buffer;
LABEL_23:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x434F6553u);
  return (unsigned int)appended;
}
