/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C010220C (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRect @ 0x1C0016144 (LogicalToPhysicalInPlaceRect.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C0050388 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0052AEC (PhysicalToLogicalInPlaceRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C005460C (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00DB9C4 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     GetAppCompatFlags @ 0x1C00DBDF0 (GetAppCompatFlags.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0217CA8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall InternalInvalidate2(
        struct tagWND *a1,
        unsigned __int64 a2,
        HRGN a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  unsigned int v5; // r14d
  HRGN v6; // r12
  unsigned __int64 v7; // r15
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  int v10; // r13d
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  int v19; // eax
  struct tagWND *v20; // rbx
  __int64 v21; // rdi
  int v23; // eax
  __int64 v24; // rcx
  struct tagWND *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rdi
  unsigned __int8 v28; // dl
  __int64 v29; // r12
  _BYTE *v30; // rcx
  HRGN v31; // rdi
  int v32; // r12d
  int v33; // edi
  int v34; // r15d
  int v35; // eax
  HRGN v36; // r15
  __int64 v37; // rcx
  _BYTE *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  struct tagWND *v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdi
  int v45; // ebx
  int v46; // eax
  __int64 v47; // r12
  int v48; // ebx
  __int64 Prop; // rax
  __int64 v50; // rdi
  __int64 EmptyRgnPublic; // rbx
  unsigned int v52; // [rsp+30h] [rbp-61h]
  int v53; // [rsp+34h] [rbp-5Dh]
  __int64 v54; // [rsp+38h] [rbp-59h]
  __int64 v56; // [rsp+48h] [rbp-49h] BYREF
  HRGN v57; // [rsp+50h] [rbp-41h] BYREF
  HRGN v58; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v59; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT v60; // [rsp+70h] [rbp-21h] BYREF
  struct tagRECT v61; // [rsp+80h] [rbp-11h] BYREF

  v5 = a5 | 0x8000;
  v60 = 0LL;
  v6 = a3;
  v54 = a2;
  v7 = a2;
  v8 = a1;
  v9 = *((_QWORD *)a1 + 5);
  if ( !*(_QWORD *)(v9 + 168) )
    v5 = a5;
  v10 = 0;
  v11 = v5 | 0x2000;
  v52 = v5 | 0x2000;
  v60 = *(struct tagRECT *)(v9 + 88);
  if ( (v5 & 1) == 0 )
    goto LABEL_29;
  if ( ((*(_BYTE *)(v9 + 26) >> 3) & ((v5 & 0x10000) == 0)) != 0 && (*((_DWORD *)a1 + 80) & 0x4000) == 0 )
  {
    v12 = *((_QWORD *)a1 + 13);
    if ( v12 )
    {
      v13 = *((_QWORD *)v8 + 3);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          if ( v12 == *(_QWORD *)(v14 + 24) )
            return 1LL;
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 232) & 2) == 0 )
      return 1LL;
  }
  *((_DWORD *)v8 + 80) &= ~0x4000u;
  if ( (*(_BYTE *)(v9 + 27) & 0x20) != 0 || (*(_BYTE *)(v9 + 26) & 8) != 0 )
  {
    if ( v60.left < v60.right && v60.top < v60.bottom )
      goto LABEL_27;
  }
  else
  {
    v59 = *a4;
    if ( *((_QWORD *)v8 + 13) )
    {
      PhysicalToLogicalInPlaceRect(v8, &v59);
      v11 = v5 | 0x2000;
    }
    left = v60.left;
    right = v60.right;
    if ( v60.left <= v59.left )
      left = v59.left;
    v60.left = left;
    if ( v60.right >= v59.right )
      right = v59.right;
    v60.right = right;
    if ( left >= right )
      goto LABEL_100;
    top = v60.top;
    bottom = v60.bottom;
    if ( v60.top <= v59.top )
      top = v59.top;
    v60.top = top;
    if ( v60.bottom >= v59.bottom )
      bottom = v59.bottom;
    v60.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_100:
      v19 = 1;
      v60 = 0LL;
    }
    else
    {
      v19 = 0;
    }
    if ( !v19 )
    {
LABEL_27:
      if ( v7 > 1 )
      {
        v23 = SmartRectInRegion((HRGN)v7, &v60);
        if ( v23 == 1 )
        {
          if ( (v5 & 0x8000) != 0 )
          {
            SetRectRgnIndirect(ghrgnInv2, &v60);
            v24 = 0LL;
            v25 = v8;
            do
            {
              v26 = *(_QWORD *)(*((_QWORD *)v25 + 5) + 168LL);
              v56 = v26;
              if ( v26 )
              {
                if ( v24 )
                {
                  v46 = PhysicalToLogicalInPlaceRgn(v24, (__int64)&v56);
                  v47 = v56;
                  v48 = v46;
                  GreCombineRgn(ghrgnInv2, ghrgnInv2, v56, 1LL);
                  if ( v48 )
                    GreDeleteObject(v47);
                }
                else
                {
                  GreCombineRgn(ghrgnInv2, ghrgnInv2, v26, 1LL);
                }
              }
              v24 = (__int64)v25;
              v25 = (struct tagWND *)*((_QWORD *)v25 + 13);
            }
            while ( v25 );
            if ( (unsigned int)GreCombineRgn(ghrgnInv2, ghrgnInv2, v7, 1LL) == 1 )
              return 1LL;
            v6 = a3;
          }
        }
        else
        {
          if ( !v23 )
            return 1LL;
          v40 = v23 - 2;
          if ( v40 )
          {
            if ( v40 == 1 )
              return 0LL;
          }
          else if ( (GetAppCompatFlags(*((_QWORD *)v8 + 2)) & 0x10000) == 0 )
          {
            v7 = 1LL;
            v54 = 1LL;
          }
        }
      }
      goto LABEL_28;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 21LL) & 1) != 0 || v7 != 1 )
    return 1LL;
  v5 &= ~0x2000u;
  v52 = v11 & 0xFFFFDFFF;
LABEL_28:
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 27LL) & 0x10) != 0 )
  {
    Prop = GetProp((__int64)v8, (unsigned __int16)atomLayer, 1u);
    v50 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *(_QWORD *)(Prop + 40);
      if ( EmptyRgnPublic || (EmptyRgnPublic = CreateEmptyRgnPublic()) != 0 )
      {
        SetRectRgnIndirect(ghrgnInv2, &v60);
        if ( EmptyRgnPublic != 1 )
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      }
      else
      {
        EmptyRgnPublic = 1LL;
        SetRectRgnIndirect(ghrgnInv2, &v60);
      }
      *(_QWORD *)(v50 + 40) = EmptyRgnPublic;
      return (unsigned int)GreCombineRgn(v6, v6, ghrgnInv2, 4LL) != 1;
    }
  }
LABEL_29:
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 2) == 0 )
    InternalInvalidate3(v8, v7, v5, a4);
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 22LL) & 0x40) != 0 )
    PixieHack(v8, &v60);
  v20 = (struct tagWND *)*((_QWORD *)v8 + 14);
  if ( !v20 )
    goto LABEL_34;
  v27 = *((_QWORD *)v8 + 5);
  v28 = *(_BYTE *)(v27 + 31);
  if ( (((v5 & 0x40) == 0) & (unsigned __int8)~(v28 >> 5)) == 0 || (v5 & 0x80u) == 0 && (v28 & 2) != 0 )
    goto LABEL_34;
  v56 = 0LL;
  v29 = 0LL;
  v61 = 0LL;
  if ( (v5 & 1) != 0 )
    v52 |= 0x404u;
  if ( !(unsigned int)IntersectRect(&v61, &v60, v27 + 104) && ((*(_BYTE *)(v27 + 21) & 1) != 0 || v7 != 1) )
  {
LABEL_34:
    v21 = v54;
LABEL_35:
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 2) != 0 )
      InternalInvalidate3(v8, v21, v5, a4);
    if ( (v5 & 0x2000) != 0 )
    {
      v38 = (_BYTE *)*((_QWORD *)v8 + 5);
      if ( (v38[24] & 0x20) == 0
        && (v38[26] & 8) == 0
        && (v38[31] & 4) != 0
        && ((v5 & 8) != 0
         || (v39 = *((_QWORD *)v8 + 13)) != 0
         && ((*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 2) != 0
          || (GetAppCompatFlags(*((_QWORD *)v8 + 2)) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(ghrgnInv2, &v60);
        if ( (v5 & 0x8000) != 0 )
        {
          v41 = 0LL;
          do
          {
            v42 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 168LL);
            v56 = v42;
            if ( v42 )
            {
              if ( v41 )
              {
                v43 = LogicalToPhysicalInPlaceRgnWorker(v41, &v56, 0LL);
                v44 = v56;
                v45 = v43;
                GreCombineRgn(ghrgnInv2, ghrgnInv2, v56, 1LL);
                if ( v45 )
                  GreDeleteObject(v44);
              }
              else
              {
                GreCombineRgn(ghrgnInv2, ghrgnInv2, v42, 1LL);
              }
            }
            v41 = v8;
            v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
          }
          while ( v8 );
        }
        return (unsigned int)GreCombineRgn(a3, a3, ghrgnInv2, 4LL) != 1;
      }
    }
    return 1LL;
  }
  while ( 1 )
  {
    v30 = (_BYTE *)*((_QWORD *)v20 + 5);
    if ( (v30[31] & 0x10) == 0 )
    {
      v21 = v54;
      goto LABEL_53;
    }
    if ( (v30[27] & 0x20) == 0 && (v30[26] & 8) == 0 )
      goto LABEL_59;
    v10 = 1;
    if ( !v29 )
    {
      v56 = CreateEmptyRgnPublic();
      v29 = v56;
      if ( !v56 )
        goto LABEL_59;
    }
    if ( v7 != 1 )
    {
      GreCombineRgn(v29, v7, 0LL, 5LL);
LABEL_59:
      v31 = a3;
      goto LABEL_60;
    }
    v31 = a3;
    GreCombineRgn(v29, a3, 0LL, 5LL);
LABEL_60:
    v58 = (HRGN)v7;
    v57 = v31;
    v32 = PhysicalToLogicalInPlaceRect(v20, &v61);
    v33 = PhysicalToLogicalInPlaceRgn((__int64)v20, (__int64)&v58);
    v34 = PhysicalToLogicalInPlaceRgn((__int64)v20, (__int64)&v57);
    *(_QWORD *)&v59.left = v57;
    v35 = InternalInvalidate2(v20, v58, v57, &v61, v52);
    v53 = v35;
    if ( v33 )
    {
      GreDeleteObject(v58);
      v35 = v53;
    }
    if ( v34 )
    {
      v36 = a3;
      if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v20, &v57, 0LL) )
      {
        GreCombineRgn(a3, v57, 0LL, 5LL);
        GreDeleteObject(v57);
      }
      GreDeleteObject(*(_QWORD *)&v59.left);
      v35 = v53;
    }
    else
    {
      v36 = a3;
    }
    if ( v32 )
    {
      LogicalToPhysicalInPlaceRect((__int64)v20, (__int64)&v61);
      v35 = v53;
    }
    v29 = v56;
    v21 = v54;
    if ( v10 && v56 )
    {
      if ( v54 == 1 )
        v37 = (__int64)v36;
      else
        v37 = v54;
      GreCombineRgn(v37, v56, 0LL, 5LL);
      v35 = v53;
    }
    if ( v35 || v10 )
      goto LABEL_72;
    if ( (v5 & 0x12) == 0 )
      break;
    v5 &= 0xFFFFF3D2;
    v52 &= 0xFFFFD3D2;
LABEL_72:
    v10 = 0;
LABEL_53:
    v20 = (struct tagWND *)*((_QWORD *)v20 + 11);
    if ( !v20 )
    {
      if ( v29 )
        GreDeleteObject(v29);
      goto LABEL_35;
    }
    v7 = v54;
  }
  if ( v29 )
    GreDeleteObject(v29);
  return 0LL;
}
