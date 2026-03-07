__int64 __fastcall VfMiscKeSynchronizeExecution_Entry(__int64 a1)
{
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 92LL);
  return ViMiscCheckKeRaiseIrql(a1);
}
