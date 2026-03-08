/*
 * XREFs of MinAsn1ExtractContent @ 0x140A6EA28
 * Callers:
 *     MinAsn1ParseAndDecodeRDNComponent @ 0x140A6D6CC (MinAsn1ParseAndDecodeRDNComponent.c)
 *     MinAsn1ParseOIDSequence @ 0x140A6D858 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x140A6D9C8 (MinAsn1ParseSignedDataCertificatesEx.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A6DAB8 (MinAsn1ParseSingleExtensionValue.c)
 *     MinAsn1DecodeTime @ 0x140A6E75C (MinAsn1DecodeTime.c)
 *     MinAsn1ExtractValues @ 0x140A6EB74 (MinAsn1ExtractValues.c)
 * Callees:
 *     MinAsn1DecodeLength @ 0x140A6E6E4 (MinAsn1DecodeLength.c)
 */

__int64 __fastcall MinAsn1ExtractContent(_BYTE *a1, int a2, unsigned int *a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rsi
  int v8; // edi
  char v9; // al
  unsigned int v10; // ecx
  int v12; // eax
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  v6 = a2 - 1;
  if ( !a2 )
    return (unsigned int)-2;
  v7 = a1 + 1;
  if ( (*a1 & 0x1F) == 0x1F )
  {
    v8 = 2;
    while ( v6 )
    {
      v9 = *v7;
      --v6;
      ++v7;
      if ( v9 >= 0 )
        goto LABEL_10;
      ++v8;
    }
    return (unsigned int)-2;
  }
  v8 = 1;
LABEL_10:
  v12 = MinAsn1DecodeLength(&v13, v7, v6);
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( v13 <= v6 - v12 )
    {
      *a3 = v13;
      *a4 = &v7[v12];
      return (unsigned int)(v8 + v12);
    }
    return (unsigned int)-2;
  }
  return v10;
}
