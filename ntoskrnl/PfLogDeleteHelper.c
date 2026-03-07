__int64 __fastcall PfLogDeleteHelper(char a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  struct _SLIST_ENTRY *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _SLIST_ENTRY *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-10h] BYREF

  ListEntry = 0LL;
  v16 = 0LL;
  v9 = PfFbLogEntryReserve(&stru_140C64EA0, &ListEntry, &v16, 0x20u);
  if ( v9 < 0 )
  {
    v14 = ListEntry;
  }
  else
  {
    v10 = v16;
    *(_DWORD *)(v16 + 16) = (4 * a4) | a1 & 3;
    *(_QWORD *)(v10 + 24) = a2;
    *(_DWORD *)v10 = *(_DWORD *)v10 & 0x80000000 | 0x103;
    v11 = ListEntry;
    v12 = v16;
    v13 = dword_140C64C2C
        + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                        + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
    *(_DWORD *)(v16 + 4) = v13;
    *(_DWORD *)(v12 + 8) = a3;
    PfFbLogEntryComplete(v11, v13, 32LL);
    v14 = 0LL;
    v9 = 0;
  }
  if ( v14 )
    PfFbLogEntryComplete(v14, v8, 0LL);
  return (unsigned int)v9;
}
