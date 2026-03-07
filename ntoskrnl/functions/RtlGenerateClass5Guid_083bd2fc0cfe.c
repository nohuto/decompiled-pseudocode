__int64 __fastcall RtlGenerateClass5Guid(__int64 a1, UCHAR *a2, ULONG a3, __int64 a4)
{
  UCHAR *v4; // rdi
  ULONG v9; // edx
  NTSTATUS Property; // ebx
  ULONG v11; // r9d
  UCHAR *Pool2; // rax
  ULONG v13; // r9d
  unsigned __int32 v14; // eax
  ULONG v15; // r9d
  ULONG v16; // r9d
  ULONG *pcbResult; // [rsp+20h] [rbp-49h]
  ULONG v19; // [rsp+28h] [rbp-41h]
  ULONG v20; // [rsp+28h] [rbp-41h]
  ULONG v21; // [rsp+30h] [rbp-39h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-29h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-21h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-19h] BYREF
  ULONG v25; // [rsp+58h] [rbp-11h] BYREF
  UCHAR pbInput[16]; // [rsp+60h] [rbp-9h] BYREF
  UCHAR v27[24]; // [rsp+70h] [rbp+7h] BYREF

  v25 = 0;
  v4 = 0LL;
  *(_DWORD *)pbOutput = 0;
  phAlgorithm = 0LL;
  phHash = 0LL;
  *(_OWORD *)pbInput = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a4 )
    return 3221225714LL;
  if ( !a2 && a3 )
    return 3221225713LL;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 0);
  if ( Property >= 0 )
  {
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, v11, &v25, v19);
    if ( Property >= 0 )
    {
      Pool2 = (UCHAR *)ExAllocatePool2(256LL, *(unsigned int *)pbOutput, 1684632903LL);
      v4 = Pool2;
      if ( Pool2 )
      {
        Property = BCryptCreateHash(phAlgorithm, &phHash, Pool2, *(ULONG *)pbOutput, (PUCHAR)pcbResult, v20, v21);
        if ( Property >= 0 )
        {
          v14 = _byteswap_ulong(*(_DWORD *)a1);
          *(_OWORD *)pbInput = *(_OWORD *)a1;
          *(_DWORD *)pbInput = v14;
          *(_WORD *)&pbInput[4] = __ROR2__(*(_WORD *)(a1 + 4), 8);
          *(_WORD *)&pbInput[6] = __ROR2__(*(_WORD *)(a1 + 6), 8);
          Property = BCryptHashData(phHash, pbInput, 0x10u, v13);
          if ( Property >= 0 )
          {
            Property = BCryptHashData(phHash, a2, a3, v15);
            if ( Property >= 0 )
            {
              Property = BCryptFinishHash(phHash, v27, 0x14u, v16);
              if ( Property >= 0 )
              {
                *(_OWORD *)a4 = *(_OWORD *)v27;
                *(_DWORD *)a4 = _byteswap_ulong(*(_DWORD *)a4);
                *(_WORD *)(a4 + 4) = __ROR2__(*(_WORD *)(a4 + 4), 8);
                *(_WORD *)(a4 + 6) = __ROR2__(*(_WORD *)(a4 + 6), 8) & 0xFFF | 0x5000;
                *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0x3F | 0x80;
              }
            }
          }
        }
      }
      else
      {
        Property = -1073741670;
      }
    }
  }
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, v9);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)Property;
}
