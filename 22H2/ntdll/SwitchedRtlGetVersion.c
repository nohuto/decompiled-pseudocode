/*
 * XREFs of SwitchedRtlGetVersion @ 0x18003C9CC
 * Callers:
 *     RtlSwitchedVVI @ 0x18003CC40 (RtlSwitchedVVI.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlGetNtProductType @ 0x18003CBB0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     ZwQueryLicenseValue @ 0x18009FF50 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v2; // rsi
  int v3; // edi
  __int64 (*v4)(void); // rax
  int v5; // edi
  wchar_t *Buffer; // r8
  int v7; // edi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+80h] [rbp+38h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+88h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+48h] BYREF
  ULONG ResultDataSize; // [rsp+98h] [rbp+50h] BYREF

  DestinationString = 0LL;
  Data = 0;
  v2 = NtCurrentPeb();
  v3 = 0;
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  v4 = (__int64 (*)(void))qword_18016D228;
  if ( qword_18016D228
    || (v4 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0LL, "kLsE", 0LL), (qword_18016D228 = (__int64)v4) != 0) )
  {
    v3 = v4();
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    a1[2] = 2;
    a1[3] = 9200;
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    a1[2] = 3;
    a1[3] = 9600;
LABEL_8:
    a1[1] = 6;
  }
  Buffer = v2->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v7 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v7 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      *((_BYTE *)a1 + 282) = NtProductType;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
      || Type != 4
      || ResultDataSize != 4
      || Data != 1 )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      *((_WORD *)a1 + 140) |= 0x100u;
      if ( *a1 == 292 )
      {
        a1[71] &= 0xFFFDFFEF;
        a1[71] |= 0x100u;
      }
    }
  }
  return 0LL;
}
