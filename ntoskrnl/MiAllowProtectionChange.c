/*
 * XREFs of MiAllowProtectionChange @ 0x140367C88
 * Callers:
 *     MiResetVirtualMemory @ 0x1402CEC2C (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x1407F1204 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  int v10; // edi
  unsigned __int8 v11; // r12
  unsigned __int64 v12; // rax
  int v13; // ecx
  _WORD v15[2]; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch] BYREF
  int v17; // [rsp+58h] [rbp-18h] BYREF
  int v18; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-10h] BYREF

  v6 = 0;
  v19 = 0LL;
  v18 = 0;
  v16 = 0;
  v17 = 0;
  v15[0] = 0;
  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v10 = 0;
  v11 = MiLockWorkingSetShared(a1 + 1664);
  v12 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      MiQueryAddressState(v12, a6, v11, a3, 0LL, &v16, &v18, v15, (__int64 *)&v19, &v17);
      v13 = v16;
      if ( v16 == -1 )
        v13 = 0;
      v16 = v13;
      if ( (v13 & 2) == 0 && (a4 & 2) != 0 || (v13 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v12 = v19;
      if ( v19 > a6 )
        goto LABEL_11;
    }
    v10 = 1;
  }
LABEL_11:
  MiUnlockWorkingSetShared(a1 + 1664, v11);
  if ( v10 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v6;
}
