/*
 * XREFs of _SysCtxCloseMachine @ 0x140A676C4
 * Callers:
 *     _PnpCtxCreateNode @ 0x140851F88 (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x140A5DBA8 (_PnpCtxDestroyNode.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SysCtxCloseMachine(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)P[1];
  if ( v2 )
    ZwClose(v2);
  v3 = (void *)P[3];
  if ( v3 )
    ZwClose(v3);
  v4 = (void *)P[4];
  if ( v4 )
    ZwClose(v4);
  v5 = (void *)P[6];
  if ( v5 )
    ZwClose(v5);
  v6 = (void *)P[5];
  if ( v6 )
    ZwClose(v6);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
