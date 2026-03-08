/*
 * XREFs of xxxDrawState @ 0x1C02423C0
 * Callers:
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 * Callees:
 *     GreGetTextColor @ 0x1C0013F70 (GreGetTextColor.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     GreGetLayout @ 0x1C0111738 (GreGetLayout.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0113D94 (GreSetTextColor.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C0118028 (GreSetBkMode.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C0242064 (BltColor.c)
 *     GreGetHFONT @ 0x1C02AC85C (GreGetHFONT.c)
 *     GreSetViewportOrg @ 0x1C02D2434 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C02D9A84 (GreGetTextAlign.c)
 *     GreGetTextCharacterExtra @ 0x1C02D9AC8 (GreGetTextCharacterExtra.c)
 *     GreSetTextAlign @ 0x1C02D9B10 (GreSetTextAlign.c)
 *     GreSetTextCharacterExtra @ 0x1C02D9BA4 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawState(
        Gre::Base *a1,
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
  HDC v15; // r14
  unsigned int Layout; // eax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // ebx
  __int64 v29; // r9
  HBRUSH v30; // rbx
  BOOL v31; // ebx
  HDC v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  LONG v35; // r9d
  int v36; // eax
  unsigned int v37; // ebx
  int v39; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+50h] [rbp-B0h]
  BOOL v42; // [rsp+54h] [rbp-ACh]
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int128 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A4h] [rbp-5Ch]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  _OWORD v55[2]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v56[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v57; // [rsp+100h] [rbp+0h]

  v48 = a3;
  v44 = a2;
  v49 = 0LL;
  v9 = a8;
  v43 = 0LL;
  v42 = 0;
  v40 = 0;
  TextAlign = 0;
  memset(v55, 0, sizeof(v55));
  v50 = 0LL;
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
  v45 = v14;
  if ( (v12 & 0x80) != 0 )
  {
    v15 = *(HDC *)(gpDispInfo + 72LL);
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
      Bitmap = GreCreateBitmap(v19, v21, 1LL, 1LL, 0LL);
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
    TextAlign = GreGetTextAlign(v15);
    GreGetTextAlign((HDC)a1);
    GreSetTextAlign(v15);
    v26 = *(_QWORD *)(GetDPIServerInfo(v25) + 24);
    if ( GreGetHFONT((HDC)a1) != v26 )
    {
      v27 = GreSelectFontInternal((__int64)a1, v26, 1);
      GreSelectFontInternal((__int64)a1, v27, 1);
      v49 = GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 72LL), v27, 1);
      *(_QWORD *)&v50 = *(_QWORD *)(gpDispInfo + 72LL);
      *((_QWORD *)&v50 + 1) = v49;
      v40 = GrePushThreadGuardedObject(v55, &v50, SelectFont);
    }
    v14 = v45;
  }
  else
  {
    v15 = (HDC)a1;
    GreGetDCPoint(a1, 4LL, &v43);
    GreSetViewportOrg((HDC)a1);
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem((Gre::Base *)v15, v48, v11, v13, 0, v12);
  if ( v40 )
    GrePopThreadGuardedObject(v55);
  v41 = 1;
  if ( !v14 )
  {
    v28 = *(_DWORD *)(gpsi + 4636LL);
    if ( (unsigned int)GreGetTextColor(v15) != v28 )
      v41 = 0;
  }
  if ( (unsigned int)MNGetpItemIndex(*v48, v48[1]) == -1 || (v30 = *(HBRUSH *)(*(_QWORD *)v29 + 96LL)) == 0LL )
  {
    v31 = 0;
  }
  else
  {
    memset_0(v56, 0, 0x68uLL);
    v31 = (unsigned int)GreExtGetObjectW(v30, 104LL, v56) == 104 && v56[23] == 32 && !v57;
    v42 = v31;
  }
  v32 = *(HDC *)(gpDispInfo + 72LL);
  if ( v15 == v32 )
  {
    GreSetBkColor(v32, 0xFFFFFF);
    GreSetTextColor(*(_QWORD *)(gpDispInfo + 72LL), 0LL);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  }
  if ( v45 )
  {
    if ( v49 )
      GreSelectFontInternal((__int64)v15, v49, 1);
    GreSetTextAlign(v15);
    if ( (v12 & 0x10) != 0 )
    {
      v51 = 0LL;
      v52 = v11;
      v53 = v13;
      v54 = *(_QWORD *)(gpsi + 4944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 72LL), 0xFA0089u, (struct _POLYPATBLT *)&v51, 1u, v39);
    }
    if ( (v12 & 0x100) == 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        if ( (v12 & 0x40) != 0 )
        {
          v34 = v44;
          BltColor((HDC)a1, v44, *(_QWORD *)(gpDispInfo + 72LL), a4, a5, v11, v13, 0, 0, 1);
          v35 = a4 + 1;
LABEL_59:
          BltColor((HDC)a1, v34, *(_QWORD *)(gpDispInfo + 72LL), v35, a5, v11, v13, 0, 0, 1);
          GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
          if ( v42 )
          {
            GreGetDCPoint(a1, 4LL, &v43);
            GreSetViewportOrg((HDC)a1);
            v36 = xxxRealDrawMenuItem(a1, v48, v11, v13, 1, v41);
            v37 = v36 & Bitmap;
            GreSetViewportOrg((HDC)a1);
          }
          else
          {
            return (unsigned int)Bitmap;
          }
          return v37;
        }
        v33 = v44;
LABEL_58:
        v44 = v33;
        v35 = a4;
        v34 = v33;
        goto LABEL_59;
      }
      BltColor((HDC)a1, *(_QWORD *)(gpsi + 4856LL), *(_QWORD *)(gpDispInfo + 72LL), a4 + 1, a5 + 1, v11, v13, 0, 0, 1);
    }
    v33 = *(_QWORD *)(gpsi + 4824LL);
    goto LABEL_58;
  }
  if ( v31 )
    xxxRealDrawMenuItem((Gre::Base *)v15, v48, v11, v13, 1, v41);
  GreSetViewportOrg(v15);
  return 1LL;
}
