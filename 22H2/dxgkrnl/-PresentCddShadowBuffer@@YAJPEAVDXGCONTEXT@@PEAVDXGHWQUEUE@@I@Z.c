/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01968D4
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01966C0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001850 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001F24 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0002544 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A478 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A4B4 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C00231AC (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DEF50 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E5C14 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010C850 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0148618 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015B3DC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C015D858 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02142C8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C022EABC (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FF340 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int CddShadowPitch; // eax
  DXGADAPTER **v14; // rcx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rbx
  unsigned int Width; // r15d
  unsigned int Height; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *Global; // rax
  LONG *v26; // rbx
  LONG v27; // eax
  int v28; // r9d
  int v29; // r8d
  int v30; // edx
  int v31; // eax
  __int64 v32; // rdx
  unsigned int *v33; // rcx
  int v34; // ebx
  int v35; // r14d
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  unsigned int left; // r13d
  int v46; // eax
  unsigned int right; // edx
  LONG v48; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // r11d
  unsigned int v53; // eax
  unsigned __int8 *v54; // r12
  int v55; // esi
  int v56; // eax
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  _QWORD *v66; // rax
  unsigned int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v69; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v70; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+70h] [rbp-90h]
  struct DXGHWQUEUE *v73; // [rsp+78h] [rbp-88h]
  char v74[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h]
  char v76; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_LOCK v77; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v78; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v79[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v80[8]; // [rsp+120h] [rbp+20h] BYREF
  _D3DKMT_SUBMITPRESENTTOHWQUEUE v81; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v82; // [rsp+740h] [rbp+640h] BYREF
  tagRECT v83; // [rsp+750h] [rbp+650h] BYREF
  struct tagRECT v84; // [rsp+760h] [rbp+660h] BYREF
  char v85[8]; // [rsp+770h] [rbp+670h] BYREF
  char v86[64]; // [rsp+778h] [rbp+678h] BYREF
  char v87[88]; // [rsp+7B8h] [rbp+6B8h] BYREF

  v3 = a3;
  v69 = 0;
  v67 = 0;
  v73 = a2;
  v70 = a1;
  LODWORD(v71) = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 346);
  if ( (_DWORD)v71 )
  {
    v4 = *((_QWORD *)v70 + 2);
    v5 = *(_QWORD *)(v4 + 1848);
    *(_QWORD *)&v84.left = v5;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79,
      (struct DXGDEVICE *)v4);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v80,
      &v70,
      1u);
    if ( !v80[0] )
    {
      v37 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v37 + 24) = 4765LL;
      WdLogEvent5_WdError(v37);
      LODWORD(v12) = -1073741801;
LABEL_27:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v80);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
      return (unsigned int)v12;
    }
    v75 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    v76 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, v4, 1, v8, 0);
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85, 0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
      v38[3] = v12;
      v38[4] = v4;
    }
    else
    {
      ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v5 + 2696), (unsigned int)v3, &v69, &v67);
      if ( v69 && v67 )
      {
LABEL_6:
        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v5 + 2696), v3);
        v14 = *(DXGADAPTER ***)(v5 + 2696);
        v68 = CddShadowPitch;
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(v14, v3);
        Width = CddDisplayMode->Width;
        Height = CddDisplayMode->Height;
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(v5 + 2696),
                                             (unsigned int)v3,
                                             1);
        memset(&v77, 0, sizeof(v77));
        v77.hAllocation = v67;
        v19 = CurrentOrientation;
        v82 = 0LL;
        v77.hDevice = *(_DWORD *)(v4 + 436);
        v72 = DXGDEVICE::Lock((DXGDEVICE *)v4, &v77, (struct COREDEVICEACCESS *)v85);
        if ( v72 < 0 )
        {
          v42 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v42 + 24) = 4848LL;
          WdLogEvent5_WdError(v42);
          LODWORD(v12) = v72;
        }
        else
        {
          if ( v77.pData )
          {
            if ( (_DWORD)v71 != 1 )
              goto LABEL_23;
            if ( ((v19 - 2) & 0xFFFFFFFD) == 0 )
            {
              Width = CddDisplayMode->Height;
              v44 = 2;
              Height = CddDisplayMode->Width;
              if ( v19 == D3DKMDT_VPPR_ROTATE90 )
                v44 = 4;
              v19 = v44;
            }
            v71 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL, v20) + 174);
            if ( !v71 )
              goto LABEL_23;
            v83 = 0LL;
            Global = DXGGLOBAL::GetGlobal(v24, v23);
            v26 = (LONG *)((char *)Global + 1400);
            if ( !GetShadowBufferDirtyRect(&v83, *((unsigned int *)Global + 350), *((_DWORD *)Global + 351)) )
              goto LABEL_23;
            v27 = v26[3];
            if ( v27 == 20 )
            {
              if ( *v26 > Width || v26[1] > Height )
                goto LABEL_23;
              left = v83.left;
              v82 = v83;
              v46 = *v26;
              right = v83.right;
              if ( *v26 == Width )
              {
                v22 = (unsigned int)v82.left;
              }
              else
              {
                v22 = v83.left + ((Width - v46) >> 1);
                v82.left = v83.left + ((Width - v46) >> 1);
                right = ((Width - *v26) >> 1) + v83.right;
                v82.right = right;
              }
              v48 = v26[1];
              top = v82.top;
              if ( v48 == Height )
              {
                bottom = v82.bottom;
              }
              else
              {
                top = ((Height - v48) >> 1) + v82.top;
                v82.top = top;
                bottom = ((Height - v26[1]) >> 1) + v82.bottom;
                v82.bottom = bottom;
              }
              if ( (int)v22 >= 0
                && (int)v22 <= (int)right
                && top >= 0
                && top <= (int)bottom
                && right <= Width
                && bottom <= Height
                && v83.left >= 0 )
              {
                v51 = v83.right;
                if ( v83.left <= v83.right )
                {
                  v52 = v83.top;
                  if ( v83.top >= 0 )
                  {
                    v53 = v83.bottom;
                    if ( v83.top <= v83.bottom && v83.right <= (unsigned int)*v26 && v83.bottom <= (unsigned int)v26[1] )
                    {
                      if ( v83.top < (unsigned int)v83.bottom )
                      {
                        v54 = v71;
                        v55 = v68;
                        do
                        {
                          if ( left < v51 )
                          {
                            do
                            {
                              v56 = 3 * left++;
                              v57 = v56 + v26[2] * v52;
                              v58 = (unsigned int)(4 * v22);
                              LODWORD(v22) = v22 + 1;
                              *(_DWORD *)((char *)v77.pData + (unsigned int)(v55 * top) + v58) = v54[v57] | ((v54[(unsigned int)(v57 + 1)] | (v54[(unsigned int)(v57 + 2)] << 8)) << 8);
                              v51 = v83.right;
                            }
                            while ( left < v83.right );
                            LODWORD(v22) = v82.left;
                            v53 = v83.bottom;
                            left = v83.left;
                          }
                          ++top;
                          ++v52;
                        }
                        while ( v52 < v53 );
                        v5 = *(_QWORD *)&v84.left;
                      }
                      goto LABEL_16;
                    }
                  }
                }
              }
              if ( byte_1C00B1FF7 )
              {
                DxgCreateLiveDumpWithWdLogs(
                  0x193u,
                  0x809uLL,
                  (unsigned int)(*v26 << 16) | (unsigned __int64)(unsigned __int16)v26[1],
                  (unsigned __int16)Height | (unsigned __int64)(Width << 16),
                  0LL,
                  0);
                byte_1C00B1FF7 = 0;
              }
              v31 = -1073741823;
            }
            else
            {
              if ( v27 != 22 )
                goto LABEL_23;
              v84.left = 0;
              v84.top = 0;
              v28 = v26[2];
              v29 = v26[1];
              v30 = *v26;
              v84.right = Width;
              v84.bottom = Height;
              v31 = DxgkpBlitA8R8R8G8(v71, v30, v29, v28, v19, (unsigned __int8 *)v77.pData, v68, &v84, &v83, &v82);
            }
            if ( v31 < 0 )
              goto LABEL_23;
LABEL_16:
            if ( *(_QWORD *)(v4 + 1848) == *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) )
            {
              memset(&v81, 0, sizeof(v81));
              v68 = 0;
              if ( v73 )
              {
                v68 = *((_DWORD *)v73 + 6);
                v81.hHwQueues = (D3DKMT_HANDLE *)&v68;
              }
              v81.PrivatePresentData.Flags.Value |= 1u;
              v81.PrivatePresentData.hDevice = *((_DWORD *)v70 + 6);
              v81.PrivatePresentData.pSrcSubRects = &v83;
              v81.PrivatePresentData.hSource = v67;
              v81.PrivatePresentData.hDestination = v69;
              v81.PrivatePresentData.DstRect = v82;
              v81.PrivatePresentData.SubRectCnt = 1;
              v81.PrivatePresentData.SrcRect = v82;
              v83 = v82;
              v34 = DXGCONTEXT::PresentFromCdd(
                      v70,
                      &v81,
                      v3,
                      (struct COREDEVICEACCESS *)v85,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)v74,
                      &v70);
              if ( v34 < 0 )
              {
LABEL_77:
                v61 = WdLogNewEntry5_WdError(v33, v32);
                *(_QWORD *)(v61 + 24) = v34;
                WdLogEvent5_WdError(v61);
LABEL_23:
                v83.left = *(_DWORD *)(v4 + 436);
                v83.top = 1;
                *(_QWORD *)&v83.right = &v67;
                v35 = DXGDEVICE::Unlock((DXGDEVICE *)v4, (const struct _D3DKMT_UNLOCK *)&v83, 0LL, v22);
                if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v5) )
                {
                  if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v5 + 2696), v3) )
                  {
                    if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v5 + 2696), (unsigned int)v3) )
                    {
                      if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v5 + 2696), (unsigned int)v3) )
                      {
                        v62 = ADAPTER_DISPLAY::PresentCddPrimary(
                                *(ADAPTER_DISPLAY **)(v5 + 2696),
                                v70,
                                v3,
                                (struct COREDEVICEACCESS *)v85);
                        v65 = v62;
                        if ( v62 < 0 )
                        {
                          v66 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
                          v66[3] = v70;
                          v66[4] = v65;
                          v66[5] = 5112LL;
                          WdLogEvent5_WdError(v66);
                        }
                      }
                    }
                  }
                }
                LODWORD(v12) = v35;
                goto LABEL_25;
              }
              v33 = *(unsigned int **)(v5 + 2600);
              v32 = *v33;
              if ( (v32 & 0x10) != 0 )
                PresentQualcommPanelRefreshWorkaround(v70, (struct DXGADAPTER *)v5, v3);
            }
            else
            {
              v59 = *(_QWORD *)(v5 + 2696);
              *(&v78.VidPnSourceId + 1) = 0;
              *(&v78.NumDirtyRects + 1) = 0;
              v78.pfnPresentDisplayOnlyProgress = 0LL;
              ADAPTER_DISPLAY::GetCurrentOrientation(v59, (unsigned int)v3, 1);
              v78.Flags.Value = 0;
              v78.NumMoves = 0;
              v78.pMoves = 0LL;
              v78.pSource = v77.pData;
              v78.Pitch = v68;
              v78.pDirtyRect = &v82;
              v60 = *(_QWORD *)(v5 + 2696);
              v78.VidPnSourceId = v3;
              v78.BytesPerPixel = 4;
              v78.NumDirtyRects = 1;
              v33 = *(unsigned int **)(v60 + 384);
              if ( v33 && (unsigned int)v3 < *v33 && (v32 = *((_QWORD *)v33 + 1)) != 0 )
                v34 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v32 + 2904 * v3), &v78);
              else
                v34 = -1073741811;
            }
            if ( v34 >= 0 )
              goto LABEL_23;
            goto LABEL_77;
          }
          v43 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v43 + 24) = 4854LL;
          WdLogEvent5_WdError(v43);
          LODWORD(v12) = -1073741823;
        }
LABEL_25:
        COREACCESS::~COREACCESS((COREACCESS *)v87);
        COREACCESS::~COREACCESS((COREACCESS *)v86);
        if ( v76 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
        goto LABEL_27;
      }
      v39 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v5 + 2696),
              (struct DXGDEVICE *)v4,
              v3,
              &v69,
              &v67,
              (struct COREDEVICEACCESS *)v85);
      v12 = v39;
      if ( v39 == -1073741637 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v41, v40);
        v12 = -1071775482LL;
      }
      else
      {
        if ( v39 >= 0 )
          goto LABEL_6;
        v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v41, v40);
      }
      v38[4] = v3;
      v38[3] = v5;
      v38[5] = v12;
    }
    WdLogEvent5_WdEvent(v38);
    goto LABEL_25;
  }
  return 0LL;
}
