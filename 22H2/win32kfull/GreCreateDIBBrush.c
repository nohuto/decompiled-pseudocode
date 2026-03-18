/*
 * XREFs of GreCreateDIBBrush @ 0x1C02D0F20
 * Callers:
 *     GreExtCreatePen @ 0x1C00AED64 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C02D12C0 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C02D0E74 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateDIBitmapReal @ 0x1C02DE52C (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rdi
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // eax
  char *v13; // rbx
  int v14; // ecx
  unsigned int v15; // esi
  __int64 v16; // r10
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned __int64 v25; // r12
  unsigned int v26; // ecx
  HSURF DIBitmapReal; // rax
  HSURF v28; // r15
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rbx
  void *v32; // rcx
  ULONG v34; // ecx
  void *Src; // [rsp+78h] [rbp-49h]
  _BYTE v36[32]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-21h]
  _QWORD v38[6]; // [rsp+A8h] [rbp-19h] BYREF
  int v39; // [rsp+D8h] [rbp+17h]
  __int64 v40; // [rsp+118h] [rbp+57h]

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
  v15 = a1[8];
  v16 = 4LL;
  Src = v13;
  switch ( v12 )
  {
    case 3u:
      v15 = 3;
      v17 = 0;
      if ( a2 != 1 )
        v17 = a2;
      a2 = v17;
      if ( ((v14 - 16) & 0xFFFFFFEF) != 0 )
        return 0LL;
      break;
    case 0u:
      v18 = v14 - 1;
      if ( v18 )
      {
        v19 = v18 - 3;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            v21 = v20 - 8;
            if ( v21 )
            {
              v22 = v21 - 8;
              if ( v22 )
              {
                if ( v22 != 8 )
                  return 0LL;
              }
            }
            v23 = 0;
            v24 = 0;
            if ( a2 != 1 )
              v23 = a2;
            a2 = v23;
            goto LABEL_25;
          }
          v24 = 256;
        }
        else
        {
          v24 = 16;
        }
      }
      else
      {
        v24 = 2;
      }
      if ( v15 && v24 >= v15 )
        break;
LABEL_25:
      v15 = v24;
      break;
    case 2u:
      if ( v14 != 4 )
        return 0LL;
      if ( !v15 )
        v15 = 16;
      break;
    default:
      if ( v12 != 1 || v14 != 8 )
        return 0LL;
      if ( !v15 )
        v15 = 256;
      break;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v16 = 0LL;
    v11 = v16;
  }
  v25 = v11 * v15;
  if ( v25 > 0xFFFFFFFF || (int)v25 + 3 < (unsigned int)v25 )
  {
    v34 = 534;
LABEL_62:
    EngSetLastError(v34);
    return 0LL;
  }
  v26 = (v25 + 3) & 0xFFFFFFFC;
  if ( v26 > a3 - (unsigned int)v10 )
  {
LABEL_61:
    v34 = 87;
    goto LABEL_62;
  }
  DIBitmapReal = (HSURF)GreCreateDIBitmapReal(
                          0,
                          6,
                          v26 + (unsigned int)v13,
                          (_DWORD)a1,
                          a2 != 0 ? 3 : 0,
                          a3,
                          a3 + (_DWORD)a1 - (v26 + (_DWORD)v13),
                          0LL,
                          0,
                          0LL,
                          1,
                          0LL,
                          0LL);
  v28 = DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    SURFREF::SURFREF((SURFREF *)v36, DIBitmapReal);
    if ( !v37 )
    {
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v36);
      return 0LL;
    }
    v29 = *(_QWORD *)(v37 + 56);
    if ( (int)v29 > 8 )
      LODWORD(v29) = 8;
    LODWORD(v40) = v29;
    v30 = HIDWORD(v29);
    if ( *(int *)(v37 + 60) > 8 )
      v30 = 8;
    HIDWORD(v40) = v30;
    *(_QWORD *)(v37 + 56) = v40;
    if ( v37 )
      DEC_SHARE_REF_CNT(v37);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v36);
  }
  if ( a2 == 1 )
  {
    SURFREF::SURFREF((SURFREF *)v36, v28);
    v31 = *(_QWORD *)(v37 + 128);
    v32 = *(void **)(v31 + 112);
    *(_DWORD *)(v31 + 24) |= 0x4000u;
    memmove(v32, Src, (unsigned int)v25);
    *(_DWORD *)(v31 + 60) = v15;
    if ( v37 )
      DEC_SHARE_REF_CNT(v37);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v36);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v38, (HBITMAP)v28, a6, 0, a2, 0x80u, a5);
  if ( v38[0] )
  {
    v39 = 1;
    *(_DWORD *)(v38[0] + 84LL) = a2;
    v6 = *(_QWORD *)v38[0];
  }
  else
  {
    bDeleteSurface(v28);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v38);
  return v6;
}
