/*
 * XREFs of NtUserAssociateInputContext @ 0x1C0118820
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     AssociateInputContextEx @ 0x1C01188E0 (AssociateInputContextEx.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_10;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v6, v8);
    goto LABEL_10;
  }
  if ( a2 )
  {
    v9 = HMValidateHandle(a2, 0x11u);
    if ( v9 )
      goto LABEL_5;
LABEL_10:
    v10 = 2;
    goto LABEL_6;
  }
  v9 = 0LL;
LABEL_5:
  v10 = AssociateInputContextEx(v7, v9, a3);
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11);
  return v10;
}
