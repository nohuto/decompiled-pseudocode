/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C025281C
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253194 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C0218CE0 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport1DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r15
  UINT v9; // ebx
  __int64 v10; // rdi
  _BYTE *PoolWithTag; // r9
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v12; // r9
  _QWORD *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  signed __int64 v19; // r15
  __int64 v20; // r10
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v26; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v28[312]; // [rsp+48h] [rbp-B8h] BYREF
  UINT v29; // [rsp+180h] [rbp+80h]

  v7 = a3;
  P = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v29 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = a1;
  v10 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    PoolWithTag = v28;
    P = v28;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x68 )
    {
LABEL_7:
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v13[3] = v10;
      v14 = -1073741801;
      v13[4] = -1073741801LL;
      v13[5] = PsGetCurrentProcess(v16, v15, v17, v18);
      WdLogEvent5_WdWarning(v13);
      goto LABEL_24;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 104LL * (unsigned int)a1, 0x4B677844u);
    P = PoolWithTag;
  }
  v29 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 104 * v10);
  v12 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)P;
  if ( !P )
    goto LABEL_7;
  if ( v9 )
  {
    a3 = (void **)((char *)P + 16);
    v19 = (char *)v8 - (char *)v7;
    do
    {
      v20 = *(__int64 *)((char *)v7 + v19);
      *(a3 - 2) = *v7;
      *((_DWORD *)a3 - 2) = *(_DWORD *)(v20 + 16);
      *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(v20 + 24) + 4LL);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(*(_QWORD *)(v20 + 24) + 20LL);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(*(_QWORD *)(v20 + 24) + 36LL);
      *((_DWORD *)a3 + 12) = *(_DWORD *)(*(_QWORD *)(v20 + 24) + 52LL);
      v21 = *(_DWORD **)(v20 + 24);
      v22 = v21[18];
      if ( v22 == 6 || v22 == 8 )
      {
        *((_DWORD *)a3 + 15) |= 1u;
        v21 = *(_DWORD **)(v20 + 24);
      }
      v23 = v21[18];
      if ( v23 >= 8 && v23 <= 9 )
      {
        *((_DWORD *)a3 + 15) |= 2u;
        v21 = *(_DWORD **)(v20 + 24);
      }
      *((_DWORD *)a3 - 1) ^= (*((_DWORD *)a3 - 1) ^ *v21) & 1;
      *((_DWORD *)a3 - 1) ^= ((unsigned __int8)*((_DWORD *)a3 - 1) ^ (unsigned __int8)**(_DWORD **)(v20 + 24)) & 2;
      *((_DWORD *)a3 + 13) ^= (*((_DWORD *)a3 + 13) ^ *(_DWORD *)(*(_QWORD *)(v20 + 24) + 56LL)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v20 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)a3 + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v20 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)a3 + 20) = 2;
      }
      ++v7;
      a3 += 13;
      --v10;
    }
    while ( v10 );
  }
  *(&v26.PlaneCount + 1) = 0;
  *(_QWORD *)&v26.Supported = 0LL;
  v26.PlaneCount = v9;
  v26.pPlanes = v12;
  v24 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a4, &v26, (__int64)a3);
  if ( v24 >= 0 )
    *a5 = v26.Supported;
  v14 = v24;
LABEL_24:
  if ( P != v28 && P )
    ExFreePoolWithTag(P, 0);
  return v14;
}
