__int64 RtlpInitUppercaseTables()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // rbx
  NTSTATUS NlsSectionPtr; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = 0LL;
  v1 = CurrentServerSiloGlobals;
  NlsSectionPtr = NtGetNlsSectionPtr(0xEu, 0, 0LL, &v5, 0LL);
  v3 = v5;
  if ( NlsSectionPtr < 0 )
    v3 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    _InterlockedExchange64((volatile __int64 *)&v1[77], v3 + 4);
    _InterlockedExchange64((volatile __int64 *)&v1[77].Blink, v5 + 2 * (*(unsigned __int16 *)(v5 + 2) + 2LL));
    v1[76].Blink = (struct _LIST_ENTRY *)v5;
  }
  else
  {
    v1[77].Flink = 0LL;
    v1[77].Blink = 0LL;
    v1[76].Blink = 0LL;
  }
  return 0LL;
}
