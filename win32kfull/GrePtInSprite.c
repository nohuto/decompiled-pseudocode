/*
 * XREFs of GrePtInSprite @ 0x1C00A307C
 * Callers:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0011B6C (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00A2FC8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     EngAlphaBlend @ 0x1C00B4820 (EngAlphaBlend.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C0269520 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C027D22C (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(SURFOBJ **a1, HWND a2, LONG a3, int a4, int a5, int a6)
{
  unsigned int left; // r12d
  HDEV v9; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  __int64 v11; // rsi
  Gre::Base *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r15
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  Gre::Base *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  LONG v24; // eax
  __int64 v25; // r8
  __int64 v26; // r10
  int v27; // ecx
  __int64 v28; // rax
  struct _SURFOBJ *v30; // rdx
  BLENDOBJ *v31; // rdi
  RECTL si128; // xmm0
  _DWORD *pvScan0; // rbx
  struct Gre::Base::SESSION_GLOBALS *v34; // rax
  unsigned int v35; // [rsp+40h] [rbp-99h]
  __int64 v36; // [rsp+48h] [rbp-91h]
  __int64 v37; // [rsp+48h] [rbp-91h]
  XLATEOBJ *pxlo; // [rsp+58h] [rbp-81h]
  XLATEOBJ *pxloa; // [rsp+58h] [rbp-81h]
  XLATEOBJ *pxlob; // [rsp+58h] [rbp-81h]
  char v42; // [rsp+60h] [rbp-79h]
  int v43; // [rsp+64h] [rbp-75h]
  _QWORD v44[2]; // [rsp+68h] [rbp-71h] BYREF
  HWND v45; // [rsp+78h] [rbp-61h]
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-59h] BYREF
  int v47; // [rsp+84h] [rbp-55h]
  char *v48; // [rsp+88h] [rbp-51h]
  char *v49; // [rsp+90h] [rbp-49h]
  char *v50; // [rsp+98h] [rbp-41h]
  _QWORD Buffer[2]; // [rsp+A0h] [rbp-39h] BYREF
  RECTL prclSrc; // [rsp+B0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+C0h] [rbp-19h] BYREF

  left = 0;
  v45 = a2;
  v9 = (HDEV)a1;
  v42 = 1;
  v43 = 1;
  v10 = Gre::Base::Globals((Gre::Base *)a1);
  v11 = *((_QWORD *)v10 + 15);
  GreAcquireSemaphore(v11);
  if ( a6 && *((_QWORD *)Gre::Base::Globals(v12) + 38) )
  {
    v13 = *((_QWORD *)v10 + 14);
    GreAcquireSemaphoreSharedInternal(v13);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v13);
    v14 = *((_QWORD *)v10 + 9);
    GreAcquireSemaphoreSharedInternal(v14);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v14);
    if ( !*((_QWORD *)Gre::Base::Globals(v15) + 38) )
      goto LABEL_20;
    v43 = 0;
    Buffer[1] = 0LL;
    v36 = 0LL;
    v16 = Gre::Base::Globals(0LL);
    Buffer[0] = v45;
    pxlo = (XLATEOBJ *)v16;
    v17 = *((_QWORD *)v16 + 38) + 72LL;
    if ( *((_QWORD *)v16 + 38) != -72LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v17, 0LL);
      v16 = (struct Gre::Base::SESSION_GLOBALS *)pxlo;
    }
    v18 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v16 + 38), Buffer);
    if ( v18 )
      v36 = v18[1];
    if ( v17 )
    {
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
    Gre::Base::Globals(v19);
    if ( !v36 || (LOBYTE(v20) = 15, v21 = HmgShareLockCheck(v36, v20), (v22 = v21) == 0) )
    {
LABEL_19:
      v9 = (HDEV)a1;
LABEL_20:
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v14);
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v13);
      if ( !v43 )
        goto LABEL_21;
      goto LABEL_47;
    }
    v23 = *(_QWORD *)(v21 + 144);
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v37 = v23;
    v24 = PtInRect(v21 + 56, __PAIR64__(a4, a3));
    v27 = *(_DWORD *)(v22 + 72);
    left = v24;
    prclSrc.left = v24;
    v28 = v22;
    if ( v27
      && v27 != 4
      && (v27 != 2 || *(_BYTE *)(v22 + 79) != (_BYTE)v26 || *(_BYTE *)(v22 + 78) <= (unsigned __int8)v26) )
    {
      v28 = v22;
      if ( left )
      {
        a4 -= *(_DWORD *)(v22 + 60);
        a3 -= *(_DWORD *)(v22 + 56);
        v30 = *(struct _SURFOBJ **)(v25 + 184);
        pxloa = (XLATEOBJ *)v30;
        v35 = a4;
        if ( (v27 & 2) != 0 )
        {
          if ( v27 != 3 || *(_BYTE *)(v22 + 79) != (_BYTE)v26 )
            v42 = v26;
          v44[0] = v26;
          SURFREFVIEW::bMap((SURFREFVIEW *)v44, v30);
          v31 = (BLENDOBJ *)v22;
          if ( !v44[0]
            || pxloa[3].iUniq != 6
            || v42
            && (*(_DWORD *)(v22 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v37 + 184), a3, v35, a5) & 0xFFFFFF) )
          {
            left = 0;
          }
          else
          {
            si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
            pvScan0 = a1[138]->pvScan0;
            *pvScan0 = 0;
            v47 = 0;
            prclSrc.right = a3 + 1;
            prclSrc.bottom = v35 + 1;
            prclDest = si128;
            prclSrc.left = a3;
            prclSrc.top = v35;
            v34 = Gre::Base::Globals((Gre::Base *)v35);
            pBlendObj = v31[19];
            pxlob = (XLATEOBJ *)((char *)v34 + 6896);
            v48 = (char *)v34 + 6896;
            v49 = (char *)v34 + 6896;
            v50 = (char *)v34 + 6896;
            EngAlphaBlend(
              a1[138],
              *(SURFOBJ **)(v37 + 184),
              0LL,
              (XLATEOBJ *)((char *)v34 + 6896),
              &prclDest,
              &prclSrc,
              &pBlendObj);
            if ( !*pvScan0 )
            {
              *pvScan0 = -1;
              EngAlphaBlend(a1[138], *(SURFOBJ **)(v37 + 184), 0LL, pxlob, &prclDest, &prclSrc, &pBlendObj);
              left = *pvScan0 != -1;
            }
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
          v22 = (__int64)v31;
          a4 = v35;
          goto LABEL_18;
        }
        if ( v27 == 1 )
        {
          v44[0] = v26;
          SURFREFVIEW::bMap((SURFREFVIEW *)v44, v30);
          if ( v44[0] && pxloa[3].iUniq == 6 )
          {
            left = 0;
            if ( (*(_DWORD *)(v22 + 80) & 0xFFFFFF) != (crSpGetShapePixel(*(struct _SURFOBJ **)(v37 + 184), a3, a4, a5) & 0xFFFFFF) )
              left = prclSrc.left;
          }
          else
          {
            left = 0;
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
          goto LABEL_18;
        }
      }
    }
    v22 = v28;
LABEL_18:
    DEC_SHARE_REF_CNT(v22);
    goto LABEL_19;
  }
LABEL_47:
  left = GdiPtInSprite(v9, v45, a3, a4);
LABEL_21:
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v11);
  }
  return left;
}
