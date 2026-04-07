/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180008810 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BE34 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000D790 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D990 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000E33C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000E604 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E900 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180011540 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800115D4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014E98 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180016720 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800334D0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B520 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800523B8 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180085058 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int updated; // edi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  CSecondaryWindowRepresentation *v11; // rcx
  CSecondaryWindowRepresentation *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  CBaseObject *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x2000) != 0 )
  {
    updated = CThumbnailVisual::EnsureVisualBrush(this);
    if ( updated < 0 )
    {
      v14 = 62LL;
      goto LABEL_41;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 20) &= ~0x2000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v11 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
    if ( v11 )
    {
      updated = CSecondaryWindowRepresentation::Validate(v11);
      if ( updated < 0 )
      {
        v14 = 73LL;
        goto LABEL_41;
      }
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x80u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    if ( updated < 0 )
    {
      v14 = 81LL;
      goto LABEL_41;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  updated = CRenderDataVisual::UpdateLayout(this, 0);
  if ( updated < 0 )
  {
    v14 = 86LL;
    goto LABEL_41;
  }
  v4 = *((_DWORD *)this + 20);
  if ( (v4 & 0x1000) != 0 )
  {
    updated = CThumbnailVisual::UpdateDestinationRect(this);
    if ( updated < 0 )
    {
      v14 = 93LL;
      goto LABEL_41;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 20) &= ~0x1000u;
    v4 = *((_DWORD *)this + 20);
  }
  if ( (v4 & 0x8000) != 0 )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
      {
        updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        if ( updated < 0 )
        {
          v14 = 105LL;
          goto LABEL_41;
        }
        updated = CRenderDataVisual::ClearInstructions(this);
        if ( updated < 0 )
        {
          v14 = 106LL;
          goto LABEL_41;
        }
        v15 = (CBaseObject *)*((_QWORD *)this + 47);
        if ( v15 )
        {
          CBaseObject::Release(v15);
          *((_QWORD *)this + 47) = 0LL;
        }
        *((_BYTE *)this + 474) = 0;
        updated = CThumbnailVisual::EnsureVisualBrush(this);
        if ( updated < 0 )
        {
          v14 = 109LL;
          goto LABEL_41;
        }
        updated = CThumbnailVisual::UpdateSourceRect(this);
        if ( updated < 0 )
        {
          v14 = 110LL;
          goto LABEL_41;
        }
        updated = CThumbnailVisual::UpdateDestinationRect(this);
        if ( updated < 0 )
        {
          v14 = 111LL;
          goto LABEL_41;
        }
        *((_DWORD *)this + 20) &= 0xFFFE8F7F;
      }
    }
    else
    {
      if ( !CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0q_EtwEventWriteTransfer(v5, &UdwmThumbnailVisualValidated_Info, 0LL);
        updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        if ( updated < 0 )
        {
          v14 = 128LL;
        }
        else
        {
          updated = CRenderDataVisual::ClearInstructions(this);
          if ( updated < 0 )
          {
            v14 = 129LL;
          }
          else
          {
            updated = CThumbnailVisual::EnsureVisualBrush(this);
            if ( updated >= 0 )
            {
              v6 = *((_QWORD *)this + 47);
              if ( v6 )
              {
                v7 = *(_QWORD *)(v6 + 48);
                if ( v7 )
                {
                  updated = CVisualProxy::SetClip(*(CVisualProxy **)(v7 + 16), 0LL);
                  if ( updated < 0 )
                  {
                    v14 = 134LL;
                    goto LABEL_41;
                  }
                }
              }
              if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 34LL) )
                CVisual::ClearInterpolationMode(this);
              goto LABEL_24;
            }
            v14 = 130LL;
          }
        }
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v14 = 121LL;
        goto LABEL_41;
      }
      updated = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
      if ( updated < 0 )
      {
        v14 = 122LL;
        goto LABEL_41;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v13, &UdwmThumbnailVisualValidated_Info, 1LL);
    }
LABEL_24:
    *((_DWORD *)this + 20) &= ~0x8000u;
    v4 = *((_DWORD *)this + 20);
  }
  if ( (v4 & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x30000000) == 0x10000000 )
      CVisual::SetInterpolationMode((unsigned int *)this, 6u);
    else
      CVisual::ClearInterpolationMode(this);
    *((_DWORD *)this + 20) &= ~0x20000u;
    v4 = *((_DWORD *)this + 20);
  }
  if ( (v4 & 0x40000) != 0 )
  {
    v12 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
    if ( v12 )
    {
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v12,
        *((struct CCachedVisualImageProxy **)this + 54),
        *((struct CImageLegacyMilBrushProxy **)this + 48),
        (CThumbnailVisual *)((char *)this + 500));
      v4 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v4 & 0xFFFBFFFF;
  }
  v8 = CRenderDataVisual::ValidateVisual(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAE,
    (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
