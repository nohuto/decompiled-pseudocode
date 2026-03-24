/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252D04
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253194 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C0218A80 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C02524F0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0252710 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0252798 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        unsigned __int64 a2,
        void **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v8; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v10; // r12
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _BYTE *PoolWithTag; // rbx
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v15; // rbx
  _QWORD *v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 p_HighPart; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v25; // r13
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v31; // r10
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  signed __int64 v40; // r9
  signed __int64 v41; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v42; // r11
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // eax
  unsigned int v49; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  char v51; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+38h] [rbp-C8h]
  void **v53; // [rsp+40h] [rbp-C0h]
  ADAPTER_DISPLAY *v54; // [rsp+48h] [rbp-B8h]
  int *v55; // [rsp+50h] [rbp-B0h]
  struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *v56; // [rsp+58h] [rbp-A8h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v57; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v58; // [rsp+88h] [rbp-78h]
  _BYTE v59[24]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v60; // [rsp+A8h] [rbp-58h]
  PVOID v61; // [rsp+B0h] [rbp-50h] BYREF
  char v62; // [rsp+B8h] [rbp-48h] BYREF
  int v63; // [rsp+E4h] [rbp-1Ch]
  PVOID v64; // [rsp+F0h] [rbp-10h] BYREF
  char v65; // [rsp+F8h] [rbp-8h] BYREF
  int v66; // [rsp+230h] [rbp+130h]

  v8 = 0LL;
  v10 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v11 = a8;
  v12 = a1;
  v54 = a6;
  v13 = a4;
  v53 = a3;
  v49 = a1;
  *a7 = 0;
  a8->Value = 0;
  v55 = a7;
  v56 = (struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *)a8;
  v58 = 0LL;
  v60 = 0;
  if ( a1 <= 3 )
  {
    PoolWithTag = v59;
    v58 = v59;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, a2, a3);
      v16[3] = a1;
      v17 = -1073741801;
      v16[4] = -1073741801LL;
      v16[5] = PsGetCurrentProcess(v19, v18, v20, v21);
      WdLogEvent5_WdWarning(v16);
      goto LABEL_39;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    v58 = PoolWithTag;
  }
  v60 = a1;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8LL * a1);
  v15 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v58;
  if ( !v58 )
    goto LABEL_7;
  v64 = 0LL;
  v66 = 0;
  v25 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(
                                                            &v64,
                                                            a1);
  if ( v25 )
  {
    P = 0LL;
    v31 = 0LL;
    v52 = 0;
    v61 = 0LL;
    v63 = 0;
    if ( !(_DWORD)v13
      || (v8 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                                                                                   &v61,
                                                                                   v13),
          v32 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                                                                           &P,
                                                                           v13),
          v31 = v32,
          v8)
      && v32 )
    {
      if ( a1 )
      {
        p_HighPart = (__int64)&v25->CompSurfaceLuid.HighPart;
        v40 = (char *)v15 - (char *)v10;
        v41 = (char *)v53 - (char *)v10;
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v10 + v40) = v25;
          v42 = *v10;
          *(_QWORD *)(p_HighPart - 12) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v10 + v41);
          *(_DWORD *)(p_HighPart - 4) = v42->VidPnSourceId;
          *(_DWORD *)p_HighPart = v42->LayerIndex;
          *(RECT *)(p_HighPart + 8) = v42->pPlaneAttributes->SrcRect;
          *(RECT *)(p_HighPart + 24) = v42->pPlaneAttributes->DstRect;
          *(RECT *)(p_HighPart + 40) = v42->pPlaneAttributes->ClipRect;
          *(_DWORD *)(p_HighPart + 56) = v42->pPlaneAttributes->Rotation;
          *(_DWORD *)(p_HighPart + 64) = v42->pPlaneAttributes->ColorSpace;
          *(_DWORD *)(p_HighPart + 4) ^= (*(_DWORD *)(p_HighPart + 4) ^ v42->pPlaneAttributes->Flags) & 1;
          *(_DWORD *)(p_HighPart + 4) ^= ((unsigned __int8)*(_DWORD *)(p_HighPart + 4) ^ (unsigned __int8)v42->pPlaneAttributes->Flags) & 2;
          *(_DWORD *)(p_HighPart + 60) ^= (*(_DWORD *)(p_HighPart + 60) ^ v42->pPlaneAttributes->Blend) & 1;
          if ( v42->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            *(_DWORD *)(p_HighPart + 68) = 1;
          }
          else if ( v42->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            *(_DWORD *)(p_HighPart + 68) = 2;
          }
          v25 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)v25 + 104);
          ++v10;
          *(_DWORD *)(p_HighPart + 72) = v42->pPlaneAttributes->SDRWhiteLevel;
          p_HighPart += 104LL;
          --v12;
        }
        while ( v12 );
        a1 = v49;
      }
      if ( (_DWORD)v13 )
      {
        v43 = a5;
        p_HighPart = (__int64)&v8->PostComposition;
        v44 = v13;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v43 + (char *)v31 - (char *)a5) = v8++;
          v45 = (__int64)*v43++;
          v46 = *(_DWORD *)p_HighPart;
          *(_DWORD *)(p_HighPart - 4) = *(_DWORD *)v45;
          *(_OWORD *)(p_HighPart + 4) = *(_OWORD *)(v45 + 8);
          *(_OWORD *)(p_HighPart + 20) = *(_OWORD *)(v45 + 24);
          *(_DWORD *)(p_HighPart + 36) = *(_DWORD *)(v45 + 40);
          *(_DWORD *)p_HighPart ^= (*(_DWORD *)(v45 + 4) ^ v46) & 1;
          *(_DWORD *)p_HighPart ^= (*(_DWORD *)(v45 + 4) ^ *(_DWORD *)p_HighPart) & 2;
          p_HighPart += 44LL;
          --v44;
        }
        while ( v44 );
      }
      v57.PlaneCount = a1;
      *(&v57.PlaneCount + 1) = 0;
      *(&v57.PostCompositionCount + 1) = 0;
      *(_QWORD *)&v57.Supported = 0LL;
      v57.ppPlanes = v15;
      v57.PostCompositionCount = v13;
      v57.ppPostComposition = v31;
      v47 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(v54, &v57, p_HighPart);
      if ( v47 >= 0 )
      {
        *v55 = v57.Supported;
        *v56 = v57.ReturnInfo.0;
      }
      v17 = v47;
    }
    else
    {
      v17 = -1073741801;
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, p_HighPart);
      v35[3] = v13;
      v35[4] = -1073741801LL;
      v35[5] = PsGetCurrentProcess(v37, v36, v38, v39);
      WdLogEvent5_WdWarning(v35);
    }
    if ( P != &v51 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v52 = 0;
    if ( v61 != &v62 && v61 )
      ExFreePoolWithTag(v61, 0);
    v61 = 0LL;
    v63 = 0;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, p_HighPart);
    v26[3] = a1;
    v17 = -1073741801;
    v26[4] = -1073741801LL;
    v26[5] = PsGetCurrentProcess(v28, v27, v29, v30);
    WdLogEvent5_WdWarning(v26);
  }
  if ( v64 != &v65 && v64 )
    ExFreePoolWithTag(v64, 0);
  v64 = 0LL;
  v66 = 0;
LABEL_39:
  if ( v58 != v59 && v58 )
    ExFreePoolWithTag(v58, 0);
  return v17;
}
