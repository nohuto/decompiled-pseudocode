/*
 * XREFs of SecureDump_ValidateAmeCertChain @ 0x14055C3D0
 * Callers:
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     SecureDump_ConvertToRsaBlob @ 0x14055B6F0 (SecureDump_ConvertToRsaBlob.c)
 *     SecureDump_GetCertificateThumbprint @ 0x14055BB70 (SecureDump_GetCertificateThumbprint.c)
 *     MincrypK_ParseCertificateChainWithPolicy @ 0x140A6D63C (MincrypK_ParseCertificateChainWithPolicy.c)
 *     MincryptFreePolicyInfo @ 0x140A6E064 (MincryptFreePolicyInfo.c)
 *     MincryptGetLeafKeyFromPolicy @ 0x140A6E0A4 (MincryptGetLeafKeyFromPolicy.c)
 *     MincryptGetRootKeyFromPolicy @ 0x140A6E0D4 (MincryptGetRootKeyFromPolicy.c)
 */

__int64 __fastcall SecureDump_ValidateAmeCertChain(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int CertificateThumbprint; // ebx
  __int64 RootKeyFromPolicy; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 LeafKeyFromPolicy; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+40h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    if ( (_DWORD)a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          CertificateThumbprint = MincrypK_ParseCertificateChainWithPolicy(a1, a2, &v17);
          if ( CertificateThumbprint >= 0 )
          {
            if ( !(_DWORD)v17 )
              goto LABEL_26;
            if ( !(_QWORD)v18 )
              goto LABEL_26;
            if ( (DWORD2(v17) & 0xFFFF0000) != 0 )
              goto LABEL_26;
            RootKeyFromPolicy = MincryptGetRootKeyFromPolicy(&v17);
            LeafKeyFromPolicy = MincryptGetLeafKeyFromPolicy(&v17, v8, v9, RootKeyFromPolicy);
            v13 = LeafKeyFromPolicy;
            if ( !v12 || !LeafKeyFromPolicy || *(_DWORD *)(v11 + 48) != 3 || *(_DWORD *)(v11 + 16) != 3 )
              goto LABEL_26;
            if ( MEMORY[0xFFFFF78000000014] < (__int64)v19 || MEMORY[0xFFFFF78000000014] > *((__int64 *)&v19 + 1) )
            {
              CertificateThumbprint = -1073740283;
              goto LABEL_27;
            }
            if ( *(_DWORD *)v12 != 8
              || RtlCompareMemory(*(const void **)(v12 + 8), &rgbMicrosoftAzureAmeRoot0_PubKeyInfo, 8uLL) != 8
              || (v14 = *(_QWORD *)(v18 + 40), *(_WORD *)(v14 + 80) != 8)
              || RtlCompareMemory(*(const void **)(v14 + 72), &rgbMicrosoftAzureAmeRoot0_PubKeyInfo, 8uLL) != 8 )
            {
LABEL_26:
              CertificateThumbprint = -1073740760;
              goto LABEL_27;
            }
            CertificateThumbprint = SecureDump_GetCertificateThumbprint(v15, (__int64)&v17, a4);
            if ( CertificateThumbprint >= 0 )
              CertificateThumbprint = SecureDump_ConvertToRsaBlob(v13, a3);
          }
        }
        else
        {
          CertificateThumbprint = -1073741582;
        }
      }
      else
      {
        CertificateThumbprint = -1073741583;
      }
    }
    else
    {
      CertificateThumbprint = -1073741584;
    }
  }
  else
  {
    CertificateThumbprint = -1073741585;
  }
LABEL_27:
  MincryptFreePolicyInfo(&v17);
  return (unsigned int)CertificateThumbprint;
}
