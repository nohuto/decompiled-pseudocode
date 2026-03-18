/*
 * XREFs of ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C001F808
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 * Callees:
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1C009A560 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z.c)
 */

char __fastcall GdiHandleEntryTable::AcquireEntryIndex(GdiHandleEntryTable *this, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v5; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < *((_DWORD *)this + 2) )
  {
    v5 = *((unsigned int *)this + 3);
    if ( (_DWORD)v5 != -1 )
    {
      *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)this + 24 * v5);
LABEL_4:
      *a2 = v5;
      *((_DWORD *)this + 4) = v2 + 1;
      return 1;
    }
    LODWORD(v5) = *((_DWORD *)this + 5);
    if ( GdiHandleEntryTable::EntryDataLookupTable::Initialize(
           *((GdiHandleEntryTable::EntryDataLookupTable **)this + 3),
           v5) )
    {
      _InterlockedOr(v7, 0);
      ++*((_DWORD *)this + 5);
      v2 = *((_DWORD *)this + 4);
      goto LABEL_4;
    }
  }
  return 0;
}
