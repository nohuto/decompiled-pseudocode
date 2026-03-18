/*
 * XREFs of SecureDump_ReInitialize @ 0x14055E558
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x1405509A4 (IoProvisionCrashDumpKey.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140375144 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1403B5D94 (SecureDump_ProvisionCrashDumpKey.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055DC54 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055E734 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x1405B775C (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReInitialize(__int64 a1, ULONG a2)
{
  ULONG v3; // edx
  int v4; // ebx

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225473LL;
  if ( (unsigned int)(SecureDmpEncryptionContext - 2) > 1 )
    return 3221225860LL;
  if ( !DWORD1(xmmword_140C64DD8) || !SecureDmpLoadCertificate )
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
  if ( qword_140C64DF8 )
  {
    ExFreePoolWithTag(qword_140C64DF8, 0);
    qword_140C64DF8 = 0LL;
  }
  if ( *((_QWORD *)&dwFlags + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
    *((_QWORD *)&dwFlags + 1) = 0LL;
  }
  if ( *((_QWORD *)&xmmword_140C64DD8 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140C64DD8 + 1), 0);
    *((_QWORD *)&xmmword_140C64DD8 + 1) = 0LL;
  }
  v4 = SecureDump_ProvisionCrashDumpKey();
  if ( v4 < 0
    || (v4 = SecureDump_SymmetricEncryptionSetup(), v4 < 0)
    || (v4 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v4 < 0) )
  {
    byte_140C64DD4 = 0;
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
    if ( qword_140C64DF8 )
    {
      ExFreePoolWithTag(qword_140C64DF8, 0);
      qword_140C64DF8 = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( *((_QWORD *)&xmmword_140C64DD8 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140C64DD8 + 1), 0);
      *((_QWORD *)&xmmword_140C64DD8 + 1) = 0LL;
    }
    SecureDmpEncryptionContext = 3;
  }
  else
  {
    byte_140C64DD4 = 1;
    SecureDmpEncryptionContext = 2;
    dword_140C64E20 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
  }
  return (unsigned int)v4;
}
