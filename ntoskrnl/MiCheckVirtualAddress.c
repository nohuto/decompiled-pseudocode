/*
 * XREFs of MiCheckVirtualAddress @ 0x140225600
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402A30FC (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402A31F0 (MiFindActualFaultingPte.c)
 *     MiCheckProtoAccess @ 0x1402DF228 (MiCheckProtoAccess.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiCheckUserVirtualAddress @ 0x1402258B0 (MiCheckUserVirtualAddress.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _KPROCESS *Process; // r8
  __int64 *v9; // rbx
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
    {
      v6 = a1 & 0x7FFFFFFFF000LL;
      if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        result = qword_140C656A8;
        *a2 = 1;
        return result;
      }
      if ( v6 == qword_140C656B8 && v6 )
      {
        result = qword_140C656B0;
        *a2 = 1;
        return result;
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                    + 284));
    Process = KeGetCurrentThread()->ApcState.Process;
    v9 = *(__int64 **)&Process[1].Spare2[23];
    if ( v9 )
    {
      v7 = a1 >> 12;
      if ( a1 >> 12 >= (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32))
        && v7 <= (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
      {
        goto LABEL_8;
      }
      v9 = *(__int64 **)&Process[1].Spare2[15];
      if ( v9 )
      {
        do
        {
          if ( v7 > (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
          {
            v9 = (__int64 *)v9[1];
          }
          else
          {
            if ( v7 >= (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32)) )
              break;
            v9 = (__int64 *)*v9;
          }
        }
        while ( v9 );
        if ( v9 )
        {
          *(_QWORD *)&Process[1].Spare2[23] = v9;
LABEL_8:
          result = MiCheckUserVirtualAddress(a1, v9, Process, a2);
          *a3 = v9;
          return result;
        }
      }
    }
    LOBYTE(v7) = 17;
    MiUnlockVadTree(1LL, v7);
    result = 0LL;
    *a2 = 24;
    return result;
  }
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    *a2 = 24;
    return 0LL;
  }
  else
  {
    *a2 = 4;
    return 0LL;
  }
}
