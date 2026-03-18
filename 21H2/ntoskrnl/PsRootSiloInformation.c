/*
 * XREFs of PsRootSiloInformation @ 0x1409AB8A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     PspGetNextSilo @ 0x14068A6A0 (PspGetNextSilo.c)
 *     PspIsSiloInSilo @ 0x1406E1570 (PspIsSiloInSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // edi
  struct _LIST_ENTRY *CurrentSilo; // r12
  __int64 v8; // rsi
  int v9; // ebx
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *NextSilo; // rax
  struct _LIST_ENTRY *v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0LL;
  v9 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    NextSilo = (struct _LIST_ENTRY *)PspGetNextSilo(i, 0);
    v12 = NextSilo;
    if ( !NextSilo )
      break;
    if ( NextSilo != CurrentSilo && PspIsSiloInSilo((__int64)NextSilo, (__int64)CurrentSilo) )
    {
      if ( (unsigned __int64)v5 + 4 > v3 )
      {
        v9 = -1073741789;
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        break;
      }
      a1[v8 + 1] = HIDWORD(v12[89].Flink);
      v5 += 4;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
