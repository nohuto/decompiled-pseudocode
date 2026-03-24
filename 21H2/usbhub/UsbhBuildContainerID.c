/*
 * XREFs of UsbhBuildContainerID @ 0x1C0050024
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     Feature_2473223486__private_IsEnabledDeviceUsage @ 0x1C001CFD8 (Feature_2473223486__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     RtlStringCbCatW @ 0x1C004F7A4 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C004F824 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C004F880 (RtlStringLengthWorkerW.c)
 *     UsbhMakeId @ 0x1C0051A64 (UsbhMakeId.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v3; // r12
  wchar_t *v4; // rdi
  __int64 v6; // r9
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  _WORD *PoolWithTag; // rax
  __int64 Id; // rax
  int v11; // r8d
  const wchar_t *v12; // rbx
  size_t v13; // r13
  NTSTATUS Property; // ebx
  UCHAR *v15; // r14
  wchar_t *v16; // rax
  size_t *v17; // r8
  UCHAR *v18; // r11
  size_t v19; // r14
  NTSTATUS v20; // eax
  const wchar_t *v21; // r8
  NTSTATUS v22; // r8d
  ULONG v23; // r15d
  UCHAR *v24; // rax
  UCHAR *v25; // rax
  __int128 v26; // xmm0
  size_t cchToCopy; // [rsp+20h] [rbp-50h]
  size_t pcchLength[2]; // [rsp+40h] [rbp-30h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h]
  ULONG pbOutput; // [rsp+C0h] [rbp+50h] BYREF
  ULONG pcbResult; // [rsp+C8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  pcbResult = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  v4 = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v7 = PdoExt(v6);
  v8 = *((unsigned __int16 *)v7 + 704);
  Feature_2473223486__private_IsEnabledDeviceUsage();
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 8uLL, 0x42554855u);
  if ( !PoolWithTag )
  {
    v11 = 1111699745;
    goto LABEL_53;
  }
  LODWORD(pcchLength[0]) = 8;
  *(_QWORD *)PoolWithTag = 0x6E006E006E006ELL;
  *PoolWithTag = (unsigned __int8)Nibble[(unsigned __int64)v8 >> 12];
  PoolWithTag[1] = (unsigned __int8)Nibble[(v8 >> 8) & 0xF];
  PoolWithTag[2] = (unsigned __int8)Nibble[(unsigned __int8)v8 >> 4];
  PoolWithTag[3] = (unsigned __int8)Nibble[v8 & 0xF];
  Id = UsbhMakeId(0, (int)L"nnnn", (int)PoolWithTag, (int)pcchLength, 0, 4, *((_WORD *)v7 + 705), 0LL);
  if ( !Id )
  {
    v11 = 1111700001;
LABEL_53:
    Property = -1073741670;
    Log(a1, 4096, v11, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  P = (PVOID)UsbhMakeId(1, (int)L"nnnn", Id, (int)pcchLength, 1, 4, *((_WORD *)v7 + 706), 0LL);
  v12 = (const wchar_t *)P;
  if ( !P )
  {
    v11 = 1111700257;
    goto LABEL_53;
  }
  v13 = (unsigned int)(LODWORD(pcchLength[0]) + v7[533]);
  if ( v13 >= 2 )
  {
    v16 = (wchar_t *)ExAllocatePoolWithTag(
                       SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory),
                       (unsigned int)(LODWORD(pcchLength[0]) + v7[533]),
                       0x42554855u);
    v4 = v16;
    if ( v16 )
    {
      memset(v16, 0, v13);
      v18 = 0LL;
      v19 = v13 >> 1;
      v20 = 0;
      if ( !(v13 >> 1) )
        v20 = -1073741811;
      if ( v20 < 0 )
      {
        if ( v19 )
          *v4 = 0;
      }
      else
      {
        v20 = RtlStringCopyWorkerW(v4, v13 >> 1, v17, v12, cchToCopy);
      }
      Property = v20;
      if ( v20 < 0 )
      {
        v15 = v18;
        goto LABEL_42;
      }
      v21 = (const wchar_t *)*((_QWORD *)v7 + 267);
      if ( !v21 || (Property = RtlStringCbCatW(v4, v13, v21), Property >= 0) )
      {
        pcchLength[0] = 0LL;
        v22 = RtlStringLengthWorkerW(v4, v19, pcchLength);
        v23 = v22 < 0 ? 0 : 2 * LODWORD(pcchLength[0]);
        Property = v22;
        if ( v22 >= 0 )
        {
          Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
          if ( Property >= 0 )
          {
            Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
            if ( Property >= 0 )
            {
              if ( pcbResult == 4 )
              {
                v24 = (UCHAR *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), pbOutput, 0x42554855u);
                v15 = v24;
                if ( v24 )
                {
                  memset(v24, 0, pbOutput);
                  Property = BCryptCreateHash(phAlgorithm, &phHash, v15, pbOutput, 0LL, 0, 0);
                  if ( Property < 0 )
                    goto LABEL_42;
                  Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
                  if ( Property < 0 )
                    goto LABEL_42;
                  Property = BCryptHashData(phHash, (PUCHAR)v4, v23, 0);
                  if ( Property < 0 )
                    goto LABEL_42;
                  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
                  if ( Property < 0 )
                    goto LABEL_42;
                  if ( pcbResult != 4 || pbOutput < 0x10 )
                  {
                    Property = -1073741811;
                    goto LABEL_42;
                  }
                  v25 = (UCHAR *)ExAllocatePoolWithTag(
                                   SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory),
                                   pbOutput,
                                   0x42554855u);
                  v3 = v25;
                  if ( v25 )
                  {
                    memset(v25, 0, pbOutput);
                    Property = BCryptFinishHash(phHash, v3, pbOutput, 0);
                    if ( Property >= 0 )
                    {
                      v26 = *(_OWORD *)v3;
                      *((_BYTE *)v7 + 2732) = 1;
                      *(_OWORD *)(v7 + 679) = v26;
                      *((_WORD *)v7 + 1361) = *((_WORD *)v7 + 1361) & 0xFFF | 0x5000;
                      *((_BYTE *)v7 + 2724) = v7[681] & 0x3F | 0x80;
                    }
                    goto LABEL_42;
                  }
                }
                Property = -1073741670;
                goto LABEL_42;
              }
              Property = -1073741306;
            }
          }
          else
          {
            phAlgorithm = 0LL;
          }
        }
      }
    }
    else
    {
      Property = -1073741670;
      Log(a1, 4096, 1111700513, a2, -1073741670LL);
    }
    v15 = 0LL;
  }
  else
  {
    Property = -1073741670;
    Log(a1, 4096, 1111700769, a2, -1073741670LL);
    v15 = 0LL;
  }
LABEL_42:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
