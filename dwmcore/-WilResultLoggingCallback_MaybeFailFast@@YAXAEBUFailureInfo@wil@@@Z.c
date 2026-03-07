void __fastcall WilResultLoggingCallback_MaybeFailFast(const struct wil::FailureInfo *a1)
{
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)a1,
    0LL,
    0,
    *((_DWORD *)a1 + 2),
    *((_DWORD *)a1 + 16),
    *((void **)a1 + 17));
}
