__int64 __fastcall PnpCtxRegCreateKey(__int64 a1, __int64 a2)
{
  return RegRtlCreateKeyTransacted(a2);
}
