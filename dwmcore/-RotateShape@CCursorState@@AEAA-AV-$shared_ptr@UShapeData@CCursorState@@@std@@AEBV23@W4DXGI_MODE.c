_QWORD *__fastcall CCursorState::RotateShape(__int64 a1, _QWORD *a2, int **a3, int a4)
{
  CComposition *v4; // rcx
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  unsigned int v9; // esi
  CSystemMemoryBitmap *v10; // rax
  CSystemMemoryBitmap *v11; // rax
  CSystemMemoryBitmap *v12; // rbx
  struct WICRect *v13; // r8
  bool v14; // r9
  int v15; // eax
  const char *v16; // r9
  unsigned int v17; // esi
  unsigned int v18; // esi
  __int64 v19; // rsi
  int v20; // ecx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  bool v23; // cf
  __int64 v24; // rbx
  __int64 v25; // rcx
  int v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+28h] [rbp-38h] BYREF
  struct IWICImagingFactory *v29; // [rsp+30h] [rbp-30h] BYREF
  struct IWICBitmapSource *v30; // [rsp+38h] [rbp-28h] BYREF
  struct IBitmapSource *v31; // [rsp+40h] [rbp-20h] BYREF
  CSystemMemoryBitmap *v32; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v35; // [rsp+90h] [rbp+30h] BYREF

  v4 = *(CComposition **)(a1 + 56);
  v29 = 0LL;
  if ( (int)CComposition::GetImagingFactory(v4, &v29) >= 0 )
  {
    lpVtbl = v29->lpVtbl;
    v28 = 0LL;
    if ( ((int (__fastcall *)(struct IWICImagingFactory *, __int64 *))lpVtbl->CreateBitmapFlipRotator)(v29, &v28) < 0
      || (v9 = (a4 - (*a3)[2] + 4) % 4,
          (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 64LL))(v28, *((_QWORD *)*a3 + 3), v9) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      v30 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v28)(
             v28,
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             &v30) >= 0 )
      {
        v31 = 0LL;
        if ( (int)HrCreateBitmapFromWICBitmapSource(v30, &v31) >= 0 )
        {
          v10 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
          if ( v10 )
            v11 = CSystemMemoryBitmap::CSystemMemoryBitmap(v10, 1);
          else
            v11 = 0LL;
          wil::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>(
            &v32,
            (__int64)v11);
          v12 = v32;
          if ( (int)CSystemMemoryBitmap::HrInit(v32, v31, v13, v14) >= 0 )
          {
            std::make_shared<CCursorState::ShapeData,>(v33);
            v15 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)*a3 + 3) + 24LL))(
                    *((_QWORD *)*a3 + 3),
                    &v35,
                    &v27);
            if ( v15 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                904LL,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
                (const char *)(unsigned int)v15,
                v27);
            v17 = v9 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                if ( v18 != 1 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    927LL,
                    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
                    v16);
                v19 = v33[0];
                *(_DWORD *)v33[0] = (*a3)[1];
                v20 = v35 - **a3;
              }
              else
              {
                v19 = v33[0];
                *(_DWORD *)v33[0] = v35 - **a3;
                v20 = v27 - (*a3)[1];
              }
            }
            else
            {
              v19 = v33[0];
              *(_DWORD *)v33[0] = v27 - (*a3)[1];
              v20 = **a3;
            }
            *(_DWORD *)(v19 + 4) = v20;
            v21 = 0LL;
            *(_DWORD *)(v19 + 8) = a4;
            *(_DWORD *)(v19 + 12) = (*a3)[3];
            do
            {
              *(_BYTE *)(v19 + v21 + 16) = *((_BYTE *)*a3 + v21 + 16);
              ++v21;
            }
            while ( v21 < 2 );
            v22 = (unsigned __int64)v12 + 48;
            v23 = v12 != 0LL;
            v24 = *(_QWORD *)(v19 + 24);
            v25 = v22 & -(__int64)v23;
            *(_QWORD *)(v19 + 24) = v25;
            if ( v25 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            a2[1] = v33[1];
            *a2 = v19;
          }
          else
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
        }
        else
        {
          *a2 = 0LL;
          a2[1] = 0LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  return a2;
}
