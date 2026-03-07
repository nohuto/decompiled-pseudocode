__int64 __fastcall VfMiscExAcquireFastMutexUnsafe_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x39uLL, *(_QWORD *)(a1 + 8));
}
