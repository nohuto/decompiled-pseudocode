/*
 * XREFs of GreCreateDIBBrush @ 0x1C015D448
 * Callers:
 *     GreExtCreatePen @ 0x1C00262A0 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C015D340 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C015D778 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rdi
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // eax
  char *v13; // rbx
  int v14; // ecx
  const void *v15; // r13
  unsigned int v16; // esi
  __int64 v17; // r10
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  HSURF DIBitmapReal; // rax
  HSURF v29; // r15
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rbx
  void *v33; // rcx
  __int64 v34; // rdx
  ULONG v36; // ecx
  _BYTE v37[32]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v38; // [rsp+98h] [rbp-19h]
  _QWORD v39[6]; // [rsp+A0h] [rbp-11h] BYREF
  int v40; // [rsp+D0h] [rbp+1Fh]
  __int64 v41; // [rsp+108h] [rbp+57h]

  v6 = 0LL;
  if ( !a1 )
    goto LABEL_61;
  if ( a3 < 0x28 )
    goto LABEL_61;
  v10 = *a1;
  if ( (unsigned int)v10 > a3 )
    goto LABEL_61;
  v11 = 2LL;
  if ( a2 > 2 )
    goto LABEL_61;
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
    v36 = 534;
LABEL_62:
    EngSetLastError(v36);
    return 0LL;
  }
  v27 = (v26 + 3) & 0xFFFFFFFC;
  if ( v27 > a3 - (unsigned int)v10 )
  {
LABEL_61:
    v36 = 87;
    goto LABEL_62;
  }
  DIBitmapReal = (HSURF)GreCreateDIBitmapReal(
                          0LL,
                          6,
                          &v13[v27],
                          a1,
                          a2 != 0 ? 3 : 0,
                          a3,
                          a3 + (_DWORD)a1 - (v27 + (_DWORD)v13),
                          0LL,
                          0,
                          0LL,
                          1,
                          0LL,
                          0LL);
  v29 = DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    SURFREF::SURFREF((SURFREF *)v37, DIBitmapReal);
    if ( !v38 )
    {
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
      return 0LL;
    }
    v30 = *(_QWORD *)(v38 + 56);
    if ( (int)v30 > 8 )
      LODWORD(v30) = 8;
    LODWORD(v41) = v30;
    v31 = HIDWORD(v30);
    if ( *(int *)(v38 + 60) > 8 )
      v31 = 8;
    HIDWORD(v41) = v31;
    *(_QWORD *)(v38 + 56) = v41;
    if ( v38 )
      DEC_SHARE_REF_CNT(v38, 8LL);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
  }
  if ( a2 == 1 )
  {
    SURFREF::SURFREF((SURFREF *)v37, v29);
    v32 = *(_QWORD *)(v38 + 128);
    v33 = *(void **)(v32 + 112);
    *(_DWORD *)(v32 + 24) |= 0x4000u;
    memmove(v33, v15, 2 * v16);
    *(_DWORD *)(v32 + 60) = v16;
    if ( v38 )
      DEC_SHARE_REF_CNT(v38, v34);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v39, (HBITMAP)v29, a6, 0, a2, 0x80u, a5);
  if ( v39[0] )
  {
    v40 = 1;
    *(_DWORD *)(v39[0] + 84LL) = a2;
    v6 = *(_QWORD *)v39[0];
  }
  else
  {
    bDeleteSurface(v29);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v39);
  return v6;
}
