/*
 * XREFs of MinAsn1ExtractValues @ 0x140A6EB74
 * Callers:
 *     MincryptValidateBasicConstraints @ 0x14067DECC (MincryptValidateBasicConstraints.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x140A6D684 (MinAsn1ParseAlgorithmIdentifier.c)
 *     MinAsn1ParseAndDecodeRDNComponent @ 0x140A6D6CC (MinAsn1ParseAndDecodeRDNComponent.c)
 *     MinAsn1ParseCertificate @ 0x140A6D7E0 (MinAsn1ParseCertificate.c)
 *     MinAsn1ParseOIDSequence @ 0x140A6D858 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x140A6D938 (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x140A6D980 (MinAsn1ParseRSAPublicKey.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A6DAB8 (MinAsn1ParseSingleExtensionValue.c)
 *     MinAsn1ExtractParsedCertificatesFromSignedData @ 0x140A6EAD0 (MinAsn1ExtractParsedCertificatesFromSignedData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MinAsn1ExtractContent @ 0x140A6EA28 (MinAsn1ExtractContent.c)
 */

__int64 __fastcall MinAsn1ExtractValues(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r11
  unsigned int v7; // r10d
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  char v11; // dl
  unsigned int *v12; // rdi
  int v13; // esi
  _BYTE *v14; // rbx
  unsigned int *v15; // rax
  int v16; // r15d
  _BYTE *v17; // rcx
  __int64 v18; // rax
  bool v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // esi
  int v24; // eax
  unsigned int v25; // r8d
  _BYTE *v26; // r9
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _BYTE *v31; // rax
  char v32; // [rsp+20h] [rbp-C9h]
  unsigned int v33; // [rsp+24h] [rbp-C5h]
  unsigned int v34; // [rsp+28h] [rbp-C1h]
  unsigned int v35; // [rsp+2Ch] [rbp-BDh] BYREF
  __int64 v36; // [rsp+30h] [rbp-B9h]
  unsigned int v37; // [rsp+38h] [rbp-B1h]
  unsigned int *v38; // [rsp+40h] [rbp-A9h]
  _BYTE *v39; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v40; // [rsp+50h] [rbp-99h]
  _QWORD v41[16]; // [rsp+60h] [rbp-89h]

  v6 = a6;
  v7 = a2;
  v8 = *a3;
  v9 = 0;
  v33 = a2;
  v10 = 0;
  v11 = 0;
  v38 = a3;
  v36 = a6;
  v12 = a3;
  v37 = v8;
  v13 = (int)a1;
  v32 = 0;
  v14 = a1;
  if ( v7 >= 0x7FFFFFFF )
  {
LABEL_49:
    v22 = v13 - (_DWORD)v14 - 1;
  }
  else
  {
    if ( v8 )
    {
      v15 = (unsigned int *)(a4 + 4);
      v40 = a4 + 4;
      while ( 1 )
      {
        v16 = *(v15 - 1);
        v17 = *(_BYTE **)(v15 + 1);
        v18 = *v15;
        v34 = v18;
        v19 = (v16 & 0xC0000000) != 0 && v6 && (unsigned int)v18 < a5;
        v35 = 0;
        v39 = 0LL;
        if ( (unsigned __int8)v16 == 5 )
          break;
        if ( v11 )
          goto LABEL_16;
        if ( !v7 )
        {
          if ( (((unsigned __int8)v16 - 2) & 0xFFFFFFFD) != 0 )
            goto LABEL_48;
          v18 = (unsigned int)v18;
          goto LABEL_16;
        }
        if ( v17 )
        {
          while ( *v17 )
          {
            if ( *v17 == *v14 )
              goto LABEL_33;
            ++v17;
          }
          if ( (((unsigned __int8)v16 - 2) & 0xFFFFFFFD) != 0 )
          {
LABEL_48:
            v12 = v38;
            goto LABEL_49;
          }
          v18 = (unsigned int)v18;
          v11 = v32;
LABEL_16:
          if ( v19 )
          {
            v20 = 2 * v18;
            *(_QWORD *)(v6 + 8 * v20 + 8) = 0LL;
            *(_DWORD *)(v6 + 8 * v20) = 0;
          }
          if ( (unsigned int)(unsigned __int8)v16 - 3 > 1 )
            goto LABEL_22;
          if ( v9 >= 8 )
            goto LABEL_48;
          v21 = 2LL * v9++;
          BYTE4(v41[v21 + 1]) = v11;
          v11 = 1;
          v41[v21] = v14;
          LODWORD(v41[v21 + 1]) = v7;
LABEL_21:
          v32 = v11;
          goto LABEL_22;
        }
LABEL_33:
        v24 = MinAsn1ExtractContent(v14, v7, &v35, &v39);
        if ( v24 <= 0 )
          goto LABEL_48;
        v25 = v35;
        v26 = v39;
        v6 = v36;
        v27 = v35 + v24;
        if ( v19 )
        {
          if ( (v16 & 0x40000000) != 0 )
          {
            v28 = 2LL * v34;
            *(_QWORD *)(v36 + 8 * v28 + 8) = v39;
            *(_DWORD *)(v6 + 8 * v28) = v25;
            if ( *v14 == 3 && v25 )
            {
              *(_QWORD *)(v6 + 16LL * v34 + 8) = v26 + 1;
              *(_DWORD *)(v6 + 16LL * v34) = v25 - 1;
            }
          }
          else if ( v16 < 0 )
          {
            v29 = 2LL * v34;
            *(_QWORD *)(v36 + 8 * v29 + 8) = v14;
            *(_DWORD *)(v6 + 8 * v29) = v27;
          }
        }
        if ( (unsigned __int8)v16 == 1 || (unsigned __int8)v16 == 2 )
        {
          v14 += v27;
          v7 = v33 - v27;
          v33 -= v27;
        }
        else
        {
          if ( (unsigned int)(unsigned __int8)v16 - 3 > 1 || v9 >= 8 )
            goto LABEL_48;
          v7 = v25;
          v30 = 2LL * v9;
          v31 = &v14[v27];
          v14 = v26;
          v41[v30] = v31;
          BYTE4(v41[v30 + 1]) = 0;
          LODWORD(v41[v30 + 1]) = v33 - v27;
          ++v9;
          v33 = v25;
        }
        v11 = v32;
LABEL_22:
        ++v10;
        v15 = (unsigned int *)(v40 + 16);
        v40 += 16LL;
        if ( v10 >= v37 )
        {
          v12 = v38;
          goto LABEL_24;
        }
      }
      if ( !v9 )
        goto LABEL_48;
      v7 = v41[2 * --v9 + 1];
      v14 = (_BYTE *)v41[2 * v9];
      v11 = BYTE4(v41[2 * v9 + 1]);
      v33 = v7;
      goto LABEL_21;
    }
LABEL_24:
    v22 = (_DWORD)v14 - v13;
  }
  *v12 = v10;
  return v22;
}
