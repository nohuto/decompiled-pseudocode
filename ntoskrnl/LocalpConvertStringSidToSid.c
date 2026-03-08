/*
 * XREFs of LocalpConvertStringSidToSid @ 0x14074CCC8
 * Callers:
 *     SeConvertStringSidToSid @ 0x1402C0AD0 (SeConvertStringSidToSid.c)
 *     LocalGetSidForString @ 0x140750A70 (LocalGetSidForString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 *     wcstoxq @ 0x1403D653C (wcstoxq.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, __int64 *a2, wchar_t **a3)
{
  int v4; // r14d
  void *v5; // r13
  void *v6; // r15
  int v7; // esi
  const wchar_t *v8; // rbx
  wchar_t *v9; // rdi
  wchar_t *v10; // rax
  unsigned int v11; // r9d
  unsigned __int64 v12; // rcx
  wchar_t *v13; // rbx
  unsigned __int8 v14; // di
  wchar_t *v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  wchar_t v18; // dx
  wchar_t *v19; // rax
  bool v20; // zf
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // si
  wchar_t *v23; // rbx
  unsigned int v24; // edi
  int v25; // r12d
  unsigned int *v26; // r15
  int v27; // r8d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  wchar_t *v32; // r13
  __int64 v33; // rax
  size_t v34; // r15
  __int64 v35; // rax
  int v36; // eax
  int v37; // [rsp+30h] [rbp-D0h]
  __int16 v38; // [rsp+34h] [rbp-CCh]
  wchar_t *EndPtr; // [rsp+40h] [rbp-C0h] BYREF
  int Radix; // [rsp+48h] [rbp-B8h]
  unsigned int v41; // [rsp+4Ch] [rbp-B4h]
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+54h] [rbp-ACh]
  void *v44; // [rsp+58h] [rbp-A8h]
  __int64 *v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+70h] [rbp-90h] BYREF

  v45 = a2;
  EndPtr = 0LL;
  v4 = 0;
  v44 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 10;
  Radix = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v8 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v7 = 16;
    Radix = v7;
  }
  v43 = wcstoul(v8, &EndPtr, v7);
  if ( v43 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v8 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v9 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v10 = wcschr(v9, 0x2Du);
  if ( !v10 || v10 == v9 )
    return 3221225592LL;
  if ( *v9 != 48 || (v11 = 16, ((v9[1] - 88) & 0xFFDF) != 0) )
    v11 = v7;
  v42 = 0;
  v12 = wcstoxq(0LL, v9, &EndPtr, v11, 1, &v42);
  if ( v12 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v13 = EndPtr;
  if ( EndPtr == v9 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v38) = v12;
  v14 = 0;
  LOBYTE(v38) = BYTE1(v12);
  v15 = EndPtr;
  HIBYTE(v37) = BYTE2(v12);
  BYTE2(v37) = BYTE3(v12);
  LOBYTE(v37) = BYTE5(v12);
  BYTE1(v37) = BYTE4(v12);
  while ( 1 )
  {
    if ( v14 == 0xFF )
    {
      v4 = -1073741675;
      goto LABEL_61;
    }
    v16 = *v15;
    if ( (_WORD)v16 == 45 )
    {
      if ( *(v15 - 1) != 45 )
      {
        ++v14;
        if ( v15[1] == 48 && ((v15[2] - 88) & 0xFFDF) == 0 )
          v15 += 2;
        goto LABEL_27;
      }
    }
    else if ( (unsigned int)v16 <= 0x3B )
    {
      v17 = 0x800120100000001LL;
      if ( _bittest64(&v17, v16) )
      {
LABEL_33:
        v19 = v15 - 1;
        v4 = -1073741704;
        v20 = *(v15 - 1) == 45;
        if ( *(v15 - 1) != 45 )
          v19 = v15;
        *a3 = v19;
        if ( !v20 )
        {
          v4 = 0;
          ++v14;
        }
        v21 = v14;
        if ( !v20 )
          goto LABEL_38;
LABEL_50:
        if ( v4 >= 0 )
        {
          v30 = SddlpAlloc(4LL * v14 + 12);
          *v45 = v30;
          if ( v30 )
          {
            *(_BYTE *)v30 = v43;
            *(_DWORD *)(v30 + 2) = v37;
            *(_WORD *)(v30 + 6) = v38;
            *(_BYTE *)(v30 + 1) = v14;
            memmove((void *)(v30 + 8), v5, 4LL * v14);
          }
          else
          {
            v4 = -1073741801;
          }
        }
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        goto LABEL_55;
      }
    }
    v18 = v15[1];
    if ( v18 == 58 && (((_WORD)v16 - 71) & 0xFFF3) == 0 && (_DWORD)v16 != 75 )
      goto LABEL_33;
    if ( (unsigned __int16)(v16 - 48) <= 9u )
      goto LABEL_26;
    if ( (unsigned __int16)(v16 - 97) > 5u )
      break;
LABEL_27:
    if ( !++v15 )
      goto LABEL_79;
  }
  if ( (unsigned __int16)(v16 - 65) > 5u )
  {
    v4 = -1073741704;
LABEL_61:
    *a3 = v15;
    return (unsigned int)v4;
  }
LABEL_26:
  if ( (_DWORD)v16 != 68 || v18 != 58 )
    goto LABEL_27;
  v32 = EndPtr;
  v33 = v15 - EndPtr;
  v34 = 2 * v33;
  if ( v33 >= 256 )
  {
    v35 = SddlpAlloc(v34 + 2);
    v44 = (void *)v35;
    if ( v35 )
    {
      v13 = (wchar_t *)v35;
      goto LABEL_78;
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    v13 = (wchar_t *)&v46;
LABEL_78:
    memmove(v13, v32, v34);
    v13[v34 / 2] = 0;
    ++v14;
    v6 = v44;
    *a3 = v15;
LABEL_79:
    v21 = v14;
LABEL_38:
    v22 = v14 - 1;
    if ( !v14 )
      v22 = v21;
    if ( v22 )
    {
      v23 = v13 + 1;
      v5 = (void *)SddlpAlloc(4LL * v22);
      if ( v5 )
      {
        v24 = 0;
        v41 = v22;
        v25 = Radix;
        v26 = (unsigned int *)v5;
        while ( 1 )
        {
          if ( *v23 != 48 || (v27 = 16, ((v23[1] - 88) & 0xFFDF) != 0) )
            v27 = v25;
          *v26 = wcstoul(v23, &EndPtr, v27);
          if ( EndPtr )
          {
            v28 = *EndPtr;
            if ( (unsigned int)v28 > 0x3B || (v29 = 0x800320000000001LL, !_bittest64(&v29, v28)) )
            {
              if ( EndPtr[1] != 58 )
                break;
              LOWORD(v28) = v28 - 68;
              if ( (unsigned __int16)v28 > 0xFu )
                break;
              v36 = 34825;
              if ( !_bittest(&v36, v28) )
                break;
            }
          }
          v23 = EndPtr + 1;
          ++v24;
          ++v26;
          if ( v24 >= v41 )
            goto LABEL_49;
        }
        v4 = -1073741704;
      }
      else
      {
        v4 = -1073741801;
      }
LABEL_49:
      v6 = v44;
      v14 = v22;
      goto LABEL_50;
    }
    v4 = -1073741704;
LABEL_55:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)v4;
}
