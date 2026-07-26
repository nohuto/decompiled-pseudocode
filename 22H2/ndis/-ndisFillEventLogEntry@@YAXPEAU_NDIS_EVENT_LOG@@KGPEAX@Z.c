/*
 * XREFs of ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0017C74
 * Callers:
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x1C0017BEC (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00BF314 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00BF63C (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisFillEventLogEntry(struct _NDIS_EVENT_LOG *a1, int a2, __int16 a3, void *a4)
{
  unsigned __int16 Flags; // ax
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int16 v9; // ax
  unsigned __int64 v10; // rcx
  __int16 v11; // cx
  ULONG_PTR v12; // rcx

  Flags = a1->Flags;
  v7 = a2 * (unsigned int)a1->EntrySize;
  if ( (Flags & 1) != 0 )
  {
    v8 = MEMORY[0xFFFFF78000000014];
    v9 = *(_WORD *)((char *)&a1[1].LastEventTime + v7 + 2);
    v10 = (MEMORY[0xFFFFF78000000014] - a1->LastEventTime) / 0x2710;
    if ( v10 >= 0x7FFF )
    {
      if ( v10 >= 0x1F3FC18 )
        v11 = v9 | 0x8000;
      else
        v11 = (v10 / 0x3E8) | 0x8000;
    }
    else
    {
      v11 = v10 & 0x7FFF;
    }
    *(_WORD *)((char *)&a1[1].LastEventTime + v7 + 2) = v11;
    Flags = a1->Flags;
    a1->LastEventTime = v8;
  }
  if ( (Flags & 4) != 0 )
  {
    *(_QWORD *)((char *)&a1[1].LastUsedEntry + v7) = a4;
    Flags = a1->Flags;
  }
  if ( (Flags & 2) != 0 )
  {
    v12 = *(unsigned int *)((char *)&a1[1].LastEventTime + v7 + 4);
    if ( (_DWORD)v12 )
      ndisReleaseStackTrace(v12);
    *(_DWORD *)((char *)&a1[1].LastEventTime + v7 + 4) = ndisCaptureStackTrace(v12);
  }
  *(_WORD *)((char *)&a1[1].LastEventTime + v7) = a3;
}
