/*
 * XREFs of MiLockPageLeafPageTable @ 0x14020B3A0
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x14027DEC0 (MiProbeLeafFrame.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiFaultInProbeAddress @ 0x14030F0A8 (MiFaultInProbeAddress.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  char v16; // r12
  __int64 v17; // rbx
  __int64 i; // r9
  __int16 v19; // ax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+38h] [rbp-30h]
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[12];
  v4 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
  a1[5] = ZeroPte;
  v5 = v4 - 0x98000000000LL;
  v30 = v5;
  v31 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (_KPROCESS *)a1[4];
  v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( Process )
  {
    if ( Process == (_KPROCESS *)(((a1[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2, Process);
    *((_DWORD *)a1 + 16) &= ~0x20u;
    a1[4] = 0LL;
  }
  v7 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v7 )
  {
    v10 = 3;
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_13;
  }
  a1[4] = *(&v30 + v7);
  if ( v7 != 1 )
  {
    v10 = v7 - 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_4:
    v8 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy == 1 || (v8 & 1) == 0 || (v8 & 0x20) != 0 && (v8 & 0x42) != 0 )
      {
        v5 = v30;
      }
      else
      {
        v5 = v30;
        Process = KeGetCurrentThread()->ApcState.Process;
        Flink = Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v28 = *((_QWORD *)&Flink->Flink + ((v30 >> 3) & 0x1FF));
          v29 = v8 | 0x20;
          Process = (_KPROCESS *)(unsigned __int8)v28;
          LOBYTE(Process) = v28 & 0x20;
          if ( (v28 & 0x20) == 0 )
            v29 = v8;
          v8 = v29;
          if ( (v28 & 0x42) != 0 )
            v8 = v29 | 0x42;
        }
      }
    }
    if ( (v8 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1, Process);
    if ( (int)result < 0 )
    {
LABEL_29:
      ++dword_140C4E77C;
      return result;
    }
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v10 = 3;
LABEL_13:
    v11 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = *(&v30 + v11);
        v13 = MI_READ_PTE_LOCK_FREE(v12);
        v34 = v13;
        v15 = v13;
        if ( (v13 & 1) != 0 )
        {
          if ( (v13 & 0x80u) != 0LL )
          {
            if ( *((_DWORD *)a1 + 22) == 1 && (v13 & 0x800) == 0 )
            {
              ++dword_140C4E784;
              return 3221225477LL;
            }
            v16 = 1;
            if ( (unsigned int)MiPteInShadowRange(&v34, v14)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
            {
              v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v24 )
              {
                v25 = *((_QWORD *)&v24->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF));
                v26 = v15 | 0x20;
                if ( (v25 & 0x20) == 0 )
                  v26 = v15;
                v15 = v26;
                if ( (v25 & 0x42) != 0 )
                  v15 = v26;
              }
            }
            v17 = (v15 >> 12) & 0xFFFFFFFFFLL;
            v1 >>= 12;
            for ( i = 1LL; v11; --v11 )
            {
              v19 = v1;
              v1 >>= 9;
              v20 = i * (v19 & 0x1FF);
              i <<= 9;
              v17 += v20;
            }
            v21 = *a1;
            v22 = *a1;
            a1[16] = v17;
            v23 = ~((i << 12) - 1);
            a1[18] = v23 & v22;
            a1[19] = (v23 & ((i << 12) + v21)) - 1;
            *((_DWORD *)a1 + 16) |= 0x20u;
            a1[20] = v17 & ~(i - 1);
          }
          else
          {
            v16 = 0;
          }
          MiLockPageTableInternal(v2, v12, 0LL);
          MiUnlockPageTableInternal(v2, a1[4]);
          a1[4] = v12;
          if ( v16 )
            return 0LL;
        }
        else
        {
          result = MiFaultInProbeAddress(a1, v14);
          if ( (int)result < 0 )
            goto LABEL_29;
          a1[4] = 0xFFFFF6FB7DBEDF68uLL;
          MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
          v11 = 4LL;
        }
        if ( !--v11 )
        {
          v5 = v30;
          goto LABEL_4;
        }
      }
    }
  }
  a1[5] = v8;
  return 0LL;
}
