/*
 * XREFs of ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1C01E170C
 * Callers:
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01E0588 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1C01E0DCC (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 */

__int64 __fastcall _VerifyTHQBlob(__int16 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  unsigned int v4; // r14d
  int v7; // edx
  int v8; // r8d
  NTSTATUS v9; // eax
  int v10; // edx
  int v11; // r8d
  char v12; // r9
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // r10
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  PUCHAR pbHash; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+58h] [rbp-18h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+60h] [rbp-10h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+68h] [rbp-8h] BYREF
  unsigned __int8 v22; // [rsp+90h] [rbp+20h] BYREF
  char v23; // [rsp+91h] [rbp+21h]
  __int16 v24; // [rsp+92h] [rbp+22h]
  ULONG cbHash; // [rsp+98h] [rbp+28h] BYREF

  phAlgorithm = 0LL;
  v4 = 0;
  phKey = 0LL;
  pbHash = 0LL;
  cbHash = 0;
  pPaddingInfo = 0LL;
  v24 = a1;
  v22 = a2;
  LOWORD(a2) = BYTE1(a2);
  v23 = a2;
  if ( !(unsigned int)_HashTHQAText(&v22, a2, &pbHash, &cbHash) )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gRimLog,
        3,
        1,
        26,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    }
    goto LABEL_39;
  }
  v9 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v14 = 27;
    goto LABEL_19;
  }
  v15 = BCryptImportKeyPair(phAlgorithm, 0LL, L"RSAPUBLICBLOB", &phKey, a4, 0x11Bu, 0);
  v12 = v15;
  if ( v15 < 0 )
  {
    v13 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v14 = 28;
LABEL_19:
    WPP_RECORDER_AND_TRACE_SF_D(
      v13->AttachedDevice,
      v10,
      v11,
      (_DWORD)gRimLog,
      3,
      1,
      v14,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
      v12);
    goto LABEL_39;
  }
  pPaddingInfo = L"SHA256";
  v16 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, a3, 0x100u, 2u);
  v12 = v16;
  if ( v16 >= 0 )
  {
    v4 = 1;
    goto LABEL_39;
  }
  v13 = WPP_GLOBAL_Control;
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 29;
    goto LABEL_19;
  }
LABEL_39:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbHash )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)pbHash);
  return v4;
}
