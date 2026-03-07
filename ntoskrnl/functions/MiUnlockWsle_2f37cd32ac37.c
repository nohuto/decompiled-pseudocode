__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax

  v3 = *(_QWORD *)(a3 + 40);
  if ( v3 < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v3 >> 43) & 0x3FF));
    MiReturnCommit(v7, 1LL, a3);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 17840));
  }
  MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v10 = v9;
  if ( EffectivePagePriorityThread < 5 )
    v10 = 7LL;
  MiSetVaAgeList(a1, a2, 1u, v10);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v12 = *(_QWORD *)(a3 + 40);
    if ( v12 < 0 )
      MiUnlockPageTableCharges(48 * (v12 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v13 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  return result;
}
