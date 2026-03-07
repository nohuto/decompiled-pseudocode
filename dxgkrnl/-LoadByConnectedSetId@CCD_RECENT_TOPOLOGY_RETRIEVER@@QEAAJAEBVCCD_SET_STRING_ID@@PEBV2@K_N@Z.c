__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        const struct CCD_SET_STRING_ID *a3,
        int a4,
        bool a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 result; // rax

  *((_DWORD *)this + 2) = a4;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 24) = a3;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
    {
      if ( *((_BYTE *)SessionDataForSpecifiedSession + 18498) )
        return 3221226021LL;
    }
  }
  result = CCD_STORE::ForConnectedSet(
             a2,
             (int (*)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_ProcessConnectedSetDescriptorCallback,
             (__int64)this);
  if ( (_DWORD)result == -1073741789 )
    return 3221225473LL;
  if ( (int)result >= 0 )
  {
    result = *((unsigned int *)this + 4);
    if ( (int)result >= 0 )
    {
      if ( *((_WORD *)this + 12) )
        return CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                 this,
                 (CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)this + 16),
                 0xFu,
                 a5);
      return 3221226021LL;
    }
  }
  return result;
}
