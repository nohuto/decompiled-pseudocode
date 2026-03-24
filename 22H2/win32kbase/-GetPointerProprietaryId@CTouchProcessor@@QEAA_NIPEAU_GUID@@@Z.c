/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01947FC
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1C012FA90 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCCC0 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E2A4 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(CTouchProcessor *this, unsigned __int16 a2, struct _GUID *a3)
{
  struct _KTHREAD **v3; // rbx
  struct CInputPointerNode *NodeById; // rax
  char v7; // bl
  CInpLockGuard *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct _KTHREAD **)gpTouchProcessor;
  *a3 = 0LL;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v9, (struct CInpLockGuard *)(v3 + 5), 0);
  NodeById = CTouchProcessor::FindNodeById(v3, a2, 0, 0);
  v7 = 0;
  if ( NodeById
    && (*(_QWORD *)((char *)NodeById + 36) != *(_QWORD *)&a3->Data1
     || *(_QWORD *)((char *)NodeById + 44) != *(_QWORD *)a3->Data4) )
  {
    v7 = 1;
    *a3 = *(struct _GUID *)((char *)NodeById + 36);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v9);
  return v7;
}
