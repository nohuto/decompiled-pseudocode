__int64 __fastcall CWARPDrawListEntry::Create(const struct WARPDrawListEntryParams *a1, struct CWARPDrawListEntry **a2)
{
  unsigned int v4; // edi
  struct CObjectCache *ObjectCache; // rax
  CWARPDrawListEntry *v6; // rcx
  int v7; // r9d
  CWARPDrawListEntry *v8; // rax
  struct CWARPDrawListEntry *v9; // rbx

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v6 = 0LL;
  v7 = *((_DWORD *)ObjectCache + 1);
  if ( v7 )
  {
    v6 = (CWARPDrawListEntry *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v6;
    *((_DWORD *)ObjectCache + 1) = v7 - 1;
  }
  if ( (v6 || (v6 = (CWARPDrawListEntry *)DefaultHeap::Alloc(0x118uLL)) != 0LL)
    && (v8 = CWARPDrawListEntry::CWARPDrawListEntry(v6, a1), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CWARPDrawListEntry *)((char *)v8 + 8));
    *a2 = v9;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024882, 0x60u, 0LL);
  }
  return v4;
}
