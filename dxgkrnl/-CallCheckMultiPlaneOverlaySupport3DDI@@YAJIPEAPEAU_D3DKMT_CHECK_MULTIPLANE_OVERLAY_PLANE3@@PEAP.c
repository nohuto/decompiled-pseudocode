__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  _BYTE *Pool2; // rsi
  __int64 CurrentProcess; // rax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *Elements; // r13
  __int64 v20; // rax
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  LONG *p_HighPart; // r9
  __int64 v26; // r11
  signed __int64 v27; // rbx
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rax
  LONG v31; // ecx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax
  int v39; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  char v41; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+40h] [rbp-C0h]
  ADAPTER_DISPLAY *v43; // [rsp+48h] [rbp-B8h]
  int *v44; // [rsp+50h] [rbp-B0h]
  struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *v45; // [rsp+58h] [rbp-A8h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v46; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v47; // [rsp+88h] [rbp-78h]
  _BYTE v48[24]; // [rsp+90h] [rbp-70h] BYREF
  int v49; // [rsp+A8h] [rbp-58h]
  PVOID v50; // [rsp+B0h] [rbp-50h] BYREF
  char v51; // [rsp+B8h] [rbp-48h] BYREF
  int v52; // [rsp+E4h] [rbp-1Ch]
  PVOID v53; // [rsp+F0h] [rbp-10h] BYREF
  char v54; // [rsp+F8h] [rbp-8h] BYREF
  int v55; // [rsp+230h] [rbp+130h]

  v8 = 0LL;
  v9 = a1;
  v11 = a8;
  v43 = a6;
  v12 = a4;
  v39 = v9;
  *a7 = 0;
  a8->Value = 0;
  v44 = a7;
  v45 = (struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *)a8;
  v47 = 0LL;
  v49 = 0;
  if ( (unsigned int)v9 <= 3 )
  {
    Pool2 = v48;
    v47 = v48;
    if ( (_DWORD)v9 )
    {
      memset(v48, 0, 8 * v9);
      Pool2 = v47;
    }
  }
  else
  {
    v13 = (unsigned int)v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(v11);
      v16 = -1073741801;
      WdLogSingleEntry3(3LL, v13, -1073741801LL, CurrentProcess);
      goto LABEL_39;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL);
    v47 = Pool2;
  }
  v49 = v9;
  v13 = v9;
  if ( !Pool2 )
    goto LABEL_7;
  v53 = 0LL;
  v55 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(
                                                                 (__int64 *)&v53,
                                                                 v9);
  if ( Elements )
  {
    P = 0LL;
    v21 = 0LL;
    v42 = 0;
    v50 = 0LL;
    v52 = 0;
    if ( !(_DWORD)v12
      || (v8 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                 (__int64 *)&v50,
                 v12),
          v22 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                  (__int64 *)&P,
                  v12),
          v21 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v22,
          v8)
      && v22 )
    {
      if ( (_DWORD)v9 )
      {
        p_HighPart = &Elements->CompSurfaceLuid.HighPart;
        v26 = Pool2 - (_BYTE *)a2;
        v27 = (char *)a3 - (char *)a2;
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)a2 + v26) = Elements;
          v28 = (__int64)*a2;
          *(_QWORD *)(p_HighPart - 3) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)a2 + v27);
          *(p_HighPart - 1) = *(_DWORD *)(v28 + 16);
          *p_HighPart = *(_DWORD *)v28;
          *(_OWORD *)(p_HighPart + 2) = *(_OWORD *)(*(_QWORD *)(v28 + 24) + 4LL);
          *(_OWORD *)(p_HighPart + 6) = *(_OWORD *)(*(_QWORD *)(v28 + 24) + 20LL);
          *(_OWORD *)(p_HighPart + 10) = *(_OWORD *)(*(_QWORD *)(v28 + 24) + 36LL);
          p_HighPart[14] = *(_DWORD *)(*(_QWORD *)(v28 + 24) + 52LL);
          p_HighPart[16] = *(_DWORD *)(*(_QWORD *)(v28 + 24) + 72LL);
          v29 = p_HighPart[1] ^ ((unsigned __int8)p_HighPart[1] ^ (unsigned __int8)**(_DWORD **)(v28 + 24)) & 1;
          p_HighPart[1] = v29;
          v30 = v28;
          LODWORD(v28) = v29 ^ (**(_DWORD **)(v28 + 24) ^ v29) & 2;
          p_HighPart[1] = v28;
          v31 = v28 ^ (**(_DWORD **)(v30 + 24) ^ v28) & 4;
          v18 = v30;
          p_HighPart[1] = v31;
          p_HighPart[15] ^= (p_HighPart[15] ^ *(_DWORD *)(*(_QWORD *)(v30 + 24) + 56LL)) & 1;
          if ( *(_DWORD *)(*(_QWORD *)(v30 + 24) + 76LL) == 1 )
          {
            p_HighPart[17] = 1;
          }
          else if ( *(_DWORD *)(*(_QWORD *)(v30 + 24) + 76LL) == 2 )
          {
            p_HighPart[17] = 2;
          }
          Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)Elements + 104);
          ++a2;
          p_HighPart[18] = *(_DWORD *)(*(_QWORD *)(v30 + 24) + 80LL);
          p_HighPart += 26;
          --v13;
        }
        while ( v13 );
        LODWORD(v9) = v39;
      }
      if ( (_DWORD)v12 )
      {
        v32 = a5;
        v18 = v8 + 4;
        v33 = v12;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v32 + (char *)v21 - (char *)a5) = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v8;
          v8 += 44LL;
          v34 = (__int64)*v32++;
          v35 = *(_DWORD *)v18;
          *(_DWORD *)(v18 - 4) = *(_DWORD *)v34;
          *(_OWORD *)(v18 + 4) = *(_OWORD *)(v34 + 8);
          *(_OWORD *)(v18 + 20) = *(_OWORD *)(v34 + 24);
          *(_DWORD *)(v18 + 36) = *(_DWORD *)(v34 + 40);
          *(_DWORD *)v18 ^= (*(_DWORD *)(v34 + 4) ^ v35) & 1;
          *(_DWORD *)v18 ^= (*(_DWORD *)(v34 + 4) ^ *(_DWORD *)v18) & 2;
          v18 += 44LL;
          --v33;
        }
        while ( v33 );
      }
      v46.PlaneCount = v9;
      *(&v46.PlaneCount + 1) = 0;
      *(&v46.PostCompositionCount + 1) = 0;
      *(_QWORD *)&v46.Supported = 0LL;
      v46.ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)Pool2;
      v46.PostCompositionCount = v12;
      v46.ppPostComposition = v21;
      v36 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(v43, &v46, v18);
      if ( v36 >= 0 )
      {
        *v44 = v46.Supported;
        *v45 = v46.ReturnInfo.0;
      }
      v16 = v36;
    }
    else
    {
      v24 = PsGetCurrentProcess(v23);
      v16 = -1073741801;
      WdLogSingleEntry3(3LL, v12, -1073741801LL, v24);
    }
    if ( P != &v41 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v42 = 0;
    if ( v50 != &v51 && v50 )
      ExFreePoolWithTag(v50, 0);
    v50 = 0LL;
    v52 = 0;
  }
  else
  {
    v20 = PsGetCurrentProcess(v17);
    v16 = -1073741801;
    WdLogSingleEntry3(3LL, v13, -1073741801LL, v20);
  }
  if ( v53 != &v54 && v53 )
    ExFreePoolWithTag(v53, 0);
  v53 = 0LL;
  v55 = 0;
LABEL_39:
  if ( v47 != v48 && v47 )
    ExFreePoolWithTag(v47, 0);
  return v16;
}
