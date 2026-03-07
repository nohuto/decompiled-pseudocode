void __fastcall DpiKsrComplete(void *a1)
{
  __int64 v1; // rcx

  if ( !qword_1C013B9A0
    || (DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrRestoreMemoryCallback, 0LL),
        v1 = 1LL,
        *(_BYTE *)(qword_1C013B9A0 + 28) = 1,
        !qword_1C013B9A0) )
  {
    v1 = 0LL;
  }
  DxgkLogInternalTriageEvent(
    0LL,
    65540,
    -1,
    (__int64)L"KSR Complete routine has called and the driver iteration was %1",
    v1,
    0LL,
    0LL,
    0LL,
    0LL);
}
