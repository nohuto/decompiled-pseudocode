__int64 __fastcall PspSiloInitializeIsStateSeparationEnabled(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v2; // rbx
  int IsStateSeparationEnabled; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Flink = a1[93].Flink;
  v5 = 0;
  v2 = PsAttachSiloToCurrentThread(a1);
  IsStateSeparationEnabled = ExIsStateSeparationEnabled(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( IsStateSeparationEnabled >= 0 )
    BYTE5(Flink[82].Blink[1].Blink) = v5;
  return (unsigned int)IsStateSeparationEnabled;
}
