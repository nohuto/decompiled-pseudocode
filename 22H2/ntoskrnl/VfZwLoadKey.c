/*
 * XREFs of VfZwLoadKey @ 0x1409E9CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409EC86C (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1409EC9A0 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwLoadKey(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(a1, retaddr);
    ViZwCheckObjectAttributes(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvZwLoadKey)(a1, a2);
}
