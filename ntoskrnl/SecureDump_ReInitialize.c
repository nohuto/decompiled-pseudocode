/*
 * XREFs of SecureDump_ReInitialize @ 0x14055C0B8
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x14054E504 (IoProvisionCrashDumpKey.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x1403892D4 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1403B1104 (SecureDump_ProvisionCrashDumpKey.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055B7B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055C294 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x1405B52AC (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReInitialize(__int64 a1, ULONG a2)
{
  ULONG v3; // edx
  int v4; // ebx

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225473LL;
  if ( (unsigned int)(SecureDmpEncryptionContext - 2) > 1 )
    return 3221225860LL;
  if ( !DWORD1(xmmword_140C64958) || !SecureDmpLoadCertificate )
    return 3221225488LL;
  if ( hAlgorithm )
  {
    BCryptCloseAlgorithmProvider(hAlgorithm, a2);
    hAlgorithm = 0LL;
  }
  if ( hObject )
  {
    BCryptDestroyKey(hObject);
    hObject = 0LL;
  }
  if ( qword_140C64978 )
  {
    ExFreePoolWithTag(qword_140C64978, 0);
    qword_140C64978 = 0LL;
  }
  if ( *((_QWORD *)&dwFlags + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
    *((_QWORD *)&dwFlags + 1) = 0LL;
  }
  if ( *((_QWORD *)&xmmword_140C64958 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140C64958 + 1), 0);
    *((_QWORD *)&xmmword_140C64958 + 1) = 0LL;
  }
  v4 = SecureDump_ProvisionCrashDumpKey();
  if ( v4 < 0
    || (v4 = SecureDump_SymmetricEncryptionSetup(), v4 < 0)
    || (v4 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v4 < 0) )
  {
    byte_140C64954 = 0;
    if ( hAlgorithm )
    {
      BCryptCloseAlgorithmProvider(hAlgorithm, v3);
      hAlgorithm = 0LL;
    }
    if ( hObject )
    {
      BCryptDestroyKey(hObject);
      hObject = 0LL;
    }
    if ( qword_140C64978 )
    {
      ExFreePoolWithTag(qword_140C64978, 0);
      qword_140C64978 = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( *((_QWORD *)&xmmword_140C64958 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140C64958 + 1), 0);
      *((_QWORD *)&xmmword_140C64958 + 1) = 0LL;
    }
    SecureDmpEncryptionContext = 3;
  }
  else
  {
    byte_140C64954 = 1;
    SecureDmpEncryptionContext = 2;
    dword_140C649A0 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
  }
  return (unsigned int)v4;
}
