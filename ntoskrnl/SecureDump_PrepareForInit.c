/*
 * XREFs of SecureDump_PrepareForInit @ 0x1403AAFA4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     SecureDump_ReadRegistry @ 0x1403AB0B8 (SecureDump_ReadRegistry.c)
 *     SecureDump_LogErrorEvent @ 0x14055C088 (SecureDump_LogErrorEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SecureDump_PrepareForInit(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  int Registry; // eax
  int v5; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp-10h] BYREF
  char v9; // [rsp+80h] [rbp+20h] BYREF
  PVOID P; // [rsp+90h] [rbp+30h] BYREF

  v7[0] = 13238472LL;
  P = 0LL;
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\EncryptionCertificates\\Certificate.1";
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\ForceDumpsDisabled";
  v6[0] = 8388734LL;
  v3 = 2;
  v8[0] = 10879140LL;
  ForceDumpDisabled = 1;
  if ( !a2 )
    return;
  *a2 = 0;
  xmmword_140C64958 = 0LL;
  *(_OWORD *)&dwFlags = 0LL;
  Registry = SecureDump_ReadRegistry((unsigned int)v8, (unsigned int)L"GuardedHost", 4, (unsigned int)&P, (__int64)&v9);
  if ( Registry >= 0 )
  {
    LODWORD(xmmword_140C64958) = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( (_DWORD)xmmword_140C64958 )
      goto LABEL_7;
  }
  else if ( Registry != -1073741772 )
  {
    goto LABEL_8;
  }
  v5 = SecureDump_ReadRegistry(
         (unsigned int)v6,
         (unsigned int)L"DumpEncryptionEnabled",
         4,
         (unsigned int)&P,
         (__int64)&v9);
  if ( v5 >= 0 )
  {
    DWORD1(xmmword_140C64958) = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( DWORD1(xmmword_140C64958) )
    {
      *a2 = 1;
      if ( (int)SecureDump_ReadRegistry(
                  (unsigned int)v6,
                  (unsigned int)L"ProvisionDumpKeyWithCertificate",
                  4,
                  (unsigned int)&P,
                  (__int64)&v9) >= 0 )
      {
        SecureDmpLoadCertificate = *(_DWORD *)P != 0;
        ExFreePoolWithTag(P, 0);
      }
      if ( SecureDmpLoadCertificate
        || (int)SecureDump_ReadRegistry(
                  (unsigned int)v7,
                  (unsigned int)L"PublicKey",
                  3,
                  (unsigned int)&xmmword_140C64958 + 8,
                  (__int64)&dwFlags) >= 0
        && (int)SecureDump_ReadRegistry(
                  (unsigned int)v7,
                  (unsigned int)L"Thumbprint",
                  1,
                  (unsigned int)(&dwFlags + 2),
                  (__int64)(&dwFlags + 1)) >= 0 )
      {
        ForceDumpDisabled = 0;
      }
      goto LABEL_8;
    }
  }
  else if ( v5 != -1073741772 )
  {
    goto LABEL_8;
  }
  ForceDumpDisabled = 0;
LABEL_7:
  v3 = 0;
LABEL_8:
  if ( ForceDumpDisabled == 1 )
  {
    if ( *((_QWORD *)&xmmword_140C64958 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140C64958 + 1), 0);
      *((_QWORD *)&xmmword_140C64958 + 1) = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( v3 )
    {
      SecureDmpEncryptionContext = 3;
      SecureDump_LogErrorEvent(v3);
    }
  }
  else
  {
    SecureDmpEncryptionContext = 1;
  }
}
