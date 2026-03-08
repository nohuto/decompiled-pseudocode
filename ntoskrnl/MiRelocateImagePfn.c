/*
 * XREFs of MiRelocateImagePfn @ 0x1406EBA20
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 * Callees:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x140679788 (RtlDoesRequireFunctionOverrideFixups.c)
 *     MiPerformFixups @ 0x14069F3D0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned int v8; // esi
  __int64 *v11; // rdi
  __int64 v12; // r10
  __int64 v13; // rcx
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v14; // rcx
  __int64 v16; // r13
  ULONG_PTR v17; // r12
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // [rsp+30h] [rbp-38h]
  ULONG_PTR v29; // [rsp+70h] [rbp+8h]

  v8 = a3;
  v11 = *(__int64 **)(BugCheckParameter2[12] + 32);
  v12 = *v11;
  if ( (a7 & 1) == 0 || a3 >= *((_DWORD *)v11 + 14) )
    return 1LL;
  while ( !*(_QWORD *)(v12 + 8LL * a3) )
  {
    v13 = v11[11];
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 8LL * a3 + 56) )
        break;
    }
    v14 = (const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *)v11[12];
    if ( v14 )
    {
      if ( RtlDoesRequireFunctionOverrideFixups(v14, a3) )
        break;
    }
    if ( (a7 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
      break;
    if ( ++a3 != v8 )
      return 1LL;
  }
  v16 = 48 * a4 - 0x220000000000LL;
  if ( BugCheckParameter3 && (BugCheckParameter3 < 0xFFFFF68000000000uLL || BugCheckParameter3 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v17 = 0LL;
    v29 = 0LL;
    goto LABEL_17;
  }
  v29 = BugCheckParameter3;
  v17 = MiReservePtes((__int64)&qword_140C695C0, 1u);
  if ( v17 )
  {
LABEL_15:
    BugCheckParameter3 = (__int64)(v17 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v16);
    ValidPte = MiMakeValidPte(v17, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( MiPteInShadowRange(v17) )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v17 = ValidPte;
        MiWritePteShadow(v17, ValidPte, v25);
LABEL_17:
        CurrentThread = KeGetCurrentThread();
        if ( (struct _KTHREAD *)v11[1] == CurrentThread )
        {
          CurrentThread = 0LL;
        }
        else
        {
          --CurrentThread->SpecialApcDisable;
          v21 = KeAbPreAcquire((__int64)(v11 + 3), 0LL);
          v28 = v21;
          if ( _InterlockedCompareExchange64(v11 + 3, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v11 + 3, 0, v21, (__int64)(v11 + 3));
            v21 = v28;
          }
          if ( v21 )
            *(_BYTE *)(v21 + 18) = 1;
        }
        v22 = v11[5];
        if ( (a7 & 4) != 0 )
          v23 = a5;
        else
          v23 = v11[5];
        if ( (a7 & 4) == 0 )
          v22 = 0LL;
        MiPerformFixups(BugCheckParameter3, BugCheckParameter2, v8, v23, v22, a7);
        if ( CurrentThread )
        {
          if ( _InterlockedCompareExchange64(v11 + 3, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v11 + 3);
          KeAbPostRelease((ULONG_PTR)(v11 + 3));
          v24 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v24
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        if ( !v17 )
          return 0LL;
        if ( v17 != v29 )
        {
          MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v17, 1u);
          return 0LL;
        }
        v26 = ZeroPte;
        if ( MiPteInShadowRange(v17) )
        {
          if ( MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
              v26 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)v17 = v26;
            MiWritePteShadow(v17, v26, v27);
            goto LABEL_63;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v26 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v17 = v26;
LABEL_63:
        KeFlushSingleTb(BugCheckParameter3, 0, 1u);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v17 = ValidPte;
    goto LABEL_17;
  }
  if ( BugCheckParameter3 )
  {
    v17 = BugCheckParameter3;
    goto LABEL_15;
  }
  return 3221225626LL;
}
