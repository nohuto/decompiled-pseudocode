void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rdi
  _QWORD *v3; // rdi
  void *v4; // rcx
  void ***v5; // rdi
  void **v6; // rax
  void **v7; // rcx
  void **v8; // rsi
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v13; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete(*((void **)this + 13));
  operator delete(*((void **)this + 15));
  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 19));
    operator delete(v2);
  }
  v3 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v3 )
  {
    v4 = (void *)v3[1];
    if ( v4 )
      CRefCountedBuffer::RefCountedBufferRelease(v4);
    operator delete(v3);
  }
  v5 = (void ***)((char *)this + 136);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (void **)v5 )
      break;
    if ( v6[1] != v5 || (v7 = (void **)*v6, *((void ***)*v6 + 1) != v6) )
      __fastfail(3u);
    v8 = v6 - 6;
    *v5 = v7;
    v7[1] = v5;
    if ( v6 != (void **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v6 - 6);
      operator delete(v8);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 16) )
  {
    WdLogSingleEntry1(1LL, 397LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_NtSecuritySharing || m_NtObjectRefCount == 0",
      397LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = (char *)*((_QWORD *)this + 21);
  if ( v9 != (char *)this + 160 )
    operator delete(v9);
  if ( *((_DWORD *)this + 50) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 214), *((_DWORD *)this + 50));
    *((_DWORD *)this + 50) = 0;
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
  }
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v13 = (void *)*((_QWORD *)this + 24);
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 24) && (*((_DWORD *)this + 3) & 0x200) == 0 )
  {
    WdLogSingleEntry1(1LL, 419LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pSection == NULL || m_ExistingSysMem",
      419LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
