void __fastcall SmmUnlockPages(PMDL Mdl)
{
  _InterlockedExchangeAdd64(&qword_1C013BD00, -(__int64)Mdl->ByteCount);
  MmUnlockPages(Mdl);
  IoFreeMdl(Mdl);
}
