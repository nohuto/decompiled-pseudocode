/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x14058D6E4
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x1409167F0 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     FindEmailAt @ 0x14058D324 (FindEmailAt.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x1409168B8 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_encode @ 0x140917084 (punycode_encode.c)
 *     RtlNormalizeString @ 0x140918FE0 (RtlNormalizeString.c)
 */

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        wchar_t *a2,
        __int64 a3,
        void *a4,
        LONG *a5,
        char a6,
        wchar_t *Str1,
        char a8,
        void *Src,
        char a10)
{
  __int16 v10; // r11
  void *v11; // r12
  int v12; // edi
  wchar_t *v13; // r15
  LONG *v14; // rsi
  int v15; // r14d
  char v16; // dl
  bool v17; // r13
  char v18; // al
  LONG v19; // r11d
  NTSTATUS result; // eax
  LONG v21; // ebx
  int v22; // eax
  wchar_t *v23; // r9
  LONG v24; // ecx
  LONG EmailAt; // eax
  WCHAR *v26; // r10
  bool v27; // zf
  bool v28; // zf
  wchar_t v29; // dx
  wchar_t v30; // cx
  _WORD *v31; // r13
  LONG v32; // edi
  bool v33; // cc
  __int64 v34; // rax
  char v35; // [rsp+28h] [rbp-18h]
  size_t pcchLength; // [rsp+30h] [rbp-10h] BYREF
  int v37; // [rsp+38h] [rbp-8h]
  LONG DestinationStringLength; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = a3;
  v13 = a2;
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
          v37 = a1 & 1;
          DestinationStringLength = a1 & 4;
          v16 = DestinationStringLength != 0;
          v17 = (a1 & 2) != 0;
          a10 = DestinationStringLength != 0;
          if ( (_DWORD)a3 != -1 )
          {
LABEL_11:
            if ( v12 > 0 && v13[v12 - 1] == v10 )
            {
              a8 = 1;
              --v12;
            }
            LOBYTE(a3) = v16;
            LOBYTE(a4) = v17;
            v18 = RtlpValidateAsciiStd3AndLength(v13, (unsigned int)v12, a3, a4);
            v19 = 0;
            if ( v18 )
            {
              if ( !v12 )
                return -1073740010;
              v21 = v12 + 1;
              if ( !a8 )
                v21 = v12;
              goto LABEL_65;
            }
            v22 = 0;
            v23 = Str1;
            v24 = 511;
            v21 = 0;
            if ( !DestinationStringLength )
              goto LABEL_28;
            EmailAt = FindEmailAt((__int64)v13, v12);
            LODWORD(pcchLength) = EmailAt;
            if ( !EmailAt )
              goto LABEL_55;
            DestinationStringLength = 511;
            result = RtlNormalizeString(1u, v13, EmailAt, v26, &DestinationStringLength);
            v21 = DestinationStringLength;
            v19 = 0;
            v27 = result == 0;
            if ( result >= 0 )
            {
              if ( DestinationStringLength )
              {
                v22 = pcchLength;
                v23 = &Str1[DestinationStringLength];
                v24 = 511 - DestinationStringLength;
LABEL_28:
                if ( v22 >= v12 )
                {
LABEL_32:
                  if ( v21 > 0 )
                  {
                    v29 = Str1[v21 - 1];
                    if ( v29 == 46 )
                    {
                      v30 = v13[v12 - 1];
                      if ( v30 != 46 && v30 != 12290 && v30 != 0xFF0E && v30 != 0xFF61 )
                        goto LABEL_55;
                    }
                    if ( !v29 )
                      goto LABEL_55;
                  }
                  v13 = Str1;
                  v35 = v17;
                  v31 = Src;
                  DestinationStringLength = 515;
                  result = punycode_encode(Str1, a10, v35);
                  v32 = DestinationStringLength;
                  v19 = 0;
                  if ( DestinationStringLength )
                  {
                    if ( a6 )
                    {
                      if ( !a8 )
                        goto LABEL_44;
                      if ( DestinationStringLength < 515 )
                      {
                        v31[DestinationStringLength] = 0;
                        ++v32;
LABEL_44:
                        if ( v11 && v15 )
                        {
                          if ( v32 > v15 )
                          {
LABEL_68:
                            result = -1073741789;
                            goto LABEL_56;
                          }
                          memmove(v11, v31, 2LL * v32);
                        }
                        *v14 = v32;
                        return 0;
                      }
                      goto LABEL_55;
                    }
                    if ( !a8 )
                    {
LABEL_65:
                      if ( v11 && v15 )
                      {
                        if ( v21 > v15 )
                          goto LABEL_68;
                        memmove(v11, v13, 2LL * v21);
                      }
                      *v14 = v21;
                      return 0;
                    }
                    if ( v21 <= 511 )
                    {
                      v34 = v21++;
                      v13[v34] = 0;
                      goto LABEL_65;
                    }
LABEL_55:
                    result = -1073740010;
                  }
LABEL_56:
                  *v14 = v19;
                  return result;
                }
                DestinationStringLength = v24;
                result = RtlNormalizeString(((v37 ^ 1) << 8) + 13, &v13[v22], v12 - v22, v23, &DestinationStringLength);
                v19 = 0;
                v28 = result == 0;
                if ( result >= 0 )
                {
                  if ( DestinationStringLength )
                  {
                    v21 += DestinationStringLength;
                    goto LABEL_32;
                  }
                  v28 = result == 0;
                }
                if ( v28 || result == -1073741789 || result == -1073740009 )
                  goto LABEL_55;
                v33 = DestinationStringLength <= 0;
LABEL_54:
                if ( !v33 )
                  goto LABEL_55;
                goto LABEL_56;
              }
              v27 = result == 0;
            }
            if ( v27 || result == -1073741789 || result == -1073740009 )
              goto LABEL_55;
            v33 = DestinationStringLength <= 0;
            goto LABEL_54;
          }
          pcchLength = 0LL;
          if ( RtlStringCchLengthW(v13, 0x7FFFFFFFuLL, &pcchLength) >= 0 )
          {
            v16 = a10;
            v12 = pcchLength + 1;
            goto LABEL_11;
          }
        }
      }
    }
  }
  return -1073741811;
}
