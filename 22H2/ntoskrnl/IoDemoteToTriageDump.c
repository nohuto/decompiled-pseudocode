/*
 * XREFs of IoDemoteToTriageDump @ 0x14054FBEC
 * Callers:
 *     KiCaptureDumpPreRecovery @ 0x14057AD7C (KiCaptureDumpPreRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

bool IoDemoteToTriageDump()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !CrashdmpDumpBlock || !qword_140C6AD50 )
    return 0;
  qword_140C6AD50(6LL, &v1);
  return v1 >= 0;
}
