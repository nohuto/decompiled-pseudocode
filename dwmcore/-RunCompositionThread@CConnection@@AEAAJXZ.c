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
  qword_1803E2C88 = v2;
  v3 = operator new(0x40uLL);
  if ( v3 )
    v4 = (void *)anonymous_namespace_::State::State(v3);
  else
    v4 = 0LL;
  qword_1803E2C80 = v4;
  v5 = DefaultHeap::Alloc(0x78uLL);
  if ( v5 )
    v6 = CEnergyReporter::CEnergyReporter(v5);
  else
    v6 = 0LL;
  qword_1803E2C90 = v6;
  v7 = (CProcessAttributionReporter *)DefaultHeap::Alloc(0x80uLL);
  if ( !v7 )
  {
    qword_1803E2C98 = 0LL;
LABEL_36:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  qword_1803E2C98 = CProcessAttributionReporter::CProcessAttributionReporter(v7);
  if ( !qword_1803E2C98 )
    goto LABEL_36;
  v8 = DefaultHeap::Alloc(0x50uLL);
  if ( !v8 )
  {
    qword_1803E2CA0 = 0LL;
LABEL_34:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v9 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v8);
  qword_1803E2CA0 = (CProcessResourceAttributionReporter *)v9;
  if ( !v9 )
    goto LABEL_34;
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
  v14 = qword_1803E2CA0;
  if ( qword_1803E2CA0 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_1803E2CA0);
    operator delete(v14, 0x50uLL);
  }
  v15 = qword_1803E2C98;
  qword_1803E2CA0 = 0LL;
  if ( qword_1803E2C98 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_1803E2C98);
    operator delete(v15, 0x80uLL);
  }
  v16 = qword_1803E2C90;
  qword_1803E2C98 = 0LL;
  if ( qword_1803E2C90 )
  {
    CEnergyReporter::~CEnergyReporter(qword_1803E2C90);
    operator delete(v16, 0x78uLL);
  }
  v17 = qword_1803E2C80;
  qword_1803E2C90 = 0LL;
  if ( qword_1803E2C80 )
  {
    anonymous_namespace_::State::_State(qword_1803E2C80);
    operator delete(v17, 0x40uLL);
  }
  v18 = qword_1803E2C88;
  qword_1803E2C80 = 0LL;
  if ( qword_1803E2C88 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_1803E2C88);
    operator delete(v18);
  }
  qword_1803E2C88 = 0LL;
  if ( qword_1803E7098 )
  {
    (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803E7098 + 16LL))(qword_1803E7098);
    qword_1803E7098 = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&qword_1803E70A0,
    0LL);
  return v11;
}
