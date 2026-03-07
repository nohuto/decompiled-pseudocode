void __fastcall CChannel::~CChannel(CChannel *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  struct _LIST_ENTRY *v5; // rcx
  char *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  v2 = (_QWORD **)((char *)this + 80);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    operator delete(v3);
  }
  v5 = (struct _LIST_ENTRY *)*((_QWORD *)this + 22);
  if ( v5 )
    CCommandBatch::`scalar deleting destructor'(v5);
  CInternalMilCmdConnection::DestroyChannel(*((RTL_SRWLOCK **)this + 7), *((_DWORD *)this + 18));
  if ( !*((_QWORD *)this + 8) )
    NtDCompositionDestroyChannel(*((unsigned int *)this + 18));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v7, *((_QWORD *)this + 3));
    std::_Deallocate<16,0>(
      *((void **)this + 2),
      (*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
