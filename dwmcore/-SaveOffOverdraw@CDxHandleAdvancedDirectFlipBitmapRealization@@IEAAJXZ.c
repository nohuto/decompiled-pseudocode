__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOffOverdraw(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  char *v2; // rcx
  char *v3; // rcx
  __int64 v4; // rax
  CDecodeBitmap *v5; // rdi
  char *v6; // rcx
  const struct PixelFormatInfo *v7; // rbx
  char *v8; // rcx
  const struct D2D_SIZE_U *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  CDecodeBitmap *v14; // rdi
  unsigned int v15; // ebx
  __int64 (__fastcall ***v16)(_QWORD); // rcx
  struct ID3D11Texture2D *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  LONG **v20; // rcx
  int **v21; // r9
  int RectangleCount; // eax
  _BYTE v24[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v25[4]; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+4Ch] [rbp-34h]
  int v27; // [rsp+50h] [rbp-30h]
  char v28; // [rsp+54h] [rbp-2Ch]
  _BYTE v29[8]; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-20h] BYREF

  v2 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
  (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v2 + 32LL))(v2, v24);
  v3 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
  (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v3 + 16LL))(v3, v25);
  v4 = *((_QWORD *)this + 2);
  v26 = 0;
  v5 = (CDecodeBitmap *)*((_QWORD *)this + 36);
  v27 = 0;
  v28 = 0;
  v6 = (char *)this + *(int *)(v4 + 12) + 16;
  v7 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, struct tagRECT *))v6)(v6, &v30);
  v8 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
  v9 = (const struct D2D_SIZE_U *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v8)(v8, v29);
  v10 = CDecodeBitmap::EnsureTargetBitmap(v5, v9, v7, (const struct RenderTargetInfo *)v24);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF2u, 0LL);
  }
  else
  {
    v13 = *((_QWORD *)this + 47);
    v14 = (CDecodeBitmap *)*((_QWORD *)this + 36);
    v15 = *(_DWORD *)(v13 + 240);
    v16 = (__int64 (__fastcall ***)(_QWORD))(v13 + 16 + *(int *)(*(_QWORD *)(v13 + 16) + 20LL));
    v17 = (struct ID3D11Texture2D *)(**v16)(v16);
    v18 = CDecodeBitmap::CopyRegion(v14, *((const struct CRegion **)this + 53), v17, v15);
    v12 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xF7u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 440) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v20 = (LONG **)*((_QWORD *)this + 53);
        v30 = 0LL;
        FastRegion::CRegion::GetBoundingRect(v20, &v30);
        RectangleCount = FastRegion::CRegion::GetRectangleCount(v21);
        McTemplateU0xddddd_EventWriteTransfer(
          (unsigned int)v30.top,
          &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
          *((unsigned int *)this + 21) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 84)) << 32),
          RectangleCount,
          v30.left,
          v30.top,
          v30.right,
          v30.bottom);
      }
    }
  }
  return v12;
}
