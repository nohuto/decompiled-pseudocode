void __fastcall ExDeleteDpcEvent(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[7], 0x65447845u);
  ExFreePoolWithTag(P, 0);
}
