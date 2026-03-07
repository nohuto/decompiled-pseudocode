__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
