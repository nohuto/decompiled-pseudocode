/*
 * XREFs of UsbhBuildContainerID @ 0x1C004EB84
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     RtlStringCbCatW @ 0x1C004E394 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C004E400 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C004E45C (RtlStringLengthWorkerW.c)
 *     UsbhMakeId @ 0x1C0050478 (UsbhMakeId.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v3; // r13
  wchar_t *v4; // r15
  __int64 v6; // r9
  _DWORD *v7; // rsi
  __int64 Id; // rax
  int v9; // r8d
  NTSTATUS Property; // ebx
  __int64 v11; // rax
  size_t v12; // r12
  int v13; // r8d
  wchar_t *Pool2; // rax
  size_t *v15; // r8
  NTSTATUS v16; // eax
  UCHAR *v17; // rdi
  const wchar_t *v18; // r8
  NTSTATUS v19; // eax
  ULONG v20; // r14d
  UCHAR *v21; // rax
  UCHAR *v22; // rax
  __int128 v23; // xmm0
  size_t cchToCopy; // [rsp+20h] [rbp-50h]
  ULONG pcbResult[4]; // [rsp+40h] [rbp-30h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h]
  ULONG pbOutput; // [rsp+C0h] [rbp+50h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  pcbResult[0] = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  v4 = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v7 = PdoExt(v6);
  LODWORD(pcchLength) = 0;
  Id = UsbhMakeId(0, (unsigned int)L"nnnn", 0, (unsigned int)&pcchLength, 0, 4, *((_WORD *)v7 + 704), 0LL);
  if ( !Id )
  {
    v9 = 1111699745;
LABEL_3:
    Property = -1073741670;
    Log(a1, 4096, v9, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  v11 = UsbhMakeId(0, (unsigned int)L"nnnn", Id, (unsigned int)&pcchLength, 0, 4, *((_WORD *)v7 + 705), 0LL);
  if ( !v11 )
  {
    v9 = 1111700001;
    goto LABEL_3;
  }
  P = (PVOID)UsbhMakeId(1, (unsigned int)L"nnnn", v11, (unsigned int)&pcchLength, 1, 4, *((_WORD *)v7 + 706), 0LL);
  if ( !P )
  {
    v9 = 1111700257;
    goto LABEL_3;
  }
  v12 = (unsigned int)(pcchLength + v7[533]);
  if ( v12 < 2 )
  {
    v13 = 1111700769;
LABEL_10:
    Property = -1073741670;
    Log(a1, 4096, v13, a2, -1073741670LL);
LABEL_39:
    v17 = 0LL;
    goto LABEL_40;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, (unsigned int)(pcchLength + v7[533]), 1112885333LL);
  v4 = Pool2;
  if ( !Pool2 )
  {
    v13 = 1111700513;
    goto LABEL_10;
  }
  if ( v12 >> 1 )
    v16 = RtlStringCopyWorkerW(Pool2, v12 >> 1, v15, (STRSAFE_PCNZWCH)P, cchToCopy);
  else
    v16 = -1073741811;
  Property = v16;
  if ( v16 < 0 )
    goto LABEL_39;
  v18 = (const wchar_t *)*((_QWORD *)v7 + 267);
  if ( v18 && (Property = RtlStringCbCatW(v4, v12, v18), Property < 0) )
  {
    v17 = 0LL;
  }
  else
  {
    pcchLength = 0LL;
    v19 = RtlStringLengthWorkerW(v4, v12 >> 1, &pcchLength);
    if ( v19 < 0 )
    {
      Property = v19;
      goto LABEL_39;
    }
    v20 = 2 * pcchLength;
    Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
    if ( Property < 0 )
    {
      phAlgorithm = 0LL;
      goto LABEL_39;
    }
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
    if ( Property < 0 )
      goto LABEL_39;
    if ( pcbResult[0] != 4 )
    {
      Property = -1073741306;
      goto LABEL_39;
    }
    v21 = (UCHAR *)ExAllocatePool2(64LL, pbOutput, 1112885333LL);
    v17 = v21;
    if ( v21 )
    {
      Property = BCryptCreateHash(phAlgorithm, &phHash, v21, pbOutput, 0LL, 0, 0);
      if ( Property < 0 )
        goto LABEL_40;
      Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
      if ( Property < 0 )
        goto LABEL_40;
      Property = BCryptHashData(phHash, (PUCHAR)v4, v20, 0);
      if ( Property < 0 )
        goto LABEL_40;
      Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
      if ( Property < 0 )
        goto LABEL_40;
      if ( pcbResult[0] != 4 || pbOutput < 0x10 )
      {
        Property = -1073741811;
        goto LABEL_40;
      }
      v22 = (UCHAR *)ExAllocatePool2(64LL, pbOutput, 1112885333LL);
      v3 = v22;
      if ( v22 )
      {
        Property = BCryptFinishHash(phHash, v22, pbOutput, 0);
        if ( Property >= 0 )
        {
          v23 = *(_OWORD *)v3;
          *((_BYTE *)v7 + 2732) = 1;
          *(_OWORD *)(v7 + 679) = v23;
          *((_WORD *)v7 + 1361) = *((_WORD *)v7 + 1361) & 0xFFF | 0x5000;
          *((_BYTE *)v7 + 2724) = v7[681] & 0x3F | 0x80;
        }
        goto LABEL_40;
      }
    }
    Property = -1073741670;
  }
LABEL_40:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
