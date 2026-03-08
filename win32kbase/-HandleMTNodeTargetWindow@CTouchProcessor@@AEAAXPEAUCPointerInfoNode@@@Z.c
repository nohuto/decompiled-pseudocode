/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01FAFB8
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00F30E4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01E3524 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01E35FC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01E388C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0204A10 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C023F6DC (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C0240FB0 (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(struct _KTHREAD **this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v23[40]; // [rsp+38h] [rbp-C8h] BYREF
  CInpLockGuard *v24; // [rsp+60h] [rbp-A0h]
  _BYTE v25[64]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v26[8]; // [rsp+B0h] [rbp-50h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11721);
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x2000) == 0 && (*((_DWORD *)gptiCurrent + 319) & 0x40) == 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( (v4 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v4 & 0x80u) != 0
      && *((_DWORD *)a2 + 111)
      && CInputDest::IsEqualByWindowHandle((__int64)a2 + 352, *((_QWORD *)a2 + 24), 1) )
    {
      if ( *((_DWORD *)a2 + 111) == 1 )
      {
        v5 = (*(_BYTE *)(*((_QWORD *)a2 + 54) + 39LL) & 8) == 0;
      }
      else
      {
        if ( *((_DWORD *)a2 + 111) != 2 )
        {
LABEL_17:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v25,
              (struct CPointerInfoNode *)((char *)a2 + 352),
              v6,
              v7);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v23,
              (struct CInpLockGuard *)(this + 4),
              *((void **)a2 + 2),
              v8);
            v9 = *((_QWORD *)a2 + 2);
            v10 = *((_OWORD *)a2 + 23);
            v11 = *((unsigned __int16 *)a2 + 72);
            v26[0] = *((_OWORD *)a2 + 22);
            v12 = *((_OWORD *)a2 + 24);
            v26[1] = v10;
            v13 = *((_OWORD *)a2 + 25);
            v26[2] = v12;
            v14 = *((_OWORD *)a2 + 26);
            v26[3] = v13;
            v15 = *((_OWORD *)a2 + 27);
            v26[4] = v14;
            v16 = *((_OWORD *)a2 + 28);
            v26[5] = v15;
            v26[6] = v16;
            ApiSetEditionPointerActivate(v26, v11, v9, (char *)a2 + 160);
            CInpLockGuard::LockExclusive(v24);
            CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v23, v17, v18, v19);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25, v20, v21, v22);
          }
          return;
        }
        v5 = (unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 54)) == 0;
      }
      if ( !v5 )
      {
        v5 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
        *((_DWORD *)a2 + 36) = -2;
        if ( !v5 )
        {
          CInputDest::CInputDest((CInputDest *)v26, (__int64 **)a2 + 44);
          CTouchProcessor::SetPointerImplicitCapture(
            (CTouchProcessor *)this,
            *((_QWORD *)a2 + 2),
            (const struct CInputDest *)v26,
            -2,
            0);
          CInputDest::SetEmpty((CInputDest *)v26);
        }
        return;
      }
      goto LABEL_17;
    }
  }
}
