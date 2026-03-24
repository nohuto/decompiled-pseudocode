/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0195F70
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0196188 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072CC0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009D00C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009F974 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182D20 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C019D868 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019EBE4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C01CC010 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C01CCA80 (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(struct _KTHREAD **this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  __int64 v5; // r8
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  bool v13; // zf
  _OWORD v14[7]; // [rsp+40h] [rbp-C0h] BYREF
  PERESOURCE *v15[6]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v16[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v17[128]; // [rsp+120h] [rbp+20h] BYREF

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10992);
  if ( (*((_DWORD *)gptiCurrent + 308) & 0x2000) == 0 )
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
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 54) + 39LL) & 8) == 0 )
        {
LABEL_12:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v16,
              (struct CPointerInfoNode *)((char *)a2 + 352));
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v15,
              (struct CInpLockGuard *)(this + 5),
              *((void **)a2 + 2));
            v5 = *((_QWORD *)a2 + 2);
            v6 = *((_OWORD *)a2 + 23);
            v7 = *((unsigned __int16 *)a2 + 72);
            v14[0] = *((_OWORD *)a2 + 22);
            v8 = *((_OWORD *)a2 + 24);
            v14[1] = v6;
            v9 = *((_OWORD *)a2 + 25);
            v14[2] = v8;
            v10 = *((_OWORD *)a2 + 26);
            v14[3] = v9;
            v11 = *((_OWORD *)a2 + 27);
            v14[4] = v10;
            v12 = *((_OWORD *)a2 + 28);
            v14[5] = v11;
            v14[6] = v12;
            ApiSetEditionPointerActivate(v14, v7, v5, (char *)a2 + 160);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v15);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v16);
          }
          return;
        }
      }
      else if ( *((_DWORD *)a2 + 111) != 2
             || !(unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 54)) )
      {
        goto LABEL_12;
      }
      v13 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
      *((_DWORD *)a2 + 36) = -2;
      if ( !v13 )
      {
        CInputDest::CInputDest((CInputDest *)v17, (__int64 **)a2 + 44);
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v17,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v17);
      }
    }
  }
}
