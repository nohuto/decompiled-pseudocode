__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *Pool2; // r9
  __int64 CurrentProcess; // rax
  unsigned int v13; // ebx
  UINT *p_LayerIndex; // r10
  char *v15; // r14
  int v16; // edx
  int v17; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v19; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v21[336]; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+198h] [rbp+98h]

  v7 = a3;
  P = 0LL;
  v22 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v21;
    P = v21;
    if ( (_DWORD)a1 )
    {
      memset(v21, 0, 112LL * (unsigned int)a1);
      Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)P;
    }
  }
  else
  {
    v10 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(a1);
      v13 = -1073741801;
      WdLogSingleEntry3(3LL, v10, -1073741801LL, CurrentProcess);
      goto LABEL_18;
    }
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)ExAllocatePool2(256LL, 112LL * (unsigned int)a1, 1265072196LL);
    P = Pool2;
  }
  v22 = v9;
  v10 = v9;
  if ( !Pool2 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    p_LayerIndex = &Pool2->LayerIndex;
    v15 = (char *)((char *)a2 - (char *)v7);
    do
    {
      a3 = *(void ***)((char *)v7 + (_QWORD)v15);
      *(_QWORD *)(p_LayerIndex - 3) = *v7;
      *(p_LayerIndex - 1) = *((_DWORD *)a3 + 4);
      *p_LayerIndex = *(_DWORD *)a3;
      *(_OWORD *)(p_LayerIndex + 2) = *(_OWORD *)((char *)a3[3] + 4);
      *(_OWORD *)(p_LayerIndex + 6) = *(_OWORD *)((char *)a3[3] + 20);
      *(_OWORD *)(p_LayerIndex + 10) = *(_OWORD *)((char *)a3[3] + 36);
      p_LayerIndex[14] = *((_DWORD *)a3[3] + 13);
      p_LayerIndex[17] = *((_DWORD *)a3[3] + 18);
      v16 = p_LayerIndex[1] ^ ((unsigned __int8)p_LayerIndex[1] ^ (unsigned __int8)*(_DWORD *)a3[3]) & 1;
      p_LayerIndex[1] = v16;
      p_LayerIndex[1] = v16 ^ (*(_DWORD *)a3[3] ^ v16) & 2;
      p_LayerIndex[15] ^= (p_LayerIndex[15] ^ *((_DWORD *)a3[3] + 14)) & 1;
      if ( *((_DWORD *)a3[3] + 19) == 1 )
      {
        p_LayerIndex[22] = 1;
      }
      else if ( *((_DWORD *)a3[3] + 19) == 2 )
      {
        p_LayerIndex[22] = 2;
      }
      ++v7;
      p_LayerIndex += 28;
      --v10;
    }
    while ( v10 );
  }
  *(&v19.PlaneCount + 1) = 0;
  *(_QWORD *)&v19.Supported = 0LL;
  v19.PlaneCount = v9;
  v19.pPlanes = Pool2;
  v17 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(a4, &v19, (__int64)a3);
  if ( v17 >= 0 )
  {
    *a5 = v19.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v19.ReturnInfo.0;
  }
  v13 = v17;
LABEL_18:
  if ( P != v21 && P )
    ExFreePoolWithTag(P, 0);
  return v13;
}
