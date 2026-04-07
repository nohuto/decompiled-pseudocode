/*
 * XREFs of ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18000DEE0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180096B70 (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180096C7C (-Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180096D40 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800B7068 (-SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B70C8 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B7284 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B7318 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CDCompThumbnailData::EnsureThumbnailVisual(CDCompThumbnailData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct CDCompDesktopThumbnail *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  struct CDCompDesktopThumbnailCVI *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  CDesktopThumbnailCVIVisual *v16; // rbx
  struct CDesktopThumbnailCVI *v17; // rdx
  CDesktopThumbnailCVIVisual *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  CDesktopThumbnailCVIVisual *v20; // [rsp+60h] [rbp+40h] BYREF
  struct CDCompDesktopThumbnailCVI *v21; // [rsp+68h] [rbp+48h] BYREF
  struct CDCompDesktopThumbnail *v22; // [rsp+70h] [rbp+50h] BYREF

  if ( *((_DWORD *)this + 28) == 1 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
    updated = CDCompDesktopThumbnail::Create(&v22);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 8649LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)updated);
LABEL_25:
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
      return v6;
    }
    v8 = v22;
    *((_QWORD *)v22 + 35) = this;
    *((_QWORD *)v8 + 34) = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
    updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 8651LL;
      goto LABEL_9;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
    v9 = CDCompDesktopThumbnailCVI::Create(&v21);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = v21;
      v9 = CDCompDesktopThumbnailCVI::SetSourceRect(v21, (const struct tagRECT *)((char *)this + 56));
      v6 = v9;
      if ( v9 >= 0 )
      {
        v12 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
        if ( v12 < 0 )
          v12 = 0;
        LODWORD(v20) = v12;
        v13 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
        if ( v13 < 0 )
          v13 = 0;
        HIDWORD(v20) = v13;
        *((_QWORD *)v11 + 8) = v20;
        *((_QWORD *)v11 + 2) = v8;
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        v20 = 0LL;
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
        v14 = CDesktopThumbnailCVIVisual::Create(&v20);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v16 = v20;
          v17 = v21;
          v18 = v20;
          *((_QWORD *)v20 + 39) = *((_QWORD *)this + 2);
          *((_DWORD *)v18 + 85) = *((_DWORD *)this + 9);
          *((_BYTE *)v18 + 337) = 1;
          v14 = CDesktopThumbnailCVIVisual::SetVisual(v18, v17, (const struct tagRECT *)((char *)this + 56));
          v6 = v14;
          if ( v14 >= 0 )
          {
            CDesktopThumbnailCVIVisual::Update(
              v16,
              (const struct tagRECT *)((char *)this + 40),
              (double)*((unsigned __int8 *)this + 72) / 255.0);
            v20 = 0LL;
            *((_QWORD *)this + 13) = v16;
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
            return 0LL;
          }
          v15 = 8666LL;
        }
        else
        {
          v15 = 8660LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
        goto LABEL_24;
      }
      v10 = 8655LL;
    }
    else
    {
      v10 = 8654LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v9);
LABEL_24:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
    goto LABEL_25;
  }
  if ( *((_DWORD *)this + 28) )
    return 0LL;
  v2 = CThumbnailData::EnsureThumbnailVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21E2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
