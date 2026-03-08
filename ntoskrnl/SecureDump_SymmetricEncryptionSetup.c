/*
 * XREFs of SecureDump_SymmetricEncryptionSetup @ 0x14055C294
 * Callers:
 *     SecureDump_Init @ 0x1403AB908 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x14055C0B8 (SecureDump_ReInitialize.c)
 * Callees:
 *     SecureDump_LogErrorEvent @ 0x14055C088 (SecureDump_LogErrorEvent.c)
 *     BCryptGenRandom @ 0x1405B53D8 (BCryptGenRandom.c)
 *     BCryptGetProperty @ 0x140754608 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x14081B624 (BCryptOpenAlgorithmProvider.c)
 *     BCryptGenerateSymmetricKey @ 0x1409C5FE4 (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x1409C610C (BCryptSetProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SecureDump_SymmetricEncryptionSetup()
{
  __int64 v0; // rdx
  NTSTATUS SymmetricKey; // ebx
  __int64 v2; // r8
  UCHAR *Pool2; // rax
  void *v4; // rcx
  ULONG v5; // r9d
  UCHAR *v6; // rdi
  ULONG v7; // r9d
  ULONG pbSecret; // [rsp+20h] [rbp-38h]
  ULONG cbSecret; // [rsp+28h] [rbp-30h]
  ULONG v11; // [rsp+30h] [rbp-28h]
  int pbOutput; // [rsp+60h] [rbp+8h] BYREF
  ULONG pcbResult; // [rsp+68h] [rbp+10h] BYREF

  pcbResult = 0;
  pbOutput = 0;
  dword_140C64998 = 1;
  SymmetricKey = BCryptOpenAlgorithmProvider(&hAlgorithm, L"XTS-AES", L"Microsoft Primitive Provider", 1u);
  if ( SymmetricKey < 0 )
    goto LABEL_10;
  Pool2 = (UCHAR *)ExAllocatePool2(64LL, 64LL, 1886217299LL);
  v6 = Pool2;
  if ( !Pool2 )
  {
    SymmetricKey = -1073741670;
LABEL_10:
    SecureDump_LogErrorEvent(1, v0, v2);
    return (unsigned int)SymmetricKey;
  }
  SymmetricKey = BCryptGenRandom(v4, Pool2, 0x40u, v5);
  if ( SymmetricKey < 0 )
  {
    ExFreePoolWithTag(v6, 0);
    goto LABEL_10;
  }
  SymmetricKey = BCryptGenerateSymmetricKey(hAlgorithm, &hObject, 0LL, 0, v6, 0x40u, v11);
  ExFreePoolWithTag(v6, 0);
  if ( SymmetricKey < 0 )
    goto LABEL_10;
  SymmetricKey = BCryptGetProperty(hObject, L"KeyLength", (PUCHAR)&pbOutput, v7, &pcbResult, cbSecret);
  if ( SymmetricKey < 0 )
    goto LABEL_10;
  if ( pbOutput == 512 )
  {
    pbInput = 4096;
    SymmetricKey = BCryptSetProperty(hObject, L"MessageBlockLength", (PUCHAR)&pbInput, 4u, pbSecret);
    if ( SymmetricKey < 0 )
      goto LABEL_10;
  }
  return (unsigned int)SymmetricKey;
}
