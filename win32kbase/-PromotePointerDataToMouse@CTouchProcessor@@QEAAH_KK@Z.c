__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, void *a2, unsigned int a3)
{
  struct CInpLockGuard *v3; // r14
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  unsigned __int16 v12; // di
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[40]; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v19; // [rsp+48h] [rbp-40h]
  _BYTE v20[48]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (CTouchProcessor *)((char *)this + 32);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v20,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (__int64)a2);
  v9 = 0;
  if ( NonConstMsgData )
  {
    if ( a3 == 0x10000000 )
    {
      v10 = *((_DWORD *)NonConstMsgData + 9);
      if ( (v10 & 1) != 0 )
      {
        a3 = 0;
      }
      else if ( (v10 & 2) == 0 && (v10 & 4) == 0 )
      {
        goto LABEL_13;
      }
    }
    v11 = *((_DWORD *)NonConstMsgData + 9);
    if ( (v11 & 0x10) != 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        if ( !a3 )
          goto LABEL_12;
      }
      else if ( a3 )
      {
LABEL_12:
        v12 = *((_WORD *)NonConstMsgData + 8);
        v13 = *((_DWORD *)NonConstMsgData + 7);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v18, v3, a2, v8);
        v9 = ApiSetEditionPromotePointer(v12, v13, a3);
        CInpLockGuard::LockExclusive(v19);
        CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v18, v14, v15, v16);
      }
    }
  }
LABEL_13:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v20);
  return v9;
}
