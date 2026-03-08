/*
 * XREFs of ?OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z @ 0x1802A8730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___::_lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___ @ 0x1802A836C (wil--details--lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___--_lambda_call__lambda_40e4.c)
 */

__int64 __fastcall CHolographicViewer::OpenOnDevice(CHolographicViewer *this, struct IDXGIDevice *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *); // rbp
  int v10; // eax
  char *v12; // [rsp+40h] [rbp-28h] BYREF
  char v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *ppFactory; // [rsp+70h] [rbp+8h] BYREF

  ppFactory = 0LL;
  v12 = (char *)this - 72;
  v13 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
  v4 = CreateDXGIFactory2(0, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &ppFactory);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)(unsigned int)v4);
LABEL_10:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
    wil::details::lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___::_lambda_call__lambda_40e44a5d63de77d0b0d6917c6e57f0c5___(&v12);
    return v5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  if ( *((_DWORD *)this + 26) == 3 )
  {
    v5 = -2005270490;
    v6 = 144LL;
    v7 = 2289696806LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)v7);
    ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 26) != 1 )
  {
    v5 = -2147483635;
    v6 = 147LL;
    v7 = 2147483661LL;
    goto LABEL_9;
  }
  v8 = ppFactory;
  v9 = *(__int64 (__fastcall **)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *))(*(_QWORD *)ppFactory
                                                                                                + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  v10 = v9(v8, a2, *((_QWORD *)this + 9), 0LL, 5, 0x10000000, (char *)this + 80);
  v5 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v6 = 155LL;
    goto LABEL_9;
  }
  *((_QWORD *)this + 9) = 0LL;
  _InterlockedExchange((volatile __int32 *)this + 26, 2);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
  return 0LL;
}
