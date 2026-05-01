/*
 * XREFs of ?ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ @ 0x180460640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804F05E8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DesktopOperation::ConvertLayoutToDesktop(DesktopOperation *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64); // rbx
  int v14; // eax
  int v16[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-19h] BYREF
  int v19; // [rsp+60h] [rbp-9h]
  __int128 v20; // [rsp+68h] [rbp-1h] BYREF
  __int128 v21; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (DesktopOperation *)176));
  v18[1] = (__int64)v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v19 = v3;
  v4 = CAppLayoutOperation::_VerifyAndPrepareLayout((DesktopOperation *)((char *)this - 152), 0LL, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 80LL))(*((_QWORD *)this - 14), 2LL) )
  {
    *(_QWORD *)v16 = 0LL;
    v6 = *((_QWORD *)this - 14);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v6 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
    v8 = v7(v6, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
        (const char *)(unsigned int)v8);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
      goto LABEL_14;
    }
    v21 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v16 + 56LL))(*(_QWORD *)v16, 0LL, &v21);
    v18[0] = 0LL;
    v9 = *((_QWORD *)this - 14);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 120LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    v11 = v10(v9, *(_QWORD *)v16, 0xFFFFFFFFLL, 5LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v18);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
        (const char *)(unsigned int)v11);
LABEL_10:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
      goto LABEL_11;
    }
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v18[0] + 56LL))(v18[0], 0LL, &v20);
    DWORD2(v20) += (DWORD2(v21) - (int)v21) / 2;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v18[0] + 104LL))(v18[0], 0LL, &v20);
    v17 = 0LL;
    v12 = *((_QWORD *)this - 14);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 120LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v14 = v13(v12, *(_QWORD *)v16, 1LL);
    v5 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktopoperation.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      goto LABEL_10;
    }
    v22 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v17 + 56LL))(v17, 0LL, &v22);
    LODWORD(v22) = DWORD2(v20);
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v17 + 104LL))(v17, 0LL, &v22);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 2LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
  }
  *((_DWORD *)this - 18) = 33;
  v5 = 0;
LABEL_14:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
