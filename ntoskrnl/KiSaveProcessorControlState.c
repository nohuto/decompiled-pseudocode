/*
 * XREFs of KiSaveProcessorControlState @ 0x140416350
 * Callers:
 *     KdpReport @ 0x140361A88 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KiSaveProcessorState @ 0x14036A140 (KiSaveProcessorState.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeSaveStateForHibernate @ 0x1404170A0 (KeSaveStateForHibernate.c)
 *     ExpSystemErrorHandler @ 0x140422390 (ExpSystemErrorHandler.c)
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralDpc @ 0x140A97DC0 (IopLiveDumpCorralDpc.c)
 *     KdpSymbol @ 0x140AAD56C (KdpSymbol.c)
 *     KdpCommandString @ 0x140AB228C (KdpCommandString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveProcessorControlState(__int64 _RCX, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  v2 = __readcr0();
  *(_QWORD *)_RCX = v2;
  v3 = __readcr2();
  *(_QWORD *)(_RCX + 8) = v3;
  v4 = __readcr3();
  *(_QWORD *)(_RCX + 16) = v4;
  v5 = __readcr4();
  *(_QWORD *)(_RCX + 24) = v5;
  *(_QWORD *)(_RCX + 160) = KeGetCurrentIrql();
  *(_WORD *)(_RCX + 114) = 0;
  v6 = (unsigned __int8)(HvlHyperVRootPartition | VslVsmEnabled);
  if ( !(_BYTE)v6 )
  {
    __sgdt((void *)(_RCX + 86));
    __sidt((void *)(_RCX + 102));
    __asm { str     word ptr [rcx+70h] }
  }
  *(_DWORD *)(_RCX + 116) = _mm_getcsr();
  *(_QWORD *)(_RCX + 216) = 0LL;
  if ( (*(_QWORD *)(_RCX + 24) & 0x40000LL) != 0 )
  {
    __asm { xgetbv }
    *(_DWORD *)(_RCX + 216) = v6;
    *(_DWORD *)(_RCX + 220) = a2;
  }
  v7 = __readdr(0);
  v8 = __readdr(1u);
  *(_QWORD *)(_RCX + 32) = v7;
  *(_QWORD *)(_RCX + 40) = v8;
  v9 = __readdr(2u);
  v10 = __readdr(3u);
  *(_QWORD *)(_RCX + 48) = v9;
  *(_QWORD *)(_RCX + 56) = v10;
  v11 = __readdr(6u);
  v12 = __readdr(7u);
  *(_QWORD *)(_RCX + 64) = v11;
  *(_QWORD *)(_RCX + 72) = v12;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (v12 & 0x300) != 0 )
  {
    if ( (KiCpuTracingFlags & 2) != 0 )
    {
      *(_QWORD *)(_RCX + 136) = 0LL;
      *(_QWORD *)(_RCX + 128) = 0LL;
      *(_QWORD *)(_RCX + 152) = 0LL;
      *(_QWORD *)(_RCX + 144) = 0LL;
    }
    else
    {
      v14 = _RCX;
      v15 = KiLastBranchTOSMSR;
      if ( KiLastBranchTOSMSR )
      {
        v16 = __readmsr(KiLastBranchTOSMSR);
        v15 = v16;
      }
      v17 = __readmsr(v15 + KiLastBranchFromBaseMSR);
      *(_DWORD *)(_RCX + 136) = v17;
      v18 = KiLastBranchToBaseMSR;
      *(_DWORD *)(v14 + 140) = HIDWORD(v17);
      *(_QWORD *)(v14 + 128) = __readmsr(v15 + v18);
      *(_QWORD *)(v14 + 152) = __readmsr(KiLastExceptionFromBaseMSR);
      *(_QWORD *)(v14 + 144) = __readmsr(KiLastExceptionToBaseMSR);
      v19 = __readmsr(0x1D9u);
      v20 = HIDWORD(v19);
      result = (unsigned int)v19 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v20, result));
    }
  }
  return result;
}
