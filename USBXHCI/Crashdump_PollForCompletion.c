__int64 __fastcall Crashdump_PollForCompletion(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_DWORD *)(a1 + 584) || (v1 = 200LL, *(_BYTE *)(a1 + 624)) )
    v1 = 72LL;
  return Crashdump_EventRing_AsyncPoll(v1 + a1);
}
