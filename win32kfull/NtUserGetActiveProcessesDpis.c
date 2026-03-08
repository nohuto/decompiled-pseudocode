/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1C00EC1E0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 */

__int64 __fastcall NtUserGetActiveProcessesDpis(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 i; // r10
  unsigned int DpiCacheSlot; // eax
  __int64 v7; // r10

  EnterSharedCrit(a1, a2, a3);
  v4 = 0;
  for ( i = gppiList; i; i = *(_QWORD *)(v7 + 368) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 284));
    if ( DpiCacheSlot != -1 )
    {
      v3 = DpiCacheSlot;
      v4 |= 1 << DpiCacheSlot;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
