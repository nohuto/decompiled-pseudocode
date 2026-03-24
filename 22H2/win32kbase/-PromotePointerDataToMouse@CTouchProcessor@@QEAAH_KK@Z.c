/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C019A910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ApiSetEditionPromotePointer @ 0x1C01CD700 (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  struct CInpLockGuard *v3; // r14
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  unsigned __int16 v9; // di
  unsigned int v10; // ebx
  PERESOURCE *v12[6]; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v13[6]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (CTouchProcessor *)((char *)this + 40);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v13,
    (CTouchProcessor *)((char *)this + 40),
    (void *)a2);
  v6 = 0;
  if ( a2 )
  {
    if ( a3 == 0x10000000 )
    {
      v7 = *(_DWORD *)(a2 + 36);
      if ( (v7 & 1) != 0 )
      {
        a3 = 0;
      }
      else if ( (v7 & 2) == 0 && (v7 & 4) == 0 )
      {
        goto LABEL_13;
      }
    }
    v8 = *(_DWORD *)(a2 + 36);
    if ( (v8 & 0x10) != 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        if ( !a3 )
          goto LABEL_12;
      }
      else if ( a3 )
      {
LABEL_12:
        v9 = *(_WORD *)(a2 + 16);
        v10 = *(_DWORD *)(a2 + 28);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v12, v3, (void *)a2);
        v6 = ApiSetEditionPromotePointer(v9, v10, a3);
        CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v12);
      }
    }
  }
LABEL_13:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v13);
  return v6;
}
