__int64 __fastcall CComposition::Partition_ToggleHolographicSuspension(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION *a4)
{
  LOBYTE(a2) = *((_BYTE *)a4 + 4) != 0;
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *, struct CResourceTable *))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    a2,
    a3);
  return 0LL;
}
