LONG __fastcall WdtpBarkWorkerThread(__int64 a1)
{
  (*(void (__fastcall **)(__int64))(a1 + 24))(a1 + 141);
  return KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
}
