void __fastcall FsRtlRegisterMupCalls(__int64 a1)
{
  _InterlockedExchange64(&pFsRtlpMupCalls, a1);
}
