/*
 * XREFs of xxxDrawState @ 0x1C0250D44
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00447AC (xxxDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     GrePolyPatBlt @ 0x1C0045794 (GrePolyPatBlt.c)
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045F3C (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C0045FB4 (GreGetLayout.c)
 *     MNGetpItemIndex @ 0x1C0048370 (MNGetpItemIndex.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     GreSetViewportOrg @ 0x1C010C7B8 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C0124540 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C01257C8 (GreGetTextAlign.c)
 *     GreGetTextColor @ 0x1C015840C (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C0250BFC (BltColor.c)
 *     GreGetHFONT @ 0x1C029FAC4 (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C02BCA08 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BCA50 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawState(
        XLATEOBJ *a1,
        __int64 a2,
        __int64 *a3,
        LONG a4,
        LONG a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v9; // ecx
  int v11; // edi
  int v12; // r15d
  int v13; // esi
  int v14; // ebx
  XLATEOBJ *v15; // r14
  unsigned int Layout; // eax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // ebx
  __int64 v29; // r9
  HSURF v30; // rbx
  BOOL v31; // ebx
  HDC v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  LONG v35; // r9d
  int v36; // eax
  unsigned int v37; // ebx
  int v39; // [rsp+50h] [rbp-B0h]
  BOOL v40; // [rsp+50h] [rbp-B0h]
  BOOL v41; // [rsp+54h] [rbp-ACh]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  int v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A4h] [rbp-5Ch]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  _OWORD v54[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v55[28]; // [rsp+D0h] [rbp-30h] BYREF

  v47 = a3;
  v43 = a2;
  v48 = 0LL;
  v9 = a8;
  v42 = 0LL;
  v41 = 0;
  v39 = 0;
  TextAlign = 0;
  memset(v54, 0, sizeof(v54));
  v49 = 0LL;
  if ( (a8 & 0x20) != 0 && (*(_WORD *)(gpsi + 6996LL) == 1 || *(_DWORD *)(gpsi + 2188LL)) )
    v9 = a8 & 0xFFFFFFCF | 0x10;
  v11 = a6;
  v12 = v9 | 0x80;
  if ( (v9 & 0x170) == 0 )
    v12 = v9;
  if ( !a6 )
    return 1LL;
  v13 = a7;
  if ( !a7 )
    return 1LL;
  v14 = v12 & 0x80;
  v44 = v14;
  if ( (v12 & 0x80) != 0 )
  {
    v15 = *(XLATEOBJ **)(gpDispInfo + 72LL);
    GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout((HDC)a1);
    if ( Layout != -1 )
      GreSetLayout(v15, a6, Layout);
    v17 = gpDispInfo;
    v18 = a6 + 1;
    v19 = *(unsigned int *)(gpDispInfo + 88LL);
    if ( (int)v19 < (int)(a6 + 1) || *(_DWORD *)(gpDispInfo + 92LL) < a7 )
    {
      v20 = *(_DWORD *)(gpDispInfo + 92LL);
      v21 = (unsigned int)a7;
      if ( v20 > a7 )
        v21 = (unsigned int)v20;
      if ( (int)v19 <= v18 )
        v19 = (unsigned int)v18;
      Bitmap = GreCreateBitmap(v19, v21, 1LL);
      if ( Bitmap )
      {
        v22 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), Bitmap);
        GreDeleteObject(v22);
        GreSetBitmapOwner(Bitmap, 0LL);
        v17 = gpDispInfo;
        v23 = *(_DWORD *)(gpDispInfo + 88LL);
        if ( v23 <= v18 )
          v23 = a6 + 1;
        *(_DWORD *)(gpDispInfo + 88LL) = v23;
        v24 = a7;
        if ( *(_DWORD *)(gpDispInfo + 92LL) > a7 )
          v24 = *(_DWORD *)(gpDispInfo + 92LL);
        *(_DWORD *)(gpDispInfo + 92LL) = v24;
      }
      else
      {
        v17 = gpDispInfo;
        v13 = *(_DWORD *)(gpDispInfo + 92LL);
        v11 = *(_DWORD *)(gpDispInfo + 88LL) - 1;
      }
    }
    NtGdiPatBlt(
      *(HDC *)(*(_QWORD *)v17 + 72LL),
      0,
      0,
      *(_DWORD *)(*(_QWORD *)v17 + 88LL),
      *(_DWORD *)(*(_QWORD *)v17 + 92LL),
      16711778);
    GreGetTextCharacterExtra((HDC)a1);
    GreSetTextCharacterExtra(*(HDC *)(gpDispInfo + 72LL));
    TextAlign = GreGetTextAlign((HDC)v15);
    v25 = GreGetTextAlign((HDC)a1);
    GreSetTextAlign((HDC)v15, TextAlign ^ ((unsigned __int16)TextAlign ^ v25) & 0x106);
    v27 = *(_QWORD *)(GetDPIServerInfo(v26) + 24);
    if ( GreGetHFONT((HDC)a1) != v27 )
    {
      GreSelectFont((HDC)a1);
      GreSelectFont((HDC)a1);
      v48 = GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
      *(_QWORD *)&v49 = *(_QWORD *)(gpDispInfo + 72LL);
      *((_QWORD *)&v49 + 1) = v48;
      v39 = GrePushThreadGuardedObject(v54, &v49, SelectFont);
    }
    v14 = v44;
  }
  else
  {
    v15 = a1;
    GreGetDCPoint(a1, 4LL, &v42);
    GreSetViewportOrg((HDC)a1, a4 + v42, a5 + HIDWORD(v42));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v15, v47, v11, v13, 0, v12);
  if ( v39 )
    GrePopThreadGuardedObject(v54);
  v40 = 1;
  if ( !v14 )
  {
    v28 = *(_DWORD *)(gpsi + 4636LL);
    if ( (unsigned int)GreGetTextColor((HDC)v15) != v28 )
      v40 = 0;
  }
  if ( (unsigned int)MNGetpItemIndex(*v47, v47[1]) == -1 || (v30 = *(HSURF *)(*(_QWORD *)v29 + 96LL)) == 0LL )
  {
    v31 = 0;
  }
  else
  {
    memset(v55, 0, 0x68uLL);
    v31 = (unsigned int)GreExtGetObjectW(v30, 104LL, (char *)v55) == 104 && HIWORD(v55[11]) == 32 && !v55[12];
    v41 = v31;
  }
  v32 = *(HDC *)(gpDispInfo + 72LL);
  if ( v15 == (XLATEOBJ *)v32 )
  {
    GreSetBkColor(v32, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  }
  if ( v44 )
  {
    if ( v48 )
      GreSelectFont((HDC)v15);
    GreSetTextAlign((HDC)v15, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v50 = 0LL;
      v51 = v11;
      v52 = v13;
      v53 = *(_QWORD *)(gpsi + 4944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 72LL), 0xFA0089u, (struct _POLYPATBLT *)&v50, 1u);
    }
    if ( (v12 & 0x100) == 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        if ( (v12 & 0x40) != 0 )
        {
          v34 = v43;
          BltColor((HDC)a1, v43, *(HDC *)(gpDispInfo + 72LL), a4, a5, v11, v13, 0, 0, 1);
          v35 = a4 + 1;
LABEL_59:
          BltColor((HDC)a1, v34, *(HDC *)(gpDispInfo + 72LL), v35, a5, v11, v13, 0, 0, 1);
          GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
          if ( v41 )
          {
            GreGetDCPoint(a1, 4LL, &v42);
            GreSetViewportOrg((HDC)a1, a4 + v42, a5 + HIDWORD(v42));
            v36 = xxxRealDrawMenuItem(a1, v47, v11, v13, 1, v40);
            v37 = v36 & Bitmap;
            GreSetViewportOrg((HDC)a1, v42, SHIDWORD(v42));
          }
          else
          {
            return (unsigned int)Bitmap;
          }
          return v37;
        }
        v33 = v43;
LABEL_58:
        v43 = v33;
        v35 = a4;
        v34 = v33;
        goto LABEL_59;
      }
      BltColor((HDC)a1, *(_QWORD *)(gpsi + 4856LL), *(HDC *)(gpDispInfo + 72LL), a4 + 1, a5 + 1, v11, v13, 0, 0, 1);
    }
    v33 = *(_QWORD *)(gpsi + 4824LL);
    goto LABEL_58;
  }
  if ( v31 )
    xxxRealDrawMenuItem(v15, v47, v11, v13, 1, v40);
  GreSetViewportOrg((HDC)v15, v42, SHIDWORD(v42));
  return 1LL;
}
