/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x140663178
 * Callers:
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiLockCloneBlockAtDpc @ 0x14034A49C (MiLockCloneBlockAtDpc.c)
 */

char __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v8; // rdi
  int v9; // ebp
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r8
  bool v18; // zf

  MiLockCloneBlockAtDpc(a3);
  if ( *(_QWORD *)(a3 + 24) )
    goto LABEL_12;
  v8 = MiSwizzleInvalidPte((*(_QWORD *)(a3 + 16) >> 50) & 0x3E0LL);
  v9 = 0;
  if ( MiPteInShadowRange(a3) )
  {
    if ( MiPteHasShadow() )
    {
      v9 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v11 = (v8 & 1) == 0;
        goto LABEL_8;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v11 = (v8 & 1) == 0;
LABEL_8:
      if ( !v11 )
        v8 |= 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)a3 = v8;
  if ( v9 )
    MiWritePteShadow(a3, v8, v10);
LABEL_12:
  if ( (*(_QWORD *)(a3 + 16) & 0x2000000000000000LL) != 0 )
  {
    ++*a5;
  }
  else
  {
    *(_QWORD *)(a3 + 16) |= 0x2000000000000000uLL;
    v12 = *(unsigned __int16 *)(a1 + 1838);
    ++a5[1];
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_140C67048 + 8 * v12) + 17848LL));
  }
  v13 = *(_QWORD *)(a3 + 16);
  ++*(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 16) = v13 ^ (v13 ^ (v13 + 1)) & 0x7FFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = MiSwizzleInvalidPte((a3 << 16) | 0x400) | 8;
  v15 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_23;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v15 = 1;
    if ( HIBYTE(word_140C6697C) )
      goto LABEL_23;
    v18 = (v14 & 1) == 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_23;
    v18 = (v14 & 1) == 0;
  }
  if ( !v18 )
    v14 |= 0x8000000000000000uLL;
LABEL_23:
  *a4 = v14;
  if ( v15 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, v14, v17);
  return (char)CurrentThread;
}
