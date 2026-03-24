/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C00962A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00965B8 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00968A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  _BOOL8 v10; // rdi
  struct _STROBJ *v11; // rbx
  unsigned int v14; // r12d
  FLONG flFontType; // ecx
  ULONG cGlyphs; // esi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v18; // r14
  PVOID *p_pvScan0; // rsi
  USHORT *p_iType; // rbx
  PVOID *v21; // rdi
  int hsurf; // eax
  CLIPOBJ *v23; // r13
  struct _RECTL *v24; // rax
  struct _POINTL v25; // rbx
  LONG y; // esi
  int v27; // ecx
  struct _STROBJ *v28; // rdx
  LONG v29; // esi
  int v30; // r14d
  LONG v31; // ebx
  int v32; // eax
  HDEV hdev; // rax
  bool v35; // zf
  __int64 ThreadWin32Thread; // rax
  int x; // r10d
  int pwszOrg; // ecx
  int v39; // r11d
  __int64 v40; // rax
  ULONG v41; // r8d
  _DWORD *v42; // r9
  _DWORD *v43; // rcx
  ULONG v44; // ecx
  _DWORD *v45; // rax
  struct _STROBJ *v46; // rdx
  int v47; // r10d
  int v48; // ecx
  int v49; // r11d
  __int64 v50; // rax
  ULONG v51; // r8d
  _DWORD *v52; // r9
  _DWORD *v53; // rcx
  ULONG v54; // ecx
  _DWORD *v55; // rax
  BOOL (__stdcall *v56)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v57; // [rsp+68h] [rbp-98h]
  struct _SURFOBJ *v58; // [rsp+70h] [rbp-90h] BYREF
  struct _STROBJ *v59; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  ULONG v63; // [rsp+98h] [rbp-68h]
  struct _POINTL v64; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v65; // [rsp+A8h] [rbp-58h]
  struct _BRUSHOBJ *v66; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v67; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v68; // [rsp+C0h] [rbp-40h]
  struct _FONTOBJ *v69; // [rsp+C8h] [rbp-38h]
  __int128 v70; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v71[912]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = 0LL;
  v58 = a1;
  v11 = a2;
  v59 = a2;
  v69 = a3;
  v14 = 1;
  v68 = a5;
  v67 = a7;
  v66 = a8;
  v65 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  v61 = 0LL;
  v62 = 0LL;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
    {
      v35 = ((_DWORD)hdev[532] & 0x4000) == 0;
      v62 = 0LL;
      if ( v35 )
      {
        v10 = 1LL;
        v62 = 1LL;
      }
    }
    else
    {
      v10 = ((_DWORD)hdev[456] & 0x1000000) == 0;
      v62 = v10;
    }
  }
  cGlyphs = v11[1].cGlyphs;
  v63 = cGlyphs;
  p_rclBkGround = a6;
  if ( !a6 )
    p_rclBkGround = &v11->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v71, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v71, &v58, &v61, &ppco) )
  {
    do
    {
      v18 = v58;
      v11[1].cGlyphs = cGlyphs;
      p_pvScan0 = &v18[-1].pvScan0;
      if ( (HIDWORD(v18[1].hsurf) & 1) == 0 && ((_DWORD)p_pvScan0[14] & 0x800) != 0 && *((_WORD *)p_pvScan0 + 50) == 3 )
      {
        v56 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
        goto LABEL_10;
      }
      if ( v10 )
        goto LABEL_35;
      p_iType = &v18->iType;
      if ( v18->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v18 = v58;
            v56 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_10;
          }
          v18 = v58;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v18) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            v18 = v58;
LABEL_35:
            v56 = EngTextOut;
            goto LABEL_10;
          }
          v18 = v58;
        }
      }
      if ( ((__int64)v18[1].hsurf & 8) == 0 )
        goto LABEL_35;
      v56 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v18->hdev + 167);
LABEL_10:
      v21 = 0LL;
      if ( !v18
        || (hsurf = (int)v18[1].hsurf, (hsurf & 0x80004000) == 0)
        || (hsurf & 0x200) != 0
        || (v21 = p_pvScan0, GreLockDisplayDevice(p_pvScan0[6]), *((_WORD *)p_pvScan0 + 50) != 1)
        || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
      {
        v23 = ppco;
        v24 = a6;
        v25 = v61;
        y = v61.y;
        v57 = a6;
        v70 = 0LL;
        if ( a6 )
        {
          v24 = (struct _RECTL *)&v70;
          v27 = v61.x + a6->left;
          v57 = (struct _RECTL *)&v70;
          LODWORD(v70) = v27;
          DWORD2(v70) = v61.x + a6->right;
          DWORD1(v70) = v61.y + a6->top;
          HIDWORD(v70) = v61.y + a6->bottom;
        }
        if ( v61.x || v61.y )
        {
          v28 = v59;
          x = 16 * v61.x;
          v59->rclBkGround.left += v61.x;
          v28->rclBkGround.right += v25.x;
          v28->rclBkGround.top += y;
          v28->rclBkGround.bottom += y;
          pwszOrg = (int)v28[4].pwszOrg;
          if ( (pwszOrg & 0x100) == 0 )
            x = v25.x;
          v39 = 16 * y;
          v40 = *(_QWORD *)&v28[1].rclBkGround.top;
          if ( ((__int64)v28[4].pwszOrg & 0x100) == 0 )
            v39 = y;
          if ( (pwszOrg & 0x1400) != 0 )
          {
            v41 = v28->cGlyphs;
            v42 = *(_DWORD **)&v28[4].rclBkGround.top;
            if ( v28->cGlyphs )
            {
              v43 = (_DWORD *)(v40 + 20);
              do
              {
                if ( *v42 == HIDWORD(v28[4].pwszOrg) )
                {
                  *(v43 - 1) += x;
                  --v41;
                  *v43 += v39;
                }
                v43 += 6;
                ++v42;
              }
              while ( v41 );
              v24 = v57;
              goto LABEL_18;
            }
          }
          else
          {
            if ( v28->ulCharInc )
            {
              *(_DWORD *)(v40 + 16) += x;
              *(_DWORD *)(v40 + 20) += v39;
              v24 = v57;
              goto LABEL_18;
            }
            v44 = v28->cGlyphs;
            if ( v28->cGlyphs )
            {
              v45 = (_DWORD *)(v40 + 20);
              do
              {
                *(v45 - 1) += x;
                *v45 += v39;
                v45 += 6;
                --v44;
              }
              while ( v44 );
            }
          }
          v24 = v57;
        }
        else
        {
          v28 = v59;
        }
LABEL_18:
        v64 = 0LL;
        if ( v23 && (v25.x || y) )
        {
          v23->rclBounds.left += v25.x;
          v23->rclBounds.right += v25.x;
          v23->rclBounds.top += y;
          v23->rclBounds.bottom += y;
          if ( v23->iDComplexity )
          {
            v64 = v25;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, &v64);
            v24 = v57;
            v28 = v59;
          }
        }
        v29 = -y;
        v30 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v56)(
                v18,
                v28,
                v69,
                v23,
                v68,
                v24,
                v67,
                v66,
                v65,
                a10);
        v31 = -v25.x;
        if ( v31 || v29 )
        {
          v46 = v59;
          v47 = 16 * v31;
          v59->rclBkGround.left += v31;
          v46->rclBkGround.right += v31;
          v46->rclBkGround.top += v29;
          v46->rclBkGround.bottom += v29;
          v48 = (int)v46[4].pwszOrg;
          if ( (v48 & 0x100) == 0 )
            v47 = v31;
          v49 = 16 * v29;
          v50 = *(_QWORD *)&v46[1].rclBkGround.top;
          if ( ((__int64)v46[4].pwszOrg & 0x100) == 0 )
            v49 = v29;
          if ( (v48 & 0x1400) != 0 )
          {
            v51 = v46->cGlyphs;
            v52 = *(_DWORD **)&v46[4].rclBkGround.top;
            if ( v46->cGlyphs )
            {
              v53 = (_DWORD *)(v50 + 20);
              do
              {
                if ( *v52 == HIDWORD(v46[4].pwszOrg) )
                {
                  *(v53 - 1) += v47;
                  --v51;
                  *v53 += v49;
                }
                v53 += 6;
                ++v52;
              }
              while ( v51 );
            }
          }
          else if ( v46->ulCharInc )
          {
            *(_DWORD *)(v50 + 16) += v47;
            *(_DWORD *)(v50 + 20) += v49;
          }
          else
          {
            v54 = v46->cGlyphs;
            if ( v46->cGlyphs )
            {
              v55 = (_DWORD *)(v50 + 20);
              do
              {
                *(v55 - 1) += v47;
                *v55 += v49;
                v55 += 6;
                --v54;
              }
              while ( v54 );
            }
          }
        }
        v56 = 0LL;
        if ( v23 && (v31 || v29) )
        {
          v23->rclBounds.left += v31;
          v23->rclBounds.right += v31;
          v23->rclBounds.top += v29;
          v23->rclBounds.bottom += v29;
          if ( v23->iDComplexity )
          {
            LODWORD(v56) = v31;
            HIDWORD(v56) = v29;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, (struct _POINTL *)&v56);
          }
        }
        v14 &= v30;
        if ( v21 )
          GreUnlockDisplayDevice(v21[6]);
        goto LABEL_28;
      }
      GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_28:
      v32 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v71, &v58, &v61, &ppco);
      v11 = v59;
      v10 = v62;
      cGlyphs = v63;
    }
    while ( v32 );
  }
  return v14;
}
