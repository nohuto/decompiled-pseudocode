__int64 __fastcall CResourceTable::DuplicateHandle(
        CResourceTable *this,
        struct CChannelContext *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int a5)
{
  CResourceTable *v5; // rsi
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v10; // ecx
  void *v11; // r10
  struct CResourceTable::HANDLE_ENTRY *v12; // rdi
  CResourceTable *v13; // r14
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  _DWORD *v18; // r14
  __int64 v19; // rcx
  _DWORD *v22; // [rsp+98h] [rbp+10h] BYREF

  v5 = (CResourceTable *)*((_QWORD *)a2 + 4);
  v22 = 0LL;
  Entry = CResourceTable::GetEntry(v5, a3);
  v12 = Entry;
  if ( Entry )
  {
    if ( *((void **)Entry + 1) == v11 )
    {
      v17 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467261, 0x15Eu, v11);
    }
    else
    {
      v13 = (CResourceTable *)*((_QWORD *)a4 + 4);
      v14 = a5;
      v15 = CResourceTable::AllocateEntryAtHandle(v13, a5, *(unsigned int *)Entry, &v22);
      v17 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x168u, 0LL);
      }
      else
      {
        if ( v5 == v13 )
          v12 = CResourceTable::GetEntry(v5, a3);
        v18 = v22;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
          McTemplateU0qqqqxxqx_EventWriteTransfer(
            a3,
            v14,
            *((_DWORD *)a2 + 4),
            a3,
            *((_DWORD *)a4 + 4),
            v14,
            a3,
            v14,
            *v22,
            *((_QWORD *)v12 + 1));
        v19 = *((_QWORD *)v12 + 1);
        *((_QWORD *)v18 + 1) = v19;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        CResourceTable::CountResource(this, *(unsigned int *)v12);
      }
    }
  }
  else
  {
    v17 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467261, 0x15Du, v11);
  }
  return v17;
}
