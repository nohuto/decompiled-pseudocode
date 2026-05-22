/*
 * XREFs of ?Initialize@CursorManager@@IEAAJXZ @ 0x180186F60
 * Callers:
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x180186E7C (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029D84 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C5DC (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180090C60 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x180186B78 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Det.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorManager::Initialize(CursorManager *this)
{
  _QWORD *v2; // rsi
  int Descriptor; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, __int64 *); // rbx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  int v17; // [rsp+80h] [rbp+38h] BYREF
  __int64 v18; // [rsp+88h] [rbp+40h] BYREF
  __int64 v19; // [rsp+90h] [rbp+48h] BYREF
  CursorManager *v20; // [rsp+98h] [rbp+50h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v2 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 4);
  Descriptor = CoreUICreate(v2);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    v6 = 66LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)Descriptor);
    goto LABEL_19;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v14, v4, (__int64)L"System\\Input\\CursorManagerPort");
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    v6 = 70LL;
    goto LABEL_13;
  }
  v7 = *v2;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)*v2 + 56LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v19);
  Descriptor = v8(v7, v14, L"System\\Input\\CursorManagerPort", &v19);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    v6 = 75LL;
    goto LABEL_13;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), CursorManager *, __int64, char *))(*(_QWORD *)*v2 + 96LL))(
                 *v2,
                 CursorManager::OnCoreMessageStatic,
                 this,
                 v19,
                 (char *)this + 64);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    v6 = 81LL;
    goto LABEL_13;
  }
  v9 = *v2;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
  Descriptor = v10(v9, &v18);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    v6 = 83LL;
    goto LABEL_13;
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v18 + 40LL))(
                 v18,
                 L"System\\Input\\CursorManagerEndpoint",
                 *((_QWORD *)this + 8),
                 1LL);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    v6 = 88LL;
    goto LABEL_13;
  }
  v20 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,CursorManager *>(
          (MessageProxyReconnectAdapter **)this + 6,
          &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
          (const unsigned __int16 **)&off_1801B9F78,
          &v20);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      98LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v17 = 1;
  v12 = RtlPublishWnfStateData(WNF_ISM_CURSOR_MANAGER_READY, 0LL, &v17, 4LL);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v12);
  v5 = 0;
LABEL_19:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v14);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v19);
  return v5;
}
