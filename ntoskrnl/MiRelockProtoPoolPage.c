/*
 * XREFs of MiRelockProtoPoolPage @ 0x1402A2F78
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x1402871A0 (MiLockOwnedProtoPage.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // si
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = MiLockPageInline(a1);
    *a2 = v4;
  }
  else
  {
    v6 = 0;
    v4 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL);
  MiLockOwnedProtoPage(a1, v4);
  return a1;
}
