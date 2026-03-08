/*
 * XREFs of HT_UninitializeSessionGlobals @ 0x1C02535C8
 * Callers:
 *     EnableHalftone @ 0x1C00EFD70 (EnableHalftone.c)
 * Callees:
 *     <none>
 */

void __fastcall HT_UninitializeSessionGlobals(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = SGDGetSessionState(a1);
  v2 = *(void **)(v1 + 48);
  if ( v2 )
  {
    EngFreeMem(v2);
    *(_QWORD *)(v1 + 48) = 0LL;
  }
}
