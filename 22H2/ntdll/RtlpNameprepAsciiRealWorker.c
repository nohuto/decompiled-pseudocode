/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x18000D1EC
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x18000D0E4 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlpValidateAsciiStd3AndLength @ 0x18000D450 (RtlpValidateAsciiStd3AndLength.c)
 *     RtlStringCchLengthW @ 0x18003B284 (RtlStringCchLengthW.c)
 *     RtlNormalizeString @ 0x180080B20 (RtlNormalizeString.c)
 *     punycode_encode @ 0x180082B14 (punycode_encode.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     FindEmailAt @ 0x1800FEDB0 (FindEmailAt.c)
 */

__int64 __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        wchar_t *a2,
        __int64 a3,
        void *a4,
        int *a5,
        char a6,
        wchar_t *String1,
        char a8,
        void *Src,
        char a10)
{
  __int16 v10; // r11
  void *v11; // r15
  int v12; // edi
  int *v14; // rsi
  int v15; // ebp
  char v16; // r13
  char v17; // dl
  char v18; // r12
  char v19; // al
  __int64 v20; // r8
  int v21; // r10d
  int v22; // ebx
  wchar_t *v23; // rdx
  __int64 result; // rax
  wchar_t *v25; // r13
  int v26; // ecx
  int v27; // r9d
  int v28; // eax
  bool v29; // zf
  wchar_t v30; // dx
  wchar_t v31; // cx
  void *v32; // r14
  int v33; // edi
  int EmailAt; // eax
  int v35; // r11d
  bool v36; // zf
  bool v37; // cc
  __int64 v38; // rax
  int v39; // [rsp+30h] [rbp-38h] BYREF
  int v40; // [rsp+38h] [rbp-30h]
  int v41; // [rsp+78h] [rbp+10h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( (int)a3 < -1 )
    return 3221225485LL;
  v14 = a5;
  if ( !a5 )
    return 3221225485LL;
  v15 = *a5;
  if ( *a5 < 0 || v15 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  a8 = 0;
  v16 = 0;
  v40 = a1 & 1;
  v41 = a1 & 4;
  v17 = v41 != 0;
  v18 = (a1 & 2) != 0;
  a10 = v41 != 0;
  if ( (_DWORD)a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v39) >= 0 )
    {
      v17 = a10;
      v12 = v39 + 1;
      goto LABEL_9;
    }
    return 3221225485LL;
  }
LABEL_9:
  if ( v12 > 0 && a2[v12 - 1] == v10 )
  {
    v16 = 1;
    --v12;
    a8 = 1;
  }
  LOBYTE(a3) = v17;
  LOBYTE(a4) = v18;
  v19 = RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v12, a3, a4);
  v21 = 0;
  if ( !v19 )
  {
    v25 = String1;
    v26 = 511;
    v27 = (int)String1;
    v28 = 0;
    v22 = 0;
    if ( !v41 )
    {
LABEL_26:
      if ( v28 >= v12 )
        goto LABEL_30;
      v41 = v26;
      result = RtlNormalizeString(((v40 ^ 1u) << 8) + 13, (int)a2 + 2 * v28, v12 - v28, v27, (__int64)&v41);
      v21 = 0;
      v29 = (_DWORD)result == 0;
      if ( (int)result >= 0 )
      {
        if ( v41 )
        {
          v22 += v41;
LABEL_30:
          if ( v22 > 0 )
          {
            v30 = v25[v22 - 1];
            if ( v30 == 46 )
            {
              v31 = a2[v12 - 1];
              if ( v31 != 46 && v31 != 12290 && v31 != 0xFF0E && v31 != 0xFF61 )
                goto LABEL_37;
            }
            if ( !v30 )
              goto LABEL_37;
          }
          v32 = Src;
          v41 = 515;
          result = punycode_encode(v25, a10, v18);
          v33 = v41;
          v21 = 0;
          if ( !v41 )
          {
LABEL_35:
            *v14 = v21;
            return result;
          }
          if ( !a6 )
          {
            if ( a8 )
            {
              if ( v22 > 511 )
                goto LABEL_37;
              v38 = v22++;
              v25[v38] = 0;
            }
            if ( !v11 || !v15 )
              goto LABEL_21;
            if ( v22 <= v15 )
            {
              v23 = v25;
              goto LABEL_20;
            }
            goto LABEL_75;
          }
          if ( !a8 )
          {
LABEL_63:
            if ( v11 && v15 )
            {
              if ( v33 > v15 )
              {
LABEL_75:
                result = 3221225507LL;
                goto LABEL_35;
              }
              memmove(v11, v32, 2LL * v33);
            }
            *v14 = v33;
            return 0LL;
          }
          if ( v41 < 515 )
          {
            *((_WORD *)v32 + v41) = 0;
            ++v33;
            goto LABEL_63;
          }
LABEL_37:
          result = 3221227286LL;
          goto LABEL_35;
        }
        v29 = (_DWORD)result == 0;
      }
      if ( v29 || (_DWORD)result == -1073741789 || (_DWORD)result == -1073740009 )
        goto LABEL_37;
      v37 = v41 <= 0;
LABEL_48:
      if ( v37 )
        goto LABEL_35;
      goto LABEL_37;
    }
    EmailAt = FindEmailAt(a2, (unsigned int)v12, v20, String1);
    v39 = EmailAt;
    if ( !EmailAt )
      goto LABEL_37;
    v41 = v35;
    result = RtlNormalizeString(1, (_DWORD)a2, EmailAt, (_DWORD)v25, (__int64)&v41);
    v22 = v41;
    v21 = 0;
    v36 = (_DWORD)result == 0;
    if ( (int)result >= 0 )
    {
      if ( v41 )
      {
        v28 = v39;
        v27 = (_DWORD)v25 + 2 * v41;
        v26 = 511 - v41;
        goto LABEL_26;
      }
      v36 = (_DWORD)result == 0;
    }
    if ( v36 || (_DWORD)result == -1073741789 || (_DWORD)result == -1073740009 )
      goto LABEL_37;
    v37 = v41 <= 0;
    goto LABEL_48;
  }
  if ( v12 )
  {
    v22 = v12 + 1;
    if ( !v16 )
      v22 = v12;
    if ( !v11 || !v15 )
      goto LABEL_21;
    if ( v22 <= v15 )
    {
      v23 = a2;
LABEL_20:
      memmove(v11, v23, 2LL * v22);
LABEL_21:
      *v14 = v22;
      return 0LL;
    }
    goto LABEL_75;
  }
  return 3221227286LL;
}
