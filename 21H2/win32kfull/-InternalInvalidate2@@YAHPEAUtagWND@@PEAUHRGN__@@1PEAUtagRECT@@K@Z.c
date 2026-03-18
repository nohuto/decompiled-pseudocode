/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8
 * Callers:
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00C9954 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C00494A4 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004A600 (PhysicalToLogicalInPlaceRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C004C854 (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0100464 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     GetAppCompatFlags @ 0x1C01027E0 (GetAppCompatFlags.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01DFA08 (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C022EA2C (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  __int64 v5; // r10
  unsigned int v6; // esi
  HRGN v7; // r13
  struct tagWND *v9; // rdi
  int v10; // r12d
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  struct tagWND *v15; // r13
  __int64 v17; // rbx
  _BYTE *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // r14
  _BYTE *v23; // rcx
  HRGN v24; // rdx
  int v25; // ebx
  unsigned int v26; // eax
  HRGN v27; // rcx
  int v28; // eax
  bool v29; // cf
  __int64 v30; // rax
  struct tagWND *v31; // rcx
  HRGN v32; // rbx
  int v33; // eax
  int v34; // esi
  __int64 v35; // rcx
  struct tagWND *v36; // rbx
  HRGN v37; // r14
  int v38; // eax
  int v39; // r12d
  int v40; // eax
  __int64 Prop; // rax
  __int64 v42; // r14
  __int64 EmptyRgnPublic; // rbx
  unsigned int v44; // [rsp+30h] [rbp-51h]
  unsigned int v45; // [rsp+30h] [rbp-51h]
  HRGN v46; // [rsp+38h] [rbp-49h] BYREF
  HRGN v47; // [rsp+40h] [rbp-41h]
  HRGN v48; // [rsp+48h] [rbp-39h] BYREF
  int v49; // [rsp+50h] [rbp-31h]
  int v50; // [rsp+54h] [rbp-2Dh]
  int v51; // [rsp+58h] [rbp-29h]
  HRGN v52; // [rsp+60h] [rbp-21h]
  struct tagRECT v53; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v54; // [rsp+78h] [rbp-9h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v6 = a5 | 0x8000;
  v47 = a3;
  v7 = a3;
  v9 = a1;
  if ( !*(_QWORD *)(v5 + 168) )
    v6 = a5;
  v10 = v6 | 0x2000;
  v44 = v6 | 0x2000;
  v53 = *(struct tagRECT *)(v5 + 88);
  if ( (v6 & 1) == 0 )
    goto LABEL_15;
  if ( (((v6 & 0x10000) == 0) & (*(_BYTE *)(v5 + 26) >> 3)) != 0
    && (*((_DWORD *)a1 + 80) & 0x4000) == 0
    && ((unsigned int)IsTopLevelWindow(a1) || (*(_DWORD *)(v5 + 232) & 2) == 0) )
  {
    return 1LL;
  }
  *((_DWORD *)v9 + 80) &= ~0x4000u;
  if ( (*(_BYTE *)(v5 + 27) & 0x20) != 0 || (*(_BYTE *)(v5 + 26) & 8) != 0 )
  {
    if ( !(unsigned int)IsRectEmptyInl(&v53) )
      goto LABEL_10;
  }
  else
  {
    v11 = *((_QWORD *)v9 + 13) == 0LL;
    v54 = *a4;
    if ( !v11 )
      PhysicalToLogicalInPlaceRect(v9, &v54);
    if ( (unsigned int)IntersectRect(&v53, &v53, &v54) )
    {
LABEL_10:
      if ( (unsigned __int64)a2 > 1 )
      {
        v12 = SmartRectInRegion(a2, &v53);
        if ( !v12 )
          return 1LL;
        v13 = v12 - 1;
        if ( v13 )
        {
          v28 = v13 - 1;
          if ( v28 )
          {
            if ( v28 == 1 )
              return 0LL;
          }
          else
          {
            v29 = (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x10000) != 0;
            v30 = 1LL;
            if ( v29 )
              v30 = (__int64)a2;
            a2 = (HRGN)v30;
          }
        }
        else if ( (v6 & 0x8000) != 0 )
        {
          SetRectRgnIndirect(ghrgnInv2, &v53);
          v35 = 0LL;
          v36 = v9;
          do
          {
            v37 = *(HRGN *)(*((_QWORD *)v36 + 5) + 168LL);
            v46 = v37;
            if ( v37 )
            {
              if ( v35 )
              {
                v40 = PhysicalToLogicalInPlaceRgn(v35, (__int64)&v46);
                v37 = v46;
                v39 = v40;
              }
              else
              {
                v39 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, v37, 1LL);
              if ( v39 )
                GreDeleteObject(v37);
            }
            v35 = (__int64)v36;
            v36 = (struct tagWND *)*((_QWORD *)v36 + 13);
          }
          while ( v36 );
          v38 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
          v7 = v47;
          if ( v38 == 1 )
            return 1LL;
          v10 = v6 | 0x2000;
        }
      }
      goto LABEL_14;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 21LL) & 1) != 0 || a2 != (HRGN)1 )
    return 1LL;
  v6 &= ~0x2000u;
  v10 &= ~0x2000u;
  v44 = v10;
LABEL_14:
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 27LL) & 0x10) != 0 )
  {
    Prop = GetProp(v9, (unsigned __int16)atomLayer, 1LL);
    v42 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *(_QWORD *)(Prop + 40);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic();
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v53);
      if ( EmptyRgnPublic != 1 )
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      *(_QWORD *)(v42 + 40) = EmptyRgnPublic;
      v20 = GreCombineRgn(v7, v7, ghrgnInv2, 4LL);
      goto LABEL_41;
    }
  }
LABEL_15:
  v14 = *((_QWORD *)v9 + 5);
  if ( (*(_BYTE *)(v14 + 31) & 2) == 0 )
  {
    InternalInvalidate3(v9);
    v14 = *((_QWORD *)v9 + 5);
  }
  if ( (*(_BYTE *)(v14 + 22) & 0x40) != 0 )
    PixieHack(v9, &v53);
  v15 = (struct tagWND *)*((_QWORD *)v9 + 14);
  if ( !v15 )
    goto LABEL_20;
  v17 = *((_QWORD *)v9 + 5);
  if ( (((v6 & 0x40) == 0) & (unsigned __int8)~(*(_BYTE *)(v17 + 31) >> 5)) == 0
    || (v6 & 0x80u) == 0 && (*(_BYTE *)(v17 + 31) & 2) != 0 )
  {
    goto LABEL_20;
  }
  v21 = v10 | 0x404;
  v22 = 0LL;
  v54 = 0LL;
  if ( (v6 & 1) == 0 )
    v21 = v44;
  if ( !(unsigned int)IntersectRect(&v54, &v53, v17 + 104) && ((*(_BYTE *)(v17 + 21) & 1) != 0 || a2 != (HRGN)1) )
  {
LABEL_20:
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 2) != 0 )
      InternalInvalidate3(v9);
    if ( (v6 & 0x2000) != 0 )
    {
      v18 = (_BYTE *)*((_QWORD *)v9 + 5);
      if ( (v18[24] & 0x20) == 0
        && (v18[26] & 8) == 0
        && (v18[31] & 4) != 0
        && ((v6 & 8) != 0
         || (v19 = *((_QWORD *)v9 + 13)) != 0
         && ((*(_BYTE *)(*(_QWORD *)(v19 + 40) + 31LL) & 2) != 0
          || (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(ghrgnInv2, &v53);
        if ( (v6 & 0x8000) != 0 )
        {
          v31 = 0LL;
          do
          {
            v32 = *(HRGN *)(*((_QWORD *)v9 + 5) + 168LL);
            v46 = v32;
            if ( v32 )
            {
              if ( v31 )
              {
                v33 = LogicalToPhysicalInPlaceRgnWorker(v31, &v46, 0LL);
                v32 = v46;
                v34 = v33;
              }
              else
              {
                v34 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, v32, 1LL);
              if ( v34 )
                GreDeleteObject(v32);
            }
            v31 = v9;
            v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
          }
          while ( v9 );
        }
        v20 = GreCombineRgn(v47, v47, ghrgnInv2, 4LL);
LABEL_41:
        if ( v20 == 1 )
          return 0LL;
      }
    }
    return 1LL;
  }
  while ( 1 )
  {
    v23 = (_BYTE *)*((_QWORD *)v15 + 5);
    if ( (v23[31] & 0x10) == 0 )
      goto LABEL_47;
    if ( (v23[27] & 0x20) != 0 || (v23[26] & 8) != 0 )
    {
      v45 = 1;
      if ( v22 || (v22 = CreateEmptyRgnPublic()) != 0 )
      {
        v24 = v47;
        if ( a2 != (HRGN)1 )
          v24 = a2;
        GreCombineRgn(v22, v24, 0LL, 5LL);
      }
    }
    else
    {
      v45 = 0;
    }
    v48 = v47;
    v46 = a2;
    v50 = PhysicalToLogicalInPlaceRect(v15, &v54);
    v25 = PhysicalToLogicalInPlaceRgn((__int64)v15, (__int64)&v46);
    v49 = PhysicalToLogicalInPlaceRgn((__int64)v15, (__int64)&v48);
    v52 = v48;
    v51 = InternalInvalidate2(v15, v46, v48, &v54, v21);
    if ( v25 )
      GreDeleteObject(v46);
    if ( v49 )
    {
      if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v15, &v48, 0LL) )
      {
        GreCombineRgn(v47, v48, 0LL, 5LL);
        GreDeleteObject(v48);
      }
      GreDeleteObject(v52);
    }
    if ( v50 )
      LogicalToPhysicalInPlaceRect(v15, &v54);
    v26 = v45;
    if ( v45 && v22 )
    {
      v27 = v47;
      if ( a2 != (HRGN)1 )
        v27 = a2;
      GreCombineRgn(v27, v22, 0LL, 5LL);
      v26 = v45;
    }
    if ( v51 || v26 )
      goto LABEL_47;
    if ( (v6 & 0x12) == 0 )
      break;
    v6 &= 0xFFFFF3D2;
    v21 &= 0xFFFFD3D2;
LABEL_47:
    v15 = (struct tagWND *)*((_QWORD *)v15 + 11);
    if ( !v15 )
    {
      if ( v22 )
        GreDeleteObject(v22);
      goto LABEL_20;
    }
  }
  if ( v22 )
    GreDeleteObject(v22);
  return 0LL;
}
