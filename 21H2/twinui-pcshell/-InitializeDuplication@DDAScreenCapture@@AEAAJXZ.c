/*
 * XREFs of ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x180293C44
 * Callers:
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1802935A0 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 *     ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x180293B08 (-Initialize@DDAScreenCapture@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DDAScreenCapture::InitializeDuplication(DDAScreenCapture *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // rdi
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // r14
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, GUID *, char *); // rdi
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, DDAScreenCapture *); // rbx
  int v23; // eax
  __int64 (__fastcall ***v25)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-49h] BYREF
  __int64 v26; // [rsp+28h] [rbp-41h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v28[88]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v27[0] = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
  v3 = **v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
  v4 = v3(v2, &GUID_6007896c_3244_4afd_bf18_a6d3beda5023, v27);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v26 = 0LL;
    v6 = v27[0];
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27[0] + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v8 = v7(v6, &v26);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v25 = 0LL;
      v9 = 0;
      do
      {
        v10 = v26;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v26 + 56LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        v12 = v11(v10, v9, &v25);
        v5 = v12;
        if ( !++v9 )
        {
          v5 = -2147418113;
          v18 = 2147549183LL;
          v19 = 105LL;
          goto LABEL_20;
        }
        if ( v12 < 0 )
        {
          v18 = (unsigned int)v12;
          v19 = 91LL;
          goto LABEL_20;
        }
        v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), _BYTE *))(*v25)[7])(v25, v28);
        v5 = v13;
        if ( v13 < 0 )
        {
          v18 = (unsigned int)v13;
          v19 = 94LL;
          goto LABEL_20;
        }
      }
      while ( v29 != *((_QWORD *)this + 16) );
      v14 = (_QWORD *)((char *)this + 120);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
      v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v25;
      v16 = **v25;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
      v17 = v16(v15, &GUID_00cddea8_939b_4b83_a340_a685226666cc, (char *)this + 120);
      v5 = v17;
      if ( v17 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 56LL))(*v14, (char *)this + 8);
        v5 = v20;
        if ( v20 >= 0 )
        {
          v21 = *v14;
          v22 = *(__int64 (__fastcall **)(__int64, _QWORD, DDAScreenCapture *))(*(_QWORD *)*v14 + 176LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
          v23 = v22(v21, *((_QWORD *)this + 13), this);
          v5 = v23;
          if ( v23 >= 0 )
          {
            v5 = 0;
            goto LABEL_21;
          }
          v18 = (unsigned int)v23;
          v19 = 111LL;
        }
        else
        {
          v18 = (unsigned int)v20;
          v19 = 110LL;
        }
      }
      else
      {
        v18 = (unsigned int)v17;
        v19 = 109LL;
      }
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)v18);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
  return v5;
}
