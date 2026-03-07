__int64 __fastcall CGlobalComposition::Partition_Synchronize(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SYNCHRONIZE *a4)
{
  CResponseItem *v6; // rax
  __int64 v7; // rcx
  CResponseItem *v8; // rdi
  __int64 v9; // rbx

  v6 = (CResponseItem *)operator new(0x38uLL);
  v8 = v6;
  if ( v6 )
  {
    v9 = *((_QWORD *)a4 + 1);
    CResponseItem::CResponseItem(v6, this[28]);
    *((_QWORD *)v8 + 5) = v9;
    *(_QWORD *)v8 = &CEventResponse::`vftable';
    *((_BYTE *)v8 + 48) = 0;
    if ( *((_BYTE *)a4 + 16) )
      (*(void (__fastcall **)(struct CGlobalSurfaceManager *, CResponseItem *))(*(_QWORD *)this[82] + 48LL))(
        this[82],
        v8);
    (*(void (__fastcall **)(CResponseItem *))(*(_QWORD *)v8 + 40LL))(v8);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0xA3u, 0LL);
    SetEvent(*((HANDLE *)a4 + 1));
    CloseHandle(*((HANDLE *)a4 + 1));
  }
  return 0LL;
}
