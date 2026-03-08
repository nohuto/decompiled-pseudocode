/*
 * XREFs of Normalization__IsNormalized @ 0x1409BDB3C
 * Callers:
 *     RtlIsNormalizedString @ 0x1409BEC40 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1405ADF4C (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1409BD590 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x1409BD708 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1409BD754 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x1409BD888 (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // r15d
  unsigned __int16 *v5; // r12
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  unsigned __int8 v19; // r13
  unsigned __int8 v20; // r14
  unsigned __int8 v21; // si
  unsigned __int8 v22; // r15
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // si
  unsigned int v25; // r15d
  int CanCombineWithStartFirstPair; // eax
  unsigned int v27; // eax
  int CanCombineWithStartBase; // eax
  unsigned __int8 v29; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v30; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v31; // [rsp+32h] [rbp-1Eh]
  int v32; // [rsp+34h] [rbp-1Ch] BYREF
  int v33; // [rsp+38h] [rbp-18h] BYREF
  int v34; // [rsp+3Ch] [rbp-14h]
  int v35; // [rsp+40h] [rbp-10h]
  int v36; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int16 *v37; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v38; // [rsp+98h] [rbp+48h] BYREF
  int v39; // [rsp+A0h] [rbp+50h]
  _BYTE *v40; // [rsp+A8h] [rbp+58h]

  v40 = a4;
  v39 = a3;
  v4 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v32 = 0;
  v29 = 0;
  v33 = 0;
  v36 = 0;
  v38 = 0;
  v37 = a2 - 1;
  v34 = 0;
  v31 = 0;
  v30 = 0;
  if ( a3 <= 0 )
    goto LABEL_95;
  v8 = *(_DWORD *)(a1 + 28);
  v35 = v8;
  do
  {
    v9 = *v5;
    if ( v9 < v8 )
      goto LABEL_94;
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_BYTE *)(((unsigned __int64)*v5 >> 7) + v10);
    if ( !v11 || v11 == 0xFB && *(_BYTE *)(a1 + 113) )
      goto LABEL_93;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = v11;
          if ( !v11 )
            goto LABEL_91;
          v13 = v11 - 251;
          if ( !v13 )
            goto LABEL_90;
          v14 = v13 - 1;
          if ( !v14 )
            return 3221227287LL;
          v15 = v14 - 1;
          if ( !v15 )
            goto LABEL_31;
          v16 = v15 - 1;
          if ( v16 )
            break;
          if ( v4 <= 1 )
            return 3221227287LL;
          ++v5;
          v39 = --v4;
          v17 = *v5;
          if ( (unsigned __int16)(v17 + 9216) > 0x3FFu )
            return 3221227287LL;
          v9 = v17 + ((v9 - 55287) << 10);
          v11 = *(_BYTE *)(((__int64)v9 >> 7) + v10);
        }
        if ( v16 != 1 )
        {
          v18 = *(unsigned __int8 *)((v9 & 0x7F) + (v12 << 7) + *(_QWORD *)(a1 + 40) - 128);
          if ( !(_BYTE)v18 )
            goto LABEL_91;
          v19 = v18 & 0xC0;
          v20 = v18 & 0x3F;
          if ( (v18 & 0x3F) == 0 || v20 == 63 )
          {
            switch ( v18 )
            {
              case 64:
                goto LABEL_89;
              case 127:
LABEL_90:
                if ( *(_BYTE *)(a1 + 113) )
                  goto LABEL_91;
                break;
              case 128:
                goto LABEL_89;
              case 191:
                goto LABEL_31;
              case 192:
                Normalization__GetLastChar(a1, (__int64)v5, &v37, (unsigned int *)&v32, &v29, &v38);
                if ( (v29 | v38) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v32, v9) )
                  goto LABEL_31;
                goto LABEL_89;
              case 255:
                if ( !v9 && v4 <= 1 )
                  goto LABEL_95;
                break;
              default:
                goto LABEL_41;
            }
            return 3221227287LL;
          }
LABEL_41:
          if ( (v18 & 0x80) != 0 )
          {
            Normalization__GetLastChar(a1, (__int64)v5, &v37, (unsigned int *)&v32, &v29, &v38);
            v21 = v29;
            if ( !v29 || v29 == 63 )
            {
              v34 = v32;
              v31 = v29;
              v30 = v38;
              if ( ((v38 - 64) & 0xBF) == 0
                && v19 == 0xC0
                && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v32, v9) )
              {
                goto LABEL_31;
              }
              goto LABEL_64;
            }
            v22 = v38;
            if ( (v38 & 0xBF) != 0 )
            {
              if ( v29 > v20 )
                goto LABEL_31;
              if ( v19 != 0xC0 || v29 == v20 )
                goto LABEL_63;
              v23 = v30;
              v24 = v31;
              if ( (((v31 | v30) - 64) & 0xBF) != 0 && (v30 != 64 || v31 && v31 != 63) )
              {
                v25 = v34;
              }
              else
              {
                v25 = v34;
                if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v34, v9) )
                  goto LABEL_31;
                v23 = v30;
              }
              if ( v20 >= v24 || (v23 & 0xBF) != 0 || (unsigned __int8)(v24 - 1) > 0x3Du )
                goto LABEL_63;
              if ( v24 == *(_BYTE *)(a1 + 116) )
              {
                if ( v20 >= *(_BYTE *)(a1 + 114) )
                {
                  if ( v20 != *(_BYTE *)(a1 + 115) )
                  {
LABEL_63:
                    v4 = v39;
LABEL_64:
                    v29 = v20;
                    v38 = v19;
                    goto LABEL_92;
                  }
                  goto LABEL_61;
                }
              }
              else if ( v24 == *(_BYTE *)(a1 + 118) && v20 == *(_BYTE *)(a1 + 117) )
              {
LABEL_61:
                CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v36, &v33, v25, v9);
                goto LABEL_62;
              }
              CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v33, v25, v9);
LABEL_62:
              if ( !CanCombineWithStartFirstPair )
                goto LABEL_63;
LABEL_31:
              *v40 = 0;
              return 0LL;
            }
            v33 = 0;
            v36 = 0;
            v27 = v32;
            v34 = v32;
            if ( v19 != 0xC0 )
              goto LABEL_81;
            if ( v38 == 64 )
            {
              if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v32, v9) )
                goto LABEL_31;
              v27 = v34;
            }
            if ( v21 <= v20 )
            {
LABEL_81:
              v31 = v21;
              v30 = v22;
              goto LABEL_63;
            }
            if ( v21 == *(_BYTE *)(a1 + 116) )
            {
              if ( v20 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v20 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_81;
                goto LABEL_76;
              }
            }
            else if ( v21 == *(_BYTE *)(a1 + 118) && v20 == *(_BYTE *)(a1 + 117) )
            {
LABEL_76:
              CanCombineWithStartBase = Normalization__CanCombineWithStartFirstPair(a1, &v36, &v33, v27, v9);
              goto LABEL_80;
            }
            CanCombineWithStartBase = Normalization__CanCombineWithStartBase(a1, &v33, v27, v9);
LABEL_80:
            if ( CanCombineWithStartBase )
              goto LABEL_31;
            goto LABEL_81;
          }
          v33 = 0;
LABEL_89:
          v34 = v9;
          v31 = v20;
          v30 = v19;
          goto LABEL_64;
        }
        if ( v9 >= 44032 )
          break;
        if ( v4 > 1 && CanComposeHangul((unsigned int)v9, v5[1]) )
          goto LABEL_31;
        if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(v9 - 4447) > 1 )
          goto LABEL_24;
LABEL_19:
        v11 = -5;
      }
      if ( v9 < 55204 )
        break;
      if ( (unsigned int)(v9 - 55216) > 0x16 && (unsigned int)(v9 - 55243) > 0x30 )
        goto LABEL_19;
LABEL_24:
      v11 = 0;
    }
    if ( *(_BYTE *)(a1 + 112) == 1 || v4 > 1 && CanComposeHangul((unsigned int)v9, v5[1]) )
      goto LABEL_31;
LABEL_91:
    v29 = 0;
    v38 = 0;
LABEL_92:
    v32 = v9;
    v37 = v5;
LABEL_93:
    v8 = v35;
LABEL_94:
    --v4;
    ++v5;
    v39 = v4;
  }
  while ( v4 > 0 );
LABEL_95:
  *v40 = 1;
  return 0LL;
}
