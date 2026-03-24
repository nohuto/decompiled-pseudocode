/*
 * XREFs of MiComparePteProtections @ 0x14025B2B8
 * Callers:
 *     MiSecureVad @ 0x14061FAD0 (MiSecureVad.c)
 *     MiCheckSecuredVad @ 0x1406DB1E8 (MiCheckSecuredVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, int a5)
{
  unsigned int v5; // ebx
  int v7; // r14d
  unsigned __int64 v9; // rdi
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
  v7 = (int)a4;
  v16 = 0;
  v20 = 0;
  v9 = a2;
  v17 = 0;
  v19 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a2, a3, a4);
  while ( v9 <= a3 )
  {
    LOBYTE(v11) = v12;
    MiQueryAddressState(v9, a3, v11, a1, 0LL, (__int64)&v20, (__int64)&v17, (__int64)&v19, (__int64)&v18, (__int64)&v16);
    v13 = v20;
    if ( !v20 )
    {
      if ( v16 )
        goto LABEL_13;
      v14 = ((*(_DWORD *)(a1 + 48) >> 7) & 0x1F) == 0;
      v13 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v20 = v13;
      if ( v14 )
        goto LABEL_13;
    }
    if ( a5 == 1 )
    {
      if ( v13 != v7 )
        goto LABEL_13;
    }
    else if ( v13 == -1
           || (v13 & 0xFFFFFFF8) == 0x10
           || (v7 != 1 ? (v14 = (v13 & 4) == 0) : (v14 = (v13 & 7) == 0), v14) )
    {
LABEL_13:
      v5 = -1073741755;
      break;
    }
    v9 = v18;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v12);
  return v5;
}
