/*
 * XREFs of HMFindEntry @ 0x1C012CA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, char *))
{
  unsigned int v4; // edi
  char *v5; // rbx

  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)qword_1C028FE68 + 32 * v4;
    if ( v5[24] )
    {
      if ( a2(a1, (char *)qword_1C028FE68 + 32 * v4) )
        break;
    }
    if ( ++v4 > giheLast )
      return 0LL;
  }
  return v5;
}
