__int64 __fastcall HUBDSM_CompletingPdoReStartOnOperationFailure(__int64 a1)
{
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 960) + 1608LL), 0, 0);
  return 4077LL;
}
