/*
 * XREFs of SecureDump_Init @ 0x1403B0658
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140B726E0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140375144 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055DC54 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055E734 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x1405B775C (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, int a2)
{
  int v2; // ebx

  v2 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( !DWORD1(xmmword_140C64DD8) )
    {
      byte_140C64DD4 = 0;
LABEL_4:
      SecureDmpEncryptionContext = 2;
      goto LABEL_5;
    }
    byte_140C64DD4 = 1;
    v2 = SecureDump_SymmetricEncryptionSetup();
    if ( v2 >= 0 )
    {
      v2 = SecureDump_EncryptSymmetricKeyWithPublicKey();
      if ( v2 >= 0 )
      {
        a2 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
        dword_140C64E20 = a2;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  switch ( SecureDmpEncryptionContext )
  {
    case 3:
      v2 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v2 < 0 )
      {
        byte_140C64DD4 = 0;
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
        SecureDmpEncryptionContext = 3;
      }
      break;
  }
  return (unsigned int)v2;
}
