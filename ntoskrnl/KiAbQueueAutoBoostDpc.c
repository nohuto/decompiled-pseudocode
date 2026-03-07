__int64 __fastcall KiAbQueueAutoBoostDpc(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 35744) )
  {
    result = KiInsertQueueDpc(a1 + 35712, a1, 0LL, 0LL, 0);
    *(_QWORD *)(a1 + 35744) = 1LL;
  }
  return result;
}
