__int64 __fastcall MiCombinePte(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rcx
  _QWORD *v7; // rbx
  __int64 *v8; // rsi
  _QWORD *v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v15; // r8
  bool v16; // zf
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v5 + 104) )
  {
    v7 = *(_QWORD **)(a1 + 168);
    v8 = (__int64 *)v7[3];
    v9 = (_QWORD *)*v8;
    if ( (*(_BYTE *)(v5 + 184) & 7) != 0 || MiProcessSuitableForCombining(v5 - 1664) )
    {
      if ( v4 < 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(a2);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFFLL;
        v11 = 48 * v10 - 0x220000000000LL;
        if ( *(__int64 *)(v11 + 40) >= 0 )
        {
          v12 = v8[1];
          CurrentThread = KeGetCurrentThread();
          if ( v12 && *(_DWORD *)(v12 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            return 5LL;
          if ( (unsigned int)MiCombineCandidate(v9, 0, (_OWORD *)v11) )
          {
            ++*(_QWORD *)(v8[13] + 16);
            v15 = (_QWORD *)(v7[4] + 40LL * v7[1]);
            *v15 = 0LL;
            v16 = (v19 & 0x20) == 0;
            v15[2] = v10;
            if ( !v16 )
            {
              v17 = MiComputeHash64((__int64)(a2 << 25) >> 16);
              *(_QWORD *)(v18 + 8) = v17;
              goto LABEL_14;
            }
            if ( (unsigned int)MiComputeCombineHash(v8, v15) )
            {
LABEL_14:
              if ( ++v7[1] == v7[2] )
                return MiCombineWorkingSetTail(a1);
            }
          }
        }
      }
      return 0LL;
    }
  }
  return 4LL;
}
