void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        struct _KTHREAD **this,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        unsigned int *a5,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a6,
        unsigned int *a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a8)
{
  __int64 v10; // rsi
  unsigned int v11; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v12; // edi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v13; // ebp
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  struct _KTHREAD *v17; // rcx
  UINT v18; // eax
  UINT v19; // ecx
  __int64 v20; // r9
  __int64 v21; // rcx
  UINT v22; // r12d
  __int64 v23; // r8
  struct _KTHREAD *v24; // rdx
  __int64 v25; // rax
  bool v26; // zf
  struct _DISPLAY_PLANE_CONFIG_STATE *v27; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v29; // rsi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v31; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rcx
  RECT v34; // xmm1
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v36; // rdx
  RECT v37; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v38; // [rsp+50h] [rbp-78h]
  UINT v39; // [rsp+54h] [rbp-74h]
  __int64 v40; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  int v43; // [rsp+D0h] [rbp+8h]
  unsigned int v44; // [rsp+D8h] [rbp+10h]

  if ( this[79] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 10311LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayStateMutexOwner()", 10311LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 0LL;
  v11 = 0;
  v43 = 0;
  v44 = 0;
  if ( a2 == -1 )
    v12 = *((_DWORD *)this + 24);
  else
    v12 = a2 + 1;
  v13 = 0;
  v38 = v12;
  if ( a2 != -1 )
    v13 = a2;
  if ( v13 < v12 )
  {
    v14 = a8;
    v15 = 4000LL * v13;
    v16 = 50LL * v13;
    v42 = v16;
    do
    {
      v17 = this[16];
      if ( *((_BYTE *)v17 + v15 + 762) )
      {
        v18 = *(_DWORD *)((char *)v17 + v15 + 3760);
        v19 = *(_DWORD *)((char *)v17 + v15 + 3764);
        v20 = v13;
        if ( v19 <= v18 )
          v19 = v18;
        v39 = v19;
        if ( v19 )
        {
          v21 = 0LL;
          v22 = 0;
          v23 = 0LL;
          v40 = 0LL;
          v41 = 0LL;
          while ( 1 )
          {
            v24 = this[16];
            if ( *((_BYTE *)v24 + v15 + v23 + 2904) )
            {
              if ( (*((_DWORD *)v24 + 20 * v16 + 20 * v21 + 732) & 1) != 0 )
              {
                v25 = 80 * (v23 + 50 * v20);
                v26 = (struct _KTHREAD *)((char *)v24 + v25 + 2920) == 0LL;
                v27 = (struct _KTHREAD *)((char *)v24 + v25 + 2920);
LABEL_20:
                if ( !v26 && (unsigned int)v10 < a3 )
                {
                  a4[v10] = *(struct DXGALLOCATION **)v27;
                  v29 = v10;
                  pPlaneAttributes = a6[v29].pPlaneAttributes;
                  a6[v29].LayerIndex = v22;
                  a6[v29].VidPnSourceId = v13;
                  GetPlaneConfigState(
                    v27,
                    &pPlaneAttributes->Flags,
                    &pPlaneAttributes->SrcRect,
                    &pPlaneAttributes->DstRect,
                    &pPlaneAttributes->ClipRect,
                    &pPlaneAttributes->Rotation,
                    &pPlaneAttributes->Blend,
                    &pPlaneAttributes->ColorSpace,
                    &pPlaneAttributes->SDRWhiteLevel);
                  v16 = v42;
                  a6[v29].pPlaneAttributes->DirtyRectCount = 0;
                  a6[v29].pPlaneAttributes->pDirtyRects = 0LL;
                  v31 = a6[v29].pPlaneAttributes;
                  v23 = v40;
                  v10 = (unsigned int)++v43;
                  v31->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
                }
              }
            }
            else
            {
              LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                            (struct _KTHREAD *)((char *)v24 + 4000 * v20),
                                            v22);
              v23 = v40;
              v27 = LatestPlaneConfigInternal;
              if ( LatestPlaneConfigInternal )
              {
                v26 = (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) == 0;
                goto LABEL_20;
              }
            }
            ++v23;
            v21 = v41 + 1;
            v40 = v23;
            ++v22;
            ++v41;
            v20 = v13;
            if ( v22 >= v39 )
            {
              v14 = a8;
              v11 = v44;
              v12 = v38;
              v20 = v13;
              break;
            }
          }
        }
        v32 = this[16];
        if ( !*((_BYTE *)v32 + v15 + 3720) )
        {
          LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v32 + 4000 * v20));
          if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
            goto LABEL_32;
          v36 = v11;
          v14[v36].PostComposition.Flags.Value = 0;
          v14[v36].VidPnSourceId = v13;
          v14[v36].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
          v37 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
          v14[v36].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v14[v36].PostComposition.DstRect = v37;
          goto LABEL_31;
        }
        if ( *((_BYTE *)v32 + v15 + 3724) )
        {
          v33 = v11;
          v14[v33].PostComposition.Flags.Value = 0;
          v14[v33].VidPnSourceId = v13;
          v14[v33].PostComposition.SrcRect = *(RECT *)((char *)this[16] + v15 + 3728);
          v34 = *(RECT *)((char *)this[16] + v15 + 3744);
          v14[v33].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v14[v33].PostComposition.DstRect = v34;
LABEL_31:
          v44 = ++v11;
        }
      }
LABEL_32:
      v16 += 50LL;
      ++v13;
      v15 += 4000LL;
      v42 = v16;
    }
    while ( v13 < v12 );
  }
  *a5 = v10;
  *a7 = v11;
}
