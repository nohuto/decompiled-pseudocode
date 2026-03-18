/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D667C
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1800D6670 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034880 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038D40 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044D1C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CEACC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800D6788 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 *     _anonymous_namespace_::State::State @ 0x1800D6B1C (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800D6C3C (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800D6CD8 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800D6D40 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B5B34 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::State::_State @ 0x1801CDB58 (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x1801D1FB0 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     ??1CEnergyReporter@@AEAA@XZ @ 0x1801D2330 (--1CEnergyReporter@@AEAA@XZ.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x1801D24B4 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1801D2654 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 *     ??$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z @ 0x18028615C (--$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  LPVOID v3; // rax
  void *v4; // rax
  void *v5; // rax
  CEnergyReporter *v6; // rax
  CProcessAttributionReporter *v7; // rax
  void *v8; // rax
  union _SLIST_HEADER *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  CProcessResourceAttributionReporter *v14; // rbx
  CProcessAttributionReporter *v15; // rbx
  CEnergyReporter *v16; // rbx
  void *v17; // rbx
  CProcessAttributionManager *v18; // rbx
  int v20; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CProcessAttributionManager *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  qword_1803E5C98 = v2;
  v3 = operator new(0x40uLL);
  if ( v3 )
    v4 = (void *)anonymous_namespace_::State::State(v3);
  else
    v4 = 0LL;
  qword_1803E5C88 = v4;
  v5 = DefaultHeap::Alloc(0x78uLL);
  if ( v5 )
    v6 = CEnergyReporter::CEnergyReporter(v5);
  else
    v6 = 0LL;
  qword_1803E5CA0 = v6;
  v7 = (CProcessAttributionReporter *)DefaultHeap::Alloc(0x80uLL);
  if ( !v7 )
  {
    qword_1803E5CA8 = 0LL;
LABEL_34:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  qword_1803E5CA8 = CProcessAttributionReporter::CProcessAttributionReporter(v7);
  if ( !qword_1803E5CA8 )
    goto LABEL_34;
  v8 = DefaultHeap::Alloc(0x50uLL);
  if ( !v8 )
  {
    qword_1803E5CB0 = 0LL;
LABEL_32:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v9 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v8);
  qword_1803E5CB0 = (CProcessResourceAttributionReporter *)v9;
  if ( !v9 )
    goto LABEL_32;
  InitializeSListHead(v9 + 1);
  v10 = CConnection::MainCompositionThreadLoop(this);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x79,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v10,
      v20);
  (*(void (__fastcall **)(CConnection *, __int64))(*(_QWORD *)this + 24LL))(this, 2291663905LL);
  v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v12 )
  {
    (**v12)(v12, 1LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v13 )
  {
    (**v13)(v13, 1LL);
    *((_QWORD *)this + 1) = 0LL;
  }
  v14 = qword_1803E5CB0;
  if ( qword_1803E5CB0 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_1803E5CB0);
    operator delete(v14, 0x50uLL);
  }
  v15 = qword_1803E5CA8;
  qword_1803E5CB0 = 0LL;
  if ( qword_1803E5CA8 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_1803E5CA8);
    operator delete(v15, 0x80uLL);
  }
  v16 = qword_1803E5CA0;
  qword_1803E5CA8 = 0LL;
  if ( qword_1803E5CA0 )
  {
    CEnergyReporter::~CEnergyReporter(qword_1803E5CA0);
    operator delete(v16, 0x78uLL);
  }
  v17 = qword_1803E5C88;
  qword_1803E5CA0 = 0LL;
  if ( qword_1803E5C88 )
  {
    anonymous_namespace_::State::_State(qword_1803E5C88);
    operator delete(v17, 0x40uLL);
  }
  v18 = qword_1803E5C98;
  qword_1803E5C88 = 0LL;
  if ( qword_1803E5C98 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_1803E5C98);
    operator delete(v18);
  }
  qword_1803E5C98 = 0LL;
  ReleaseInterface<IDXGIFactory5>(&qword_1803EA1A8);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&qword_1803EA1B0,
    0LL);
  return v11;
}
