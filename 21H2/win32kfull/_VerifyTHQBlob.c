/*
 * XREFs of _VerifyTHQBlob @ 0x1C01D19F8
 * Callers:
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01E6A0C (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 * Callees:
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1C01D0E30 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 */

_BOOL8 __fastcall VerifyTHQBlob(__int16 a1, __int64 a2, UCHAR *a3, UCHAR *a4)
{
  BOOL v4; // ebx
  PUCHAR pbHash; // [rsp+40h] [rbp-20h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-18h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+50h] [rbp-10h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+58h] [rbp-8h] BYREF
  UCHAR v12; // [rsp+80h] [rbp+20h] BYREF
  char v13; // [rsp+81h] [rbp+21h]
  __int16 v14; // [rsp+82h] [rbp+22h]
  ULONG cbHash; // [rsp+88h] [rbp+28h] BYREF

  phAlgorithm = 0LL;
  v4 = 0;
  phKey = 0LL;
  pbHash = 0LL;
  cbHash = 0;
  pPaddingInfo = 0LL;
  v14 = a1;
  v12 = a2;
  LOWORD(a2) = BYTE1(a2);
  v13 = a2;
  if ( (unsigned int)_HashTHQAText(&v12, a2, &pbHash, &cbHash)
    && BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0) >= 0
    && BCryptImportKeyPair(phAlgorithm, 0LL, L"RSAPUBLICBLOB", &phKey, a4, 0x11Bu, 0) >= 0 )
  {
    pPaddingInfo = L"SHA256";
    v4 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, a3, 0x100u, 2u) >= 0;
  }
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbHash )
    Win32FreePool(pbHash);
  return v4;
}
