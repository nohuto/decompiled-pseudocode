/*
 * XREFs of IoDemoteToTriageDump @ 0x14054D74C
 * Callers:
 *     KiCaptureDumpPreRecovery @ 0x14057886C (KiCaptureDumpPreRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

bool IoDemoteToTriageDump()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !CrashdmpDumpBlock || !qword_140C6A8D0 )
    return 0;
  qword_140C6A8D0(6LL, &v1);
  return v1 >= 0;
}
