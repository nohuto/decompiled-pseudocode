/*
 * XREFs of IovpCancelRoutine @ 0x140ABCCBC
 * Callers:
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  if ( pXdvDriverCancel )
    return pXdvDriverCancel();
  else
    return a3();
}
