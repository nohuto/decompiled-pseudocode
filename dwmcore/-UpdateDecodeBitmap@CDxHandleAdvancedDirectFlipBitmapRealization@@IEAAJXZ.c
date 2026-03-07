__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int IsValid; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char *v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  CDecodeBitmap *v8; // rdi
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD); // rcx
  struct ID3D11Texture2D *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int RectangleCount; // eax
  _DWORD v16[2]; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-21h] BYREF
  void *v18[10]; // [rsp+68h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+D0h] [rbp+5Fh]

  IsValid = CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(*((_QWORD *)this + 36) + 192LL));
  v4 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, IsValid, 0x114u, 0LL);
  }
  else if ( *((_BYTE *)this + 440) )
  {
    v5 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
    (**(void (__fastcall ***)(char *, _DWORD *))v5)(v5, v16);
    v17.left = 0;
    v17.top = 0;
    v17.right = v16[0];
    v17.bottom = v16[1];
    CRegion::CRegion((CRegion *)v18, &v17);
    v6 = FastRegion::CRegion::Subtract(
           (const struct FastRegion::Internal::CRgnData **)v18,
           *((const struct FastRegion::Internal::CRgnData ***)this + 53));
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
    v7 = *((_QWORD *)this + 47);
    v8 = (CDecodeBitmap *)*((_QWORD *)this + 36);
    v9 = *(_DWORD *)(v7 + 240);
    v10 = (__int64 (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v7 + 16) + 20LL) + v7 + 16);
    v11 = (struct ID3D11Texture2D *)(**v10)(v10);
    v12 = CDecodeBitmap::CopyRegion(v8, (const struct CRegion *)v18, v11, v9);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x127u, 0LL);
    }
    else
    {
      *(_BYTE *)(*((_QWORD *)this + 36) + 152LL) = 1;
      *((_BYTE *)this + 440) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v17 = 0LL;
        FastRegion::CRegion::GetBoundingRect((LONG **)v18, &v17);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v18);
        McTemplateU0xddddd_EventWriteTransfer(
          (unsigned int)v17.top,
          &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
          *((unsigned int *)this + 21) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 84)) << 32),
          RectangleCount,
          v17.left,
          v17.top,
          v17.right,
          v17.bottom);
      }
    }
    FastRegion::CRegion::FreeMemory(v18);
  }
  return v4;
}
