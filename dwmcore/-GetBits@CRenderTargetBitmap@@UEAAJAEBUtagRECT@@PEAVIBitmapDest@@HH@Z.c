__int64 __fastcall CRenderTargetBitmap::GetBits(
        CRenderTargetBitmap *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  char *v10; // rcx
  unsigned int right; // ecx
  LONG left; // r8d
  LONG top; // eax
  unsigned int bottom; // edx
  __int64 v15; // rax
  __int64 (__fastcall ***v16)(_QWORD); // rcx
  int v17; // eax
  unsigned int v18; // ebx
  char *v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(char *, __int64, __int64 (__fastcall ****)(_QWORD)); // rdi
  __int64 v22; // rax
  char *v23; // rcx
  struct CD3DDevice *v24; // rdi
  char *v25; // rcx
  struct ID3D11Texture2D *v26; // rax
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-41h]
  __int64 (__fastcall ***v30)(_QWORD); // [rsp+40h] [rbp-21h] BYREF
  _DWORD v31[2]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v32[4]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v33[24]; // [rsp+60h] [rbp-1h] BYREF

  v5 = *((_QWORD *)this - 13);
  v30 = 0LL;
  v10 = (char *)this + *(int *)(v5 + 20) - 104;
  (**(void (__fastcall ***)(char *, _DWORD *))v10)(v10, v31);
  left = a2->left;
  if ( a2->left < 0
    || (top = a2->top, top < 0)
    || (right = a2->right, right > v31[0])
    || (bottom = a2->bottom, bottom > v31[1]) )
  {
    v18 = -2147024809;
    v29 = 287;
    goto LABEL_16;
  }
  v32[2] = a2->right;
  v32[1] = top;
  v15 = *((_QWORD *)this - 13);
  v32[0] = left;
  v32[3] = bottom;
  v16 = (__int64 (__fastcall ***)(_QWORD))((char *)this + *(int *)(v15 + 12) - 104);
  v17 = (**v16)(v16);
  v18 = v17;
  if ( v17 < 0 )
  {
    v29 = 268;
    goto LABEL_13;
  }
  v19 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 12LL) - 104;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v19 + 24LL))(v19) )
  {
    v18 = -2147024891;
    v29 = 272;
LABEL_16:
    v28 = v18;
    goto LABEL_17;
  }
  v20 = *(int *)(*((_QWORD *)this - 13) + 20LL);
  v21 = *(__int64 (__fastcall **)(char *, __int64, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)((char *)this
                                                                                                 + v20
                                                                                                 - 104)
                                                                                     + 48LL);
  v22 = (**(__int64 (__fastcall ***)(CRenderTargetBitmap *, _BYTE *))this)(this, v33);
  v17 = v21((char *)this + v20 - 104, v22, &v30);
  v18 = v17;
  if ( v17 < 0 )
  {
    v29 = 275;
    goto LABEL_13;
  }
  v23 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 12LL) - 104;
  v24 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v23 + 8LL))(v23);
  v25 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 16LL) - 104;
  (**(void (__fastcall ***)(char *, _BYTE *))v25)(v25, v33);
  v26 = (struct ID3D11Texture2D *)(**v30)(v30);
  v17 = CD3DDevice::CopyTexture2D(v24, v26, (__int64)v32, (__int64)a3, a4, a5);
  v18 = v17;
  if ( v17 < 0 )
  {
    v29 = 283;
LABEL_13:
    v28 = v17;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(right, 0LL, 0, v28, v29, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
  return v18;
}
