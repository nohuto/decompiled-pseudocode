__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v4; // r15d
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  int CddShadowPitch; // eax
  DXGADAPTER **v14; // rcx
  struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v16; // rcx
  unsigned int Width; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v18; // edi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v19; // eax
  struct DXGGLOBAL *Global; // rax
  LONG *v21; // rdi
  LONG v22; // eax
  int v23; // r9d
  int v24; // r8d
  int v25; // edx
  int v26; // r12d
  int v27; // eax
  unsigned int right; // edx
  signed int v29; // r9d
  LONG v30; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // r11d
  unsigned int v35; // eax
  unsigned int v36; // ebx
  unsigned __int8 *v37; // r14
  int v38; // esi
  int v39; // eax
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdi
  int v48; // r15d
  int v49; // eax
  __int64 v50; // rdi
  unsigned int v51; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+54h] [rbp-ACh] BYREF
  int v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGCONTEXT *v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int Height; // [rsp+68h] [rbp-98h]
  LONG left; // [rsp+6Ch] [rbp-94h]
  unsigned __int8 *v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+78h] [rbp-88h]
  struct DXGHWQUEUE *v60; // [rsp+80h] [rbp-80h]
  char v61[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  char v63; // [rsp+98h] [rbp-68h]
  struct _D3DKMT_LOCK v64; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *pData; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E4h] [rbp-1Ch]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  int v71; // [rsp+F8h] [rbp-8h]
  int v72; // [rsp+FCh] [rbp-4h]
  struct tagRECT *v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  _BYTE v75[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v76[8]; // [rsp+120h] [rbp+20h] BYREF
  _D3DKMT_SUBMITPRESENTTOHWQUEUE v77; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v78; // [rsp+740h] [rbp+640h] BYREF
  struct tagRECT v79; // [rsp+750h] [rbp+650h] BYREF
  struct tagRECT v80; // [rsp+760h] [rbp+660h] BYREF
  char v81[8]; // [rsp+770h] [rbp+670h] BYREF
  char v82[64]; // [rsp+778h] [rbp+678h] BYREF
  char v83[88]; // [rsp+7B8h] [rbp+6B8h] BYREF

  v3 = a3;
  v59 = a3;
  v54 = 0;
  v51 = 0;
  v60 = a2;
  v55 = a1;
  v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 376);
  if ( !v4 )
    return 0LL;
  v6 = *((_QWORD *)v55 + 2);
  v7 = *(_QWORD *)(v6 + 1880);
  *(_QWORD *)&v80.left = v7;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75,
    (struct DXGDEVICE *)v6);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v76,
    &v55,
    1u,
    v8,
    1);
  if ( v76[0] )
  {
    v62 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    v63 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, v6, 1, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v81, 0LL);
    LODWORD(v11) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(4LL, v10, v6);
      goto LABEL_79;
    }
    ADAPTER_DISPLAY::GetCddAllocationHandles(*(ADAPTER_DISPLAY **)(v7 + 2920), v3, &v54, &v51);
    if ( !v54 || !v51 )
    {
      v12 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(ADAPTER_DISPLAY **)(v7 + 2920),
              (struct DXGDEVICE *)v6,
              v3,
              &v54,
              &v51,
              (struct COREDEVICEACCESS *)v81);
      v11 = v12;
      if ( v12 == -1073741637 )
      {
        v11 = -1071775482LL;
LABEL_11:
        WdLogSingleEntry3(4LL, v7, v3, v11);
        goto LABEL_79;
      }
      if ( v12 < 0 )
        goto LABEL_11;
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v7 + 2920), v3);
    v14 = *(DXGADAPTER ***)(v7 + 2920);
    v53 = CddShadowPitch;
    CddDisplayMode = (struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetCddDisplayMode(v14, v3);
    v16 = *(_QWORD *)(v7 + 2920);
    v58 = (unsigned __int8 *)CddDisplayMode;
    Width = CddDisplayMode->Width;
    Height = CddDisplayMode->Height;
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v16, v3, 1);
    memset(&v64, 0, sizeof(v64));
    v64.hAllocation = v51;
    v18 = CurrentOrientation;
    v78 = 0LL;
    v64.hDevice = *(_DWORD *)(v6 + 468);
    left = DXGDEVICE::Lock((DXGDEVICE *)v6, &v64, (struct COREDEVICEACCESS *)v81);
    if ( left < 0 )
    {
      WdLogSingleEntry1(2LL, 4915LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PresentCddShadowBuffer: Failed to lock shadow buffer.",
        4915LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = left;
      goto LABEL_79;
    }
    if ( !v64.pData )
    {
      WdLogSingleEntry1(2LL, 4921LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PresentCddShadowBuffer: The locked data pointer is invalid.",
        4921LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = -1073741823;
LABEL_79:
      COREACCESS::~COREACCESS((COREACCESS *)v83);
      COREACCESS::~COREACCESS((COREACCESS *)v82);
      if ( v63 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
      goto LABEL_82;
    }
    if ( v4 == 1 )
    {
      if ( ((v18 - 2) & 0xFFFFFFFD) == 0 )
      {
        Width = *((_DWORD *)v58 + 1);
        Height = *(_DWORD *)v58;
        v19 = D3DKMDT_VPPR_ROTATE90;
        if ( v18 == D3DKMDT_VPPR_ROTATE90 )
          v19 = D3DKMDT_VPPR_ROTATE270;
        CurrentOrientation = v19;
      }
      v58 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 189);
      if ( v58 )
      {
        v79 = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        v21 = (LONG *)((char *)Global + 1520);
        if ( GetShadowBufferDirtyRect(&v79, *((_DWORD *)Global + 380), *((_DWORD *)Global + 381)) )
        {
          v22 = v21[3];
          if ( v22 == 20 )
          {
            if ( *v21 > Width || v21[1] > Height )
              goto LABEL_72;
            v78 = v79;
            v27 = *v21;
            right = v79.right;
            left = v79.left;
            if ( v27 == Width )
            {
              v29 = v78.left;
            }
            else
            {
              v29 = v79.left + ((Width - v27) >> 1);
              v78.left = v29;
              right = ((Width - *v21) >> 1) + v79.right;
              v78.right = right;
            }
            v30 = v21[1];
            top = v78.top;
            if ( v30 == Height )
            {
              bottom = v78.bottom;
            }
            else
            {
              top = ((Height - v30) >> 1) + v78.top;
              v78.top = top;
              bottom = ((Height - v21[1]) >> 1) + v78.bottom;
              v78.bottom = bottom;
            }
            if ( v29 < 0
              || v29 > (int)right
              || top < 0
              || top > (int)bottom
              || right > Width
              || bottom > Height
              || v79.left < 0
              || (v33 = v79.right, v79.left > v79.right)
              || (v34 = v79.top, v79.top < 0)
              || (v35 = v79.bottom, v79.top > v79.bottom)
              || v79.right > (unsigned int)*v21
              || v79.bottom > (unsigned int)v21[1] )
            {
              if ( byte_1C013B156 )
              {
                DxgCreateLiveDumpWithWdLogs2(
                  0x193u,
                  2057LL,
                  (unsigned int)(*v21 << 16) | (unsigned __int64)(unsigned __int16)v21[1],
                  (unsigned __int16)Height | (unsigned __int64)(Width << 16),
                  0LL,
                  0LL);
                byte_1C013B156 = 0;
              }
              goto LABEL_72;
            }
            if ( v79.top < (unsigned int)v79.bottom )
            {
              v36 = left;
              v37 = v58;
              v38 = v53;
              do
              {
                if ( v36 < v33 )
                {
                  do
                  {
                    v39 = 3 * v36++;
                    v40 = v39 + v21[2] * v34;
                    v41 = (unsigned int)(v38 * top) + (unsigned __int64)(unsigned int)(4 * v29++);
                    *(_DWORD *)((char *)v64.pData + v41) = v37[v40] | ((v37[(unsigned int)(v40 + 1)] | (v37[(unsigned int)(v40 + 2)] << 8)) << 8);
                    v33 = v79.right;
                  }
                  while ( v36 < v79.right );
                  v29 = v78.left;
                  v35 = v79.bottom;
                  v36 = v79.left;
                }
                ++top;
                ++v34;
              }
              while ( v34 < v35 );
              LODWORD(v3) = v59;
              v7 = *(_QWORD *)&v80.left;
            }
            v26 = v53;
          }
          else
          {
            if ( v22 != 22 )
              goto LABEL_72;
            v23 = v21[2];
            v24 = v21[1];
            v25 = *v21;
            v80.bottom = Height;
            v80.right = Width;
            v26 = v53;
            *(_QWORD *)&v80.left = 0LL;
            if ( (int)DxgkpBlitA8R8R8G8(
                        v58,
                        v25,
                        v24,
                        v23,
                        CurrentOrientation,
                        (unsigned __int8 *)v64.pData,
                        v53,
                        &v80,
                        &v79,
                        &v78) < 0 )
              goto LABEL_72;
          }
          if ( *(_QWORD *)(v6 + 1880) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) )
          {
            memset(&v77, 0, sizeof(v77));
            CurrentOrientation = D3DKMDT_VPPR_UNINITIALIZED;
            if ( v60 )
            {
              CurrentOrientation = *((_DWORD *)v60 + 6);
              v77.hHwQueues = (D3DKMT_HANDLE *)&CurrentOrientation;
            }
            v77.PrivatePresentData.Flags.Value |= 1u;
            v77.PrivatePresentData.hDevice = *((_DWORD *)v55 + 6);
            v77.PrivatePresentData.pSrcSubRects = &v79;
            v77.PrivatePresentData.hSource = v51;
            v77.PrivatePresentData.hDestination = v54;
            v77.PrivatePresentData.DstRect = v78;
            v77.PrivatePresentData.SubRectCnt = 1;
            v77.PrivatePresentData.SrcRect = v78;
            v79 = v78;
            v42 = DXGCONTEXT::PresentFromCdd(
                    v55,
                    &v77,
                    v3,
                    (struct COREDEVICEACCESS *)v81,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v61,
                    &v55);
            if ( v42 >= 0 )
            {
              if ( (**(_DWORD **)(v7 + 2824) & 0x10) != 0 )
                PresentQualcommPanelRefreshWorkaround(v55, (struct DXGADAPTER *)v7, v3);
              goto LABEL_72;
            }
          }
          else
          {
            v43 = *(_QWORD *)(v7 + 2920);
            v65[1] = 0;
            v72 = 0;
            v74 = 0LL;
            ADAPTER_DISPLAY::GetCurrentOrientation(v43, v3, 1);
            v69 = 0LL;
            pData = v64.pData;
            v73 = &v78;
            v44 = *(_QWORD *)(v7 + 2920);
            v65[0] = v3;
            v67 = 4;
            v68 = v26;
            v70 = 0LL;
            v71 = 1;
            v45 = *(_QWORD *)(v44 + 448);
            if ( v45 )
            {
              if ( (unsigned int)v3 < *(_DWORD *)v45 && (v46 = *(_QWORD *)(v45 + 8)) != 0 )
                v42 = BLTQUEUE::PresentDisplayOnly(v46 + 2920LL * (unsigned int)v3, v65, 0LL, 1LL);
              else
                v42 = -1073741811;
              if ( v42 >= 0 )
                goto LABEL_72;
            }
            else
            {
              v42 = -1073741811;
            }
          }
          v47 = v42;
          WdLogSingleEntry1(2LL, v42);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PresentCddShadowBuffer: PresentFromCdd failed. Status = 0x%I64x",
            v47,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
LABEL_72:
    v79.left = *(_DWORD *)(v6 + 468);
    v79.top = 1;
    *(_QWORD *)&v79.right = &v51;
    v48 = DXGDEVICE::Unlock((DXGDEVICE *)v6, (const struct _D3DKMT_UNLOCK *)&v79, 0);
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v7) )
    {
      if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v7 + 2920), v3) )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v7 + 2920), v3) )
        {
          if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v7 + 2920), v3) )
          {
            v49 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *(PERESOURCE ***)(v7 + 2920),
                    v55,
                    v3,
                    (struct COREDEVICEACCESS *)v81);
            if ( v49 < 0 )
            {
              v50 = v49;
              WdLogSingleEntry3(2LL, v55, v49, 5180LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
                (__int64)v55,
                v50,
                5180LL,
                0LL,
                0LL);
            }
          }
        }
      }
    }
    LODWORD(v11) = v48;
    goto LABEL_79;
  }
  WdLogSingleEntry1(2LL, 4832LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"PresentCddShadowBuffer: Out of memory - could not initialize context array lock exclusive",
    4832LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v11) = -1073741801;
LABEL_82:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v76);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
  return (unsigned int)v11;
}
