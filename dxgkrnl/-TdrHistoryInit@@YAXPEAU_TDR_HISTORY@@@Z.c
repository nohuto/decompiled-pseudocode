void __fastcall TdrHistoryInit(UUID *Uuid)
{
  NTSTATUS v2; // eax

  memset(Uuid, 0, 0xA18uLL);
  v2 = ExUuidCreate(Uuid);
  if ( v2 < 0 )
    WdLogSingleEntry1(2LL, v2);
  Uuid[1].Data1 = KeQueryTimeIncrement();
}
