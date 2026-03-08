/*
 * XREFs of KiFreezeSingleThread @ 0x140355BB4
 * Callers:
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KeFreezeProcess @ 0x140355C58 (KeFreezeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x140354348 (KiSuspendThread.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **v3; // rax
  volatile signed __int32 *v7; // rsi
  __int64 v8; // r8
  char v9; // di
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( a3 || (*(_DWORD *)(a2 + 116) & 0x200000) == 0 )
  {
    v7 = (volatile signed __int32 *)(a2 + 736);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
    v9 = *(_BYTE *)(a2 + 794);
    LOBYTE(v3) = v9 | (a3 != 0 ? 4 : 2);
    *(_BYTE *)(a2 + 794) = (_BYTE)v3;
    if ( (v9 & 2) == 0 && (v9 & 4) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
      LOBYTE(v3) = KiSuspendThread(a2, a1, v8);
      if ( !(_BYTE)v3 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
        *(_BYTE *)(a2 + 794) ^= (*(_BYTE *)(a2 + 794) ^ v9) & 6;
      }
    }
    _InterlockedAnd(v7, 0xFFFFFF7F);
  }
  return (char)v3;
}
