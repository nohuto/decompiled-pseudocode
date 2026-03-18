/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01CD840
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CDA24 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E8782 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B8DD8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D6698 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C0208830 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C0209DE4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(
        struct _KTHREAD **this,
        struct CPointerInfoNode *a2,
        __int64 a3)
{
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  bool v15; // zf
  PERESOURCE *v16[6]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[64]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v18[8]; // [rsp+A0h] [rbp-60h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*((_DWORD *)gptiCurrent + 314) & 0x2000) == 0 )
  {
    v5 = *((_DWORD *)a2 + 1);
    if ( (v5 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v5 & 0x80u) != 0
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
              (CThreadLockInputDest *)v17,
              (struct CPointerInfoNode *)((char *)a2 + 352),
              v6);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v16,
              this + 4,
              *((void **)a2 + 2));
            v7 = *((_QWORD *)a2 + 2);
            v8 = *((_OWORD *)a2 + 23);
            v9 = *((unsigned __int16 *)a2 + 72);
            v18[0] = *((_OWORD *)a2 + 22);
            v10 = *((_OWORD *)a2 + 24);
            v18[1] = v8;
            v11 = *((_OWORD *)a2 + 25);
            v18[2] = v10;
            v12 = *((_OWORD *)a2 + 26);
            v18[3] = v11;
            v13 = *((_OWORD *)a2 + 27);
            v18[4] = v12;
            v14 = *((_OWORD *)a2 + 28);
            v18[5] = v13;
            v18[6] = v14;
            ApiSetEditionPointerActivate(v18, v9, v7, (char *)a2 + 160);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v16);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v17);
          }
          return;
        }
      }
      else if ( *((_DWORD *)a2 + 111) != 2
             || !(unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 54)) )
      {
        goto LABEL_12;
      }
      v15 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
      *((_DWORD *)a2 + 36) = -2;
      if ( !v15 )
      {
        CInputDest::CInputDest((CInputDest *)v18, (__int64 **)a2 + 44);
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v18,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v18);
      }
    }
  }
}
