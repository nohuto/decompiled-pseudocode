/*
 * XREFs of GrePtInSprite @ 0x1C0016F2C
 * Callers:
 *     LayerHitTest @ 0x1C0006BE4 (LayerHitTest.c)
 *     DCELayerHitTest @ 0x1C0016E7C (DCELayerHitTest.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0017434 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C006A5FC (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAlphaBlend @ 0x1C00ACD70 (EngAlphaBlend.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BDAE4 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C026EAAC (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C027EDE8 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(HDEV a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // edi
  char v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  int v20; // r15d
  int v21; // r13d
  __int64 v22; // rsi
  struct _SURFOBJ *v23; // rdx
  unsigned int ShapePixel; // eax
  unsigned int v25; // ecx
  RECTL *p_prclSrc; // rcx
  struct _SURFOBJ *v27; // rdx
  HDEV v28; // r14
  RECTL si128; // xmm0
  _DWORD *v30; // rsi
  SURFOBJ *v31; // rdx
  SURFOBJ *v32; // rcx
  int v33; // [rsp+44h] [rbp-85h] BYREF
  HDEV v34; // [rsp+48h] [rbp-81h]
  HWND v35; // [rsp+50h] [rbp-79h]
  _BYTE v36[8]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v37[8]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v38; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-59h] BYREF
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-49h] BYREF
  XLATEOBJ *v41; // [rsp+88h] [rbp-41h]
  XLATEOBJ *v42; // [rsp+90h] [rbp-39h]
  XLATEOBJ *v43; // [rsp+98h] [rbp-31h]
  RECTL prclSrc; // [rsp+A0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+B0h] [rbp-19h] BYREF

  v34 = a1;
  v35 = a2;
  v10 = 0;
  v11 = 1;
  v38 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v10 = GdiPtInSprite(a1, a2, a3, a4);
    goto LABEL_10;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v37, ghsemSprite);
  v33 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v36, ghsemDwmState, 1);
  DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&prclSrc, a2);
  v12 = *(_QWORD *)&prclSrc.left;
  if ( *(_QWORD *)&prclSrc.left )
  {
    v13 = *(_QWORD *)(*(_QWORD *)&prclSrc.left + 168LL);
    v14 = *(_QWORD *)&prclSrc.left + 56LL;
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v10 = PtInRect(v14);
    v18 = *(_DWORD *)(v12 + 72);
    if ( (v18 & 0xFFFFFFFB) == 0
      || v18 == 2 && *(_BYTE *)(v12 + 79) == (_BYTE)v17 && *(_BYTE *)(v12 + 78) > (unsigned __int8)v17
      || !v10 )
    {
      goto LABEL_8;
    }
    v20 = a3 - *v16;
    v21 = a4 - *(_DWORD *)(v12 + 60);
    v22 = *(_QWORD *)(v13 + 184);
    if ( (v18 & 2) != 0 )
    {
      if ( v18 != 3 || *(_BYTE *)(v12 + 79) != (_BYTE)v17 )
        v11 = v17;
      v27 = *(struct _SURFOBJ **)(v13 + 184);
      v39[0] = v17;
      SURFREFVIEW::bMap((SURFREFVIEW *)v39, v27);
      if ( v39[0] && *(_DWORD *)(v22 + 72) == 6 )
      {
        if ( v11
          && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 184), v20, v21, a5) & 0xFFFFFF) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          v28 = v34;
          si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
          v30 = *(_DWORD **)(*((_QWORD *)v34 + 139) + 56LL);
          *v30 = 0;
          v31 = *(SURFOBJ **)(v13 + 184);
          v32 = (SURFOBJ *)*((_QWORD *)v28 + 139);
          prclSrc.right = v20 + 1;
          prclSrc.bottom = v21 + 1;
          pBlendObj = *(BLENDOBJ *)(v12 + 76);
          prclDest = si128;
          prclSrc.left = v20;
          prclSrc.top = v21;
          v41 = xloIdent;
          v42 = xloIdent;
          v43 = xloIdent;
          EngAlphaBlend(v32, v31, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
          if ( !*v30 )
          {
            *v30 = -1;
            EngAlphaBlend(
              *((SURFOBJ **)v28 + 139),
              *(SURFOBJ **)(v13 + 184),
              0LL,
              xloIdent,
              &prclDest,
              &prclSrc,
              &pBlendObj);
            v10 = *v30 != -1;
          }
        }
      }
      else
      {
        v10 = 0;
      }
      p_prclSrc = (RECTL *)v39;
    }
    else
    {
      if ( v18 != 1 )
      {
LABEL_8:
        DEC_SHARE_REF_CNT(v12, v15);
        goto LABEL_9;
      }
      v23 = *(struct _SURFOBJ **)(v13 + 184);
      *(_QWORD *)&prclSrc.left = v17;
      SURFREFVIEW::bMap((SURFREFVIEW *)&prclSrc, v23);
      if ( *(_QWORD *)&prclSrc.left && *(_DWORD *)(v22 + 72) == 6 )
      {
        ShapePixel = crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 184), v20, v21, a5);
        v25 = 0;
        if ( (*(_DWORD *)(v12 + 80) & 0xFFFFFF) != (ShapePixel & 0xFFFFFF) )
          v25 = v10;
        v10 = v25;
      }
      else
      {
        v10 = 0;
      }
      p_prclSrc = &prclSrc;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)p_prclSrc);
    goto LABEL_8;
  }
LABEL_9:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v36);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v33);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v37);
LABEL_10:
  SEMOBJ::vUnlock((SEMOBJ *)&v38);
  return v10;
}
