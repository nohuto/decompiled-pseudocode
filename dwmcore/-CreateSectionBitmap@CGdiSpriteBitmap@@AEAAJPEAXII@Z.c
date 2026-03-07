__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(CGdiSpriteBitmap *this, void *a2, UINT32 a3, UINT32 a4)
{
  struct IGDIBitmapRealization *v4; // rbx
  signed int v9; // edi
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  HANDLE CurrentProcess; // rdi
  HANDLE v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed int LastError; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct IBitmapRealization *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, char *); // rcx
  int v25; // eax
  __int64 v26; // rcx
  char *v27; // rcx
  struct IGDIBitmapRealization *v28[2]; // [rsp+40h] [rbp-10h] BYREF
  struct D2D_SIZE_U v29; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0LL;
  v28[0] = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  if ( !a3 || !a4 )
  {
    *((_QWORD *)this + 44) = a2;
    goto LABEL_9;
  }
  v10 = 4LL * a3;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x146u, 0LL);
LABEL_13:
    if ( a2 )
      CloseHandle(a2);
    goto LABEL_10;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v13 = GetCurrentProcess();
  if ( !DuplicateHandle(v13, a2, CurrentProcess, (LPHANDLE)this + 44, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v9, 0x150u, 0LL);
    goto LABEL_13;
  }
  v29.width = a3;
  v29.height = a4;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)v28);
  v14 = CGDISectionBitmapRealization::Create(
          a2,
          &v29,
          v10,
          (enum DXGI_FORMAT)*((_DWORD *)this + 32),
          (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 33),
          (unsigned __int8 **)this + 45,
          v28);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x15Eu, 0LL);
    v4 = v28[0];
  }
  else
  {
    if ( !*((_BYTE *)this + 146) )
    {
      v16 = *((_QWORD *)this + 55);
      *((struct IGDIBitmapRealization **)this + 55) = v28[0];
      if ( v16 )
      {
        v20 = v16 + 8 + *(int *)(*(_QWORD *)(v16 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_9;
    }
    v4 = v28[0];
    v29 = 0LL;
    if ( v28[0] )
      v21 = (struct IGDIBitmapRealization *)((char *)v28[0] + *(int *)(*((_QWORD *)v28[0] + 1) + 12LL) + 8);
    else
      v21 = 0LL;
    v22 = CColorKeyBitmapRealization::Create(
            v21,
            (CGdiSpriteBitmap *)((char *)this + 368),
            (struct IBitmapRealization **)&v29);
    v9 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x16Au, 0LL);
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 55);
      v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))(*(int *)(*(_QWORD *)(*(_QWORD *)&v29 + 8LL) + 4LL)
                                                             + *(_QWORD *)&v29
                                                             + 8LL);
      v25 = (**v24)(v24, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, (char *)this + 440);
      v9 = v25;
      if ( v25 >= 0 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
LABEL_9:
        *((_DWORD *)this + 106) = a3;
        *((_DWORD *)this + 107) = a4;
        *((_DWORD *)this + 108) = v10;
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x16Cu, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
  }
LABEL_10:
  if ( v4 )
  {
    v27 = (char *)v4 + *(int *)(*((_QWORD *)v4 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v9;
}
