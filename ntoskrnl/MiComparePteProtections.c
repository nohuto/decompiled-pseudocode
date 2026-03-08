/*
 * XREFs of MiComparePteProtections @ 0x1402DE51C
 * Callers:
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x14076918C (MiSecureVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiComparePteProtections(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rsi
  int v11; // r8d
  unsigned __int8 v12; // r12
  int v13; // ecx
  bool v14; // zf
  int v16; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+54h] [rbp-Ch] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  __int16 v19; // [rsp+A8h] [rbp+48h] BYREF
  int v20; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v18 = 0LL;
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v19 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  while ( a2 <= a3 )
  {
    LOBYTE(v11) = v12;
    MiQueryAddressState(a2, a3, v11, a1, 0LL, (__int64)&v20, (__int64)&v17, (__int64)&v19, (__int64)&v18, (__int64)&v16);
    v13 = v20;
    if ( !v20 )
    {
      if ( v16 )
        goto LABEL_14;
      v14 = ((*(_DWORD *)(a1 + 48) >> 7) & 0x1F) == 0;
      v13 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v20 = v13;
      if ( v14 )
        goto LABEL_14;
    }
    if ( a5 )
    {
      if ( v13 != a4 )
        goto LABEL_14;
    }
    else if ( v13 == -1
           || (v13 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v14 = (v13 & 4) == 0) : (v14 = (v13 & 7) == 0), v14) )
    {
LABEL_14:
      v5 = -1073741755;
      break;
    }
    a2 = v18;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v12);
  return v5;
}
