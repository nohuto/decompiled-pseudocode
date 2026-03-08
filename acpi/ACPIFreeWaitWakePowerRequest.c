/*
 * XREFs of ACPIFreeWaitWakePowerRequest @ 0x1C00449F0
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00447C0 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0044668 (ACPIDelayedFreeWakeInterrupt.c)
 */

void __fastcall ACPIFreeWaitWakePowerRequest(_DWORD *Entry)
{
  unsigned int v1; // edi
  char **v2; // r14
  char *v4; // rsi
  char *v5; // r15
  __int64 v6; // rbp
  struct _EX_RUNDOWN_REF *v7; // rcx

  v1 = Entry[29];
  v2 = (char **)(Entry + 38);
  if ( v1 <= 1 )
  {
    v4 = (char *)(Entry + 38);
    if ( !v1 )
      goto LABEL_8;
  }
  else
  {
    v4 = *v2;
  }
  v5 = v4 + 24;
  v6 = (unsigned int)Entry[29];
  do
  {
    ACPIDelayedFreeWakeInterrupt(*(_DWORD *)v5, *((_QWORD *)v5 + 1));
    v5 += 40;
    --v6;
  }
  while ( v6 );
  if ( v1 > 1 )
  {
    ExFreePoolWithTag(v4, 0x50706341u);
    *v2 = 0LL;
  }
LABEL_8:
  v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Entry + 5);
  Entry[29] = 0;
  ExReleaseRundownProtection(v7 + 125);
  ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
