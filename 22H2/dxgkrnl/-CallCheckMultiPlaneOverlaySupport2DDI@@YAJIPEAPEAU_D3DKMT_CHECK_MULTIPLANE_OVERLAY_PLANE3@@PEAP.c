/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252A98
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253194 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C0218820 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r14
  UINT v9; // ebx
  __int64 v10; // rdi
  _BYTE *PoolWithTag; // r9
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v12; // r9
  _QWORD *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // r10
  signed __int64 v20; // r14
  int v21; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v23; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v25[336]; // [rsp+48h] [rbp-B8h] BYREF
  UINT v26; // [rsp+198h] [rbp+98h]

  v7 = a3;
  P = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v26 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = a1;
  v10 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    PoolWithTag = v25;
    P = v25;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v13[3] = v10;
      v14 = -1073741801;
      v13[4] = -1073741801LL;
      v13[5] = PsGetCurrentProcess(v16, v15, v17, v18);
      WdLogEvent5_WdWarning(v13);
      goto LABEL_18;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112LL * (unsigned int)a1, 0x4B677844u);
    P = PoolWithTag;
  }
  v26 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 112 * v10);
  v12 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)P;
  if ( !P )
    goto LABEL_7;
  if ( v9 )
  {
    v19 = (char *)P + 12;
    v20 = (char *)v8 - (char *)v7;
    do
    {
      a3 = *(void ***)((char *)v7 + v20);
      *(_QWORD *)(v19 - 12) = *v7;
      *((_DWORD *)v19 - 1) = *((_DWORD *)a3 + 4);
      *(_DWORD *)v19 = *(_DWORD *)a3;
      *(_OWORD *)(v19 + 8) = *(_OWORD *)((char *)a3[3] + 4);
      *(_OWORD *)(v19 + 24) = *(_OWORD *)((char *)a3[3] + 20);
      *(_OWORD *)(v19 + 40) = *(_OWORD *)((char *)a3[3] + 36);
      *((_DWORD *)v19 + 14) = *((_DWORD *)a3[3] + 13);
      *((_DWORD *)v19 + 17) = *((_DWORD *)a3[3] + 18);
      *((_DWORD *)v19 + 1) ^= (*((_DWORD *)v19 + 1) ^ *(_DWORD *)a3[3]) & 1;
      *((_DWORD *)v19 + 1) ^= ((unsigned __int8)*((_DWORD *)v19 + 1) ^ (unsigned __int8)*(_DWORD *)a3[3]) & 2;
      *((_DWORD *)v19 + 15) ^= (*((_DWORD *)v19 + 15) ^ *((_DWORD *)a3[3] + 14)) & 1;
      if ( *((_DWORD *)a3[3] + 19) == 1 )
      {
        *((_DWORD *)v19 + 22) = 1;
      }
      else if ( *((_DWORD *)a3[3] + 19) == 2 )
      {
        *((_DWORD *)v19 + 22) = 2;
      }
      ++v7;
      v19 += 112;
      --v10;
    }
    while ( v10 );
  }
  *(&v23.PlaneCount + 1) = 0;
  *(_QWORD *)&v23.Supported = 0LL;
  v23.PlaneCount = v9;
  v23.pPlanes = v12;
  v21 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(a4, &v23, (__int64)a3);
  if ( v21 >= 0 )
  {
    *a5 = v23.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v23.ReturnInfo.0;
  }
  v14 = v21;
LABEL_18:
  if ( P != v25 && P )
    ExFreePoolWithTag(P, 0);
  return v14;
}
