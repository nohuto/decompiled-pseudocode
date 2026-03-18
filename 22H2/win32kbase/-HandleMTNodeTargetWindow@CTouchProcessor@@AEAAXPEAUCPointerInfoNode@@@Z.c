/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01CC1B8
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CC3D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3AD6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4C54 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01B4FB0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52E4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B53BC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B5664 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D5C40 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C0206938 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C0206FB8 (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(struct _KTHREAD **this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  bool v5; // zf
  __int64 v6; // r9
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v18[40]; // [rsp+38h] [rbp-C8h] BYREF
  CInpLockGuard *v19; // [rsp+60h] [rbp-A0h]
  _BYTE v20[64]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v21[8]; // [rsp+B0h] [rbp-50h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11630);
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
              (CThreadLockInputDest *)v20,
              (struct CPointerInfoNode *)((char *)a2 + 352));
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v18,
              (struct CInpLockGuard *)(this + 4),
              *((void **)a2 + 2),
              v6);
            v7 = *((_QWORD *)a2 + 2);
            v8 = *((_OWORD *)a2 + 23);
            v9 = *((unsigned __int16 *)a2 + 72);
            v21[0] = *((_OWORD *)a2 + 22);
            v10 = *((_OWORD *)a2 + 24);
            v21[1] = v8;
            v11 = *((_OWORD *)a2 + 25);
            v21[2] = v10;
            v12 = *((_OWORD *)a2 + 26);
            v21[3] = v11;
            v13 = *((_OWORD *)a2 + 27);
            v21[4] = v12;
            v14 = *((_OWORD *)a2 + 28);
            v21[5] = v13;
            v21[6] = v14;
            ApiSetEditionPointerActivate(v21, v9, v7, (char *)a2 + 160);
            CInpLockGuard::LockExclusive(v19);
            CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v18, v15, v16, v17);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
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
          CInputDest::CInputDest((CInputDest *)v21, (__int64 **)a2 + 44);
          CTouchProcessor::SetPointerImplicitCapture(
            (CTouchProcessor *)this,
            *((_QWORD *)a2 + 2),
            (const struct CInputDest *)v21,
            -2,
            0);
          CInputDest::SetEmpty((CInputDest *)v21);
        }
        return;
      }
      goto LABEL_17;
    }
  }
}
