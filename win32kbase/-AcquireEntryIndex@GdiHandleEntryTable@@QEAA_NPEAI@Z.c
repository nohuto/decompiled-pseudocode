bool __fastcall GdiHandleEntryTable::AcquireEntryIndex(GdiHandleEntryTable *this, unsigned int *a2)
{
  __int64 v4; // rdi
  bool result; // al
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 4) < *((_DWORD *)this + 2) )
  {
    v4 = *((unsigned int *)this + 3);
    if ( (_DWORD)v4 != -1 )
    {
      *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)this + 24 * v4);
LABEL_4:
      ++*((_DWORD *)this + 4);
      result = 1;
      *a2 = v4;
      return result;
    }
    LODWORD(v4) = *((_DWORD *)this + 5);
    if ( GdiHandleEntryTable::EntryDataLookupTable::Initialize(
           *((GdiHandleEntryTable::EntryDataLookupTable **)this + 3),
           v4) )
    {
      _InterlockedOr(v6, 0);
      ++*((_DWORD *)this + 5);
      goto LABEL_4;
    }
  }
  return 0;
}
