/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00729C0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00729C0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F5494 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0067530 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C007137C (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00729C0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0072FE8 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0074684 (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C00746C4 (InternalInvalidate3.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     GetAppCompatFlags @ 0x1C0110BC0 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0115A04 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E53C8 (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0234CC8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  struct tagRECT *v5; // r11
  __int64 v6; // r9
  unsigned int v7; // esi
  HRGN v8; // r13
  struct tagWND *v10; // rdi
  int v11; // r12d
  char v12; // r10
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v20; // rbx
  unsigned int v21; // r12d
  __int64 v22; // r14
  _BYTE *v23; // rcx
  HRGN v24; // rdx
  int v25; // ebx
  unsigned int v26; // eax
  HRGN v27; // rcx
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  bool v33; // cf
  __int64 v34; // rax
  struct tagWND *v35; // rcx
  __int64 v36; // r8
  HRGN v37; // rbx
  struct tagWND *v38; // rcx
  struct tagWND *v39; // rbx
  __int64 v40; // rax
  HRGN v41; // r14
  int v42; // eax
  int v43; // eax
  int v44; // esi
  int v45; // r12d
  int v46; // eax
  __int64 Prop; // rax
  __int64 v48; // r14
  __int64 EmptyRgnPublic; // rbx
  unsigned int v50; // [rsp+30h] [rbp-51h]
  unsigned int v51; // [rsp+30h] [rbp-51h]
  HRGN v52; // [rsp+38h] [rbp-49h] BYREF
  HRGN v53; // [rsp+40h] [rbp-41h]
  HRGN v54; // [rsp+48h] [rbp-39h] BYREF
  int v55; // [rsp+50h] [rbp-31h]
  int v56; // [rsp+54h] [rbp-2Dh]
  int v57; // [rsp+58h] [rbp-29h]
  HRGN v58; // [rsp+60h] [rbp-21h]
  struct tagRECT v59; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v60; // [rsp+78h] [rbp-9h] BYREF

  v5 = a4;
  v6 = *((_QWORD *)a1 + 5);
  v7 = a5 | 0x8000;
  v53 = a3;
  v8 = a3;
  v10 = a1;
  if ( !*(_QWORD *)(v6 + 168) )
    v7 = a5;
  v11 = v7 | 0x2000;
  v50 = v7 | 0x2000;
  v59 = *(struct tagRECT *)(v6 + 88);
  if ( (v7 & 1) == 0 )
    goto LABEL_18;
  if ( (((v7 & 0x10000) == 0) & (*(_BYTE *)(v6 + 26) >> 3)) != 0
    && (*(_DWORD *)(v6 + 232) & 2) == 0
    && ((unsigned int)IsTopLevelWindow((__int64)a1) || (v12 & 0x20) == 0) )
  {
    return 1LL;
  }
  *(_DWORD *)(v6 + 232) &= ~2u;
  v13 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 || (*(_BYTE *)(v13 + 26) & 8) != 0 )
  {
    if ( !IsRectEmptyInl(&v59) )
      goto LABEL_13;
  }
  else
  {
    v14 = *((_QWORD *)v10 + 13) == 0LL;
    v60 = *v5;
    if ( !v14 )
      PhysicalToLogicalInPlaceRect(v10, &v60);
    if ( (unsigned int)IntersectRect(&v59, &v59, &v60) )
    {
LABEL_13:
      if ( (unsigned __int64)a2 > 1 )
      {
        v15 = SmartRectInRegion(a2, &v59);
        if ( !v15 )
          return 1LL;
        v16 = v15 - 1;
        if ( v16 )
        {
          v32 = v16 - 1;
          if ( v32 )
          {
            if ( v32 == 1 )
              return 0LL;
          }
          else
          {
            v33 = (GetAppCompatFlags(*((_QWORD *)v10 + 2)) & 0x10000) != 0;
            v34 = 1LL;
            if ( v33 )
              v34 = (__int64)a2;
            a2 = (HRGN)v34;
          }
        }
        else if ( (v7 & 0x8000) != 0 )
        {
          SetRectRgnIndirect(ghrgnInv2, &v59);
          v38 = 0LL;
          v39 = v10;
          do
          {
            v40 = *((_QWORD *)v39 + 5);
            v41 = *(HRGN *)(v40 + 168);
            if ( v41 )
            {
              v52 = *(HRGN *)(v40 + 168);
              if ( v38 )
              {
                v46 = PhysicalToLogicalInPlaceRgn(v38, &v52);
                v41 = v52;
                v45 = v46;
              }
              else
              {
                v45 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, v41, 1LL);
              if ( v45 )
                GreDeleteObject(v41);
            }
            v38 = v39;
            v39 = (struct tagWND *)*((_QWORD *)v39 + 13);
          }
          while ( v39 );
          v42 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
          v8 = v53;
          if ( v42 == 1 )
            return 1LL;
          v11 = v7 | 0x2000;
        }
      }
      goto LABEL_17;
    }
    v31 = *((_QWORD *)v10 + 5);
  }
  if ( (*(_BYTE *)(v31 + 21) & 1) != 0 || a2 != (HRGN)1 )
    return 1LL;
  v7 &= ~0x2000u;
  v11 &= ~0x2000u;
  v50 = v11;
LABEL_17:
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 27LL) & 0x10) != 0 )
  {
    Prop = GetProp((__int64)v10, (unsigned __int16)atomLayer, 1LL);
    v48 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *(_QWORD *)(Prop + 40);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic();
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v59);
      if ( EmptyRgnPublic != 1 )
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      *(_QWORD *)(v48 + 40) = EmptyRgnPublic;
      v30 = GreCombineRgn(v8, v8, ghrgnInv2, 4LL);
      goto LABEL_67;
    }
  }
LABEL_18:
  v17 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v17 + 31) & 2) == 0 )
  {
    InternalInvalidate3(v10);
    v17 = *((_QWORD *)v10 + 5);
  }
  if ( (*(_BYTE *)(v17 + 22) & 0x40) != 0 )
    PixieHack(v10, &v59);
  v18 = *((_QWORD *)v10 + 14);
  if ( !v18 )
    goto LABEL_23;
  v20 = *((_QWORD *)v10 + 5);
  if ( (((v7 & 0x40) == 0) & (unsigned __int8)~(*(_BYTE *)(v20 + 31) >> 5)) == 0
    || (v7 & 0x80u) == 0 && (*(_BYTE *)(v20 + 31) & 2) != 0 )
  {
    goto LABEL_23;
  }
  v21 = v11 | 0x404;
  v22 = 0LL;
  v60 = 0LL;
  if ( (v7 & 1) == 0 )
    v21 = v50;
  if ( !(unsigned int)IntersectRect(&v60, &v59, v20 + 104) && ((*(_BYTE *)(v20 + 21) & 1) != 0 || a2 != (HRGN)1) )
  {
LABEL_23:
    if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
      InternalInvalidate3(v10);
    if ( (v7 & 0x2000) != 0 )
    {
      v28 = (_BYTE *)*((_QWORD *)v10 + 5);
      if ( (v28[24] & 0x20) == 0
        && (v28[26] & 8) == 0
        && (v28[31] & 4) != 0
        && ((v7 & 8) != 0
         || (v29 = *((_QWORD *)v10 + 13)) != 0
         && ((*(_BYTE *)(*(_QWORD *)(v29 + 40) + 31LL) & 2) != 0
          || (GetAppCompatFlags(*((_QWORD *)v10 + 2)) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(ghrgnInv2, &v59);
        if ( (v7 & 0x8000) != 0 )
        {
          v35 = 0LL;
          do
          {
            v36 = *((_QWORD *)v10 + 5);
            v37 = *(HRGN *)(v36 + 168);
            if ( v37 )
            {
              v52 = *(HRGN *)(v36 + 168);
              if ( v35 )
              {
                v43 = LogicalToPhysicalInPlaceRgnWorker(v35, &v52, 0LL);
                v36 = *((_QWORD *)v10 + 5);
                v44 = v43;
                v37 = v52;
              }
              else
              {
                v44 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, *(_QWORD *)(v36 + 168), 1LL);
              if ( v44 )
                GreDeleteObject(v37);
            }
            v35 = v10;
            v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
          }
          while ( v10 );
        }
        v30 = GreCombineRgn(v53, v53, ghrgnInv2, 4LL);
LABEL_67:
        if ( v30 == 1 )
          return 0LL;
      }
    }
    return 1LL;
  }
  while ( 1 )
  {
    v23 = *(_BYTE **)(v18 + 40);
    if ( (v23[31] & 0x10) == 0 )
      goto LABEL_34;
    if ( (v23[27] & 0x20) != 0 || (v23[26] & 8) != 0 )
    {
      v51 = 1;
      if ( v22 || (v22 = CreateEmptyRgnPublic()) != 0 )
      {
        v24 = v53;
        if ( a2 != (HRGN)1 )
          v24 = a2;
        GreCombineRgn(v22, v24, 0LL, 5LL);
      }
    }
    else
    {
      v51 = 0;
    }
    v54 = v53;
    v52 = a2;
    v56 = PhysicalToLogicalInPlaceRect(v18, &v60);
    v25 = PhysicalToLogicalInPlaceRgn(v18, &v52);
    v55 = PhysicalToLogicalInPlaceRgn(v18, &v54);
    v58 = v54;
    v57 = InternalInvalidate2((struct tagWND *)v18, v52, v54, &v60, v21);
    if ( v25 )
      GreDeleteObject(v52);
    if ( v55 )
    {
      if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v18, &v54, 0LL) )
      {
        GreCombineRgn(v53, v54, 0LL, 5LL);
        GreDeleteObject(v54);
      }
      GreDeleteObject(v58);
    }
    if ( v56 )
      LogicalToPhysicalInPlaceRect(v18, &v60);
    v26 = v51;
    if ( v51 && v22 )
    {
      v27 = v53;
      if ( a2 != (HRGN)1 )
        v27 = a2;
      GreCombineRgn(v27, v22, 0LL, 5LL);
      v26 = v51;
    }
    if ( v57 || v26 )
      goto LABEL_34;
    if ( (v7 & 0x12) == 0 )
      break;
    v7 &= 0xFFFFF3D2;
    v21 &= 0xFFFFD3D2;
LABEL_34:
    v18 = *(_QWORD *)(v18 + 88);
    if ( !v18 )
    {
      if ( v22 )
        GreDeleteObject(v22);
      goto LABEL_23;
    }
  }
  if ( v22 )
    GreDeleteObject(v22);
  return 0LL;
}
