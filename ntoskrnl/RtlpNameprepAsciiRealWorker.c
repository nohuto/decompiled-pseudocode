/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x1405ADAEC
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x1409BC4BC (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     FindEmailAt @ 0x1405AD764 (FindEmailAt.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x1409BC598 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_encode @ 0x1409BCD88 (punycode_encode.c)
 *     RtlNormalizeString @ 0x1409BECD0 (RtlNormalizeString.c)
 */

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        const WCHAR *a2,
        __int64 a3,
        void *a4,
        LONG *a5,
        char a6,
        void *Src,
        char a8,
        const WCHAR *a9,
        char a10)
{
  __int16 v10; // r11
  void *v11; // r12
  LONG v12; // ebx
  LONG *v14; // rsi
  int v15; // r14d
  char v16; // di
  char v17; // dl
  bool v18; // r13
  char v19; // al
  LONG v20; // r11d
  NTSTATUS result; // eax
  const WCHAR *v22; // rdx
  LONG v23; // eax
  WCHAR *v24; // r9
  LONG v25; // ecx
  LONG v26; // edi
  LONG EmailAt; // eax
  WCHAR *v28; // r10
  bool v29; // zf
  bool v30; // zf
  __int16 v31; // dx
  WCHAR v32; // cx
  bool v33; // cc
  _WORD *v34; // r15
  const WCHAR *v35; // r13
  __int64 v36; // rax
  char v37; // [rsp+28h] [rbp-18h]
  size_t pcchLength; // [rsp+30h] [rbp-10h] BYREF
  int v39; // [rsp+38h] [rbp-8h]
  LONG DestinationStringLength; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = a3;
  if ( a2 )
  {
    if ( (int)a3 >= -1 )
    {
      v14 = a5;
      if ( a5 )
      {
        v15 = *a5;
        if ( *a5 >= 0 && (v15 <= 0 || a4) && (a1 & 0xFFFFFFF8) == 0 )
        {
          a8 = 0;
          v16 = 0;
          v39 = a1 & 1;
          DestinationStringLength = a1 & 4;
          v17 = DestinationStringLength != 0;
          v18 = (a1 & 2) != 0;
          a10 = DestinationStringLength != 0;
          if ( (_DWORD)a3 != -1 )
          {
LABEL_11:
            if ( v12 > 0 && a2[v12 - 1] == v10 )
            {
              v16 = 1;
              --v12;
              a8 = 1;
            }
            LOBYTE(a3) = v17;
            LOBYTE(a4) = v18;
            v19 = RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v12, a3, a4);
            v20 = 0;
            if ( v19 )
            {
              if ( !v12 )
                return -1073740010;
              if ( v16 )
                ++v12;
              if ( !v11 || !v15 )
                goto LABEL_24;
              if ( v12 <= v15 )
              {
                v22 = a2;
LABEL_23:
                memmove(v11, v22, 2LL * v12);
LABEL_24:
                *v14 = v12;
                return 0;
              }
              goto LABEL_71;
            }
            v23 = 0;
            v24 = (WCHAR *)Src;
            v25 = 511;
            v26 = 0;
            if ( !DestinationStringLength )
              goto LABEL_31;
            EmailAt = FindEmailAt((__int64)a2, v12);
            LODWORD(pcchLength) = EmailAt;
            if ( !EmailAt )
              goto LABEL_48;
            DestinationStringLength = 511;
            result = RtlNormalizeString(1u, a2, EmailAt, v28, &DestinationStringLength);
            v26 = DestinationStringLength;
            v20 = 0;
            v29 = result == 0;
            if ( result >= 0 )
            {
              if ( DestinationStringLength )
              {
                v23 = pcchLength;
                v24 = (WCHAR *)((char *)Src + 2 * DestinationStringLength);
                v25 = 511 - DestinationStringLength;
LABEL_31:
                if ( v23 >= v12 )
                {
LABEL_35:
                  if ( v26 > 0 )
                  {
                    v31 = *((_WORD *)Src + v26 - 1);
                    if ( v31 == 46 )
                    {
                      v32 = a2[v12 - 1];
                      if ( v32 != 46 && v32 != 12290 && v32 != 0xFF0E && v32 != 0xFF61 )
                        goto LABEL_48;
                    }
                    else if ( !v31 )
                    {
                      goto LABEL_48;
                    }
                  }
                  v34 = Src;
                  v37 = v18;
                  v35 = a9;
                  DestinationStringLength = 515;
                  result = punycode_encode((wchar_t *)Src, a10, v37);
                  v12 = DestinationStringLength;
                  v20 = 0;
                  if ( !DestinationStringLength )
                    goto LABEL_49;
                  if ( !a6 )
                  {
                    if ( a8 )
                    {
                      if ( v26 > 511 )
                        goto LABEL_48;
                      v36 = v26++;
                      v34[v36] = 0;
                    }
                    if ( v11 && v15 )
                    {
                      if ( v26 > v15 )
                      {
LABEL_71:
                        result = -1073741789;
                        goto LABEL_49;
                      }
                      memmove(v11, v34, 2LL * v26);
                    }
                    *v14 = v26;
                    return 0;
                  }
                  if ( !a8 )
                  {
LABEL_61:
                    if ( !v11 || !v15 )
                      goto LABEL_24;
                    if ( v12 <= v15 )
                    {
                      v22 = v35;
                      goto LABEL_23;
                    }
                    goto LABEL_71;
                  }
                  if ( DestinationStringLength < 515 )
                  {
                    v35[DestinationStringLength] = 0;
                    ++v12;
                    goto LABEL_61;
                  }
LABEL_48:
                  result = -1073740010;
                  goto LABEL_49;
                }
                DestinationStringLength = v25;
                result = RtlNormalizeString(((v39 ^ 1) << 8) + 13, &a2[v23], v12 - v23, v24, &DestinationStringLength);
                v20 = 0;
                v30 = result == 0;
                if ( result >= 0 )
                {
                  if ( DestinationStringLength )
                  {
                    v26 += DestinationStringLength;
                    goto LABEL_35;
                  }
                  v30 = result == 0;
                }
                if ( v30 || result == -1073741789 || result == -1073740009 )
                  goto LABEL_48;
                v33 = DestinationStringLength <= 0;
LABEL_47:
                if ( v33 )
                {
LABEL_49:
                  *v14 = v20;
                  return result;
                }
                goto LABEL_48;
              }
              v29 = result == 0;
            }
            if ( v29 || result == -1073741789 || result == -1073740009 )
              goto LABEL_48;
            v33 = DestinationStringLength <= 0;
            goto LABEL_47;
          }
          pcchLength = 0LL;
          if ( RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength) >= 0 )
          {
            v17 = a10;
            v12 = pcchLength + 1;
            goto LABEL_11;
          }
        }
      }
    }
  }
  return -1073741811;
}
