/*
 * XREFs of GreCreateDIBBrush @ 0x1C02D2D2C
 * Callers:
 *     GreExtCreatePen @ 0x1C00E8994 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C02D30C0 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C02D2C88 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateDIBitmapReal @ 0x1C02E02CC (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rsi
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // eax
  char *v13; // rbx
  int v14; // ecx
  const void *v15; // r13
  unsigned int v16; // ebp
  __int64 v17; // r10
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r12
  unsigned int v27; // ecx
  __int64 DIBitmapReal; // rax
  __int64 v29; // rdx
  HBITMAP v30; // r15
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rdi
  __int64 v35; // rbx
  void *v36; // rcx
  ULONG v38; // ecx
  _QWORD v39[2]; // [rsp+70h] [rbp-48h] BYREF
  int v40; // [rsp+80h] [rbp-38h]
  __int64 v41; // [rsp+C0h] [rbp+8h]

  v6 = 0LL;
  if ( !a1 )
    goto LABEL_56;
  if ( a3 < 0x28 )
    goto LABEL_56;
  v10 = *a1;
  if ( (unsigned int)v10 > a3 )
    goto LABEL_56;
  v11 = 2LL;
  if ( a2 > 2 )
    goto LABEL_56;
  v12 = a1[4];
  v13 = (char *)a1 + v10;
  v14 = *((unsigned __int16 *)a1 + 7);
  v15 = v13;
  v16 = a1[8];
  v17 = 4LL;
  switch ( v12 )
  {
    case 3u:
      v16 = 3;
      v18 = 0;
      if ( a2 != 1 )
        v18 = a2;
      a2 = v18;
      if ( ((v14 - 16) & 0xFFFFFFEF) != 0 )
        return 0LL;
      break;
    case 0u:
      v19 = v14 - 1;
      if ( v19 )
      {
        v20 = v19 - 3;
        if ( v20 )
        {
          v21 = v20 - 4;
          if ( v21 )
          {
            v22 = v21 - 8;
            if ( v22 )
            {
              v23 = v22 - 8;
              if ( v23 )
              {
                if ( v23 != 8 )
                  return 0LL;
              }
            }
            v24 = 0;
            v25 = 0;
            if ( a2 != 1 )
              v24 = a2;
            a2 = v24;
            goto LABEL_25;
          }
          v25 = 256;
        }
        else
        {
          v25 = 16;
        }
      }
      else
      {
        v25 = 2;
      }
      if ( v16 && v25 >= v16 )
        break;
LABEL_25:
      v16 = v25;
      break;
    case 2u:
      if ( v14 != 4 )
        return 0LL;
      if ( !v16 )
        v16 = 16;
      break;
    default:
      if ( v12 != 1 || v14 != 8 )
        return 0LL;
      if ( !v16 )
        v16 = 256;
      break;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v17 = 0LL;
    v11 = v17;
  }
  v26 = v11 * v16;
  if ( v26 > 0xFFFFFFFF || (int)v26 + 3 < (unsigned int)v26 )
  {
    v38 = 534;
LABEL_57:
    EngSetLastError(v38);
    return 0LL;
  }
  v27 = (v26 + 3) & 0xFFFFFFFC;
  if ( v27 > a3 - (unsigned int)v10 )
  {
LABEL_56:
    v38 = 87;
    goto LABEL_57;
  }
  DIBitmapReal = GreCreateDIBitmapReal(
                   0,
                   6,
                   v27 + (unsigned int)v13,
                   (_DWORD)a1,
                   a2 != 0 ? 3 : 0,
                   a3,
                   a3 + (_DWORD)a1 - (v27 + (_DWORD)v13),
                   0LL,
                   0,
                   0LL,
                   1,
                   0LL,
                   0LL);
  v30 = (HBITMAP)DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    LOBYTE(v29) = 5;
    v31 = HmgShareLockCheck(DIBitmapReal, v29);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 56);
      if ( (int)v32 > 8 )
        LODWORD(v32) = 8;
      LODWORD(v41) = v32;
      v33 = HIDWORD(*(_QWORD *)(v31 + 56));
      if ( *(int *)(v31 + 60) > 8 )
        v33 = 8;
      HIDWORD(v41) = v33;
      *(_QWORD *)(v31 + 56) = v41;
      DEC_SHARE_REF_CNT(v31);
      goto LABEL_49;
    }
    return 0LL;
  }
LABEL_49:
  if ( a2 == 1 )
  {
    LOBYTE(v29) = 5;
    v34 = HmgShareLockCheck(v30, v29);
    v35 = *(_QWORD *)(v34 + 128);
    v36 = *(void **)(v35 + 112);
    *(_DWORD *)(v35 + 24) |= 0x4000u;
    memmove(v36, v15, (unsigned int)v26);
    *(_DWORD *)(v35 + 60) = v16;
    DEC_SHARE_REF_CNT(v34);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v39, v30, a6, 0, a2, 0x80u, a5);
  if ( v39[0] )
  {
    v40 = 1;
    *(_DWORD *)(v39[0] + 84LL) = a2;
    v6 = *(_QWORD *)v39[0];
  }
  else
  {
    bDeleteSurface(v30);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v39);
  return v6;
}
