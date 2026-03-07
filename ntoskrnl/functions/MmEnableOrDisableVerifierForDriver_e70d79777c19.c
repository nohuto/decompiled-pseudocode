__int64 __fastcall MmEnableOrDisableVerifierForDriver(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  struct _KTHREAD *Lock; // rbp
  unsigned int v9; // eax

  v3 = 0;
  *a2 = 0;
  Lock = MmAcquireLoadLock();
  if ( (a3 & 1) != 0 )
  {
    v9 = VfDriverEnableVerifier(a1, 0LL, a2);
LABEL_7:
    v3 = v9;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = VfDriverApplyDifVerification(a1, v7, a2);
    goto LABEL_7;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = VfDriverRemoveDifVerification(a1);
    goto LABEL_7;
  }
LABEL_8:
  MmReleaseLoadLock((__int64)Lock);
  return v3;
}
