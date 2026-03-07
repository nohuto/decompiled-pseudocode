__int64 __fastcall TdrResetFromTimeout(struct _TDR_RECOVERY_CONTEXT *a1)
{
  struct _KTHREAD *v2; // rcx
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v4; // rax
  __int64 v5; // r8

  if ( (int)DXGADAPTER::Reset(*((DXGADAPTER **)a1 + 4), a1) < 0 )
  {
    *((_QWORD *)a1 + 13) = -1LL;
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  v2 = (struct _KTHREAD *)*((_QWORD *)a1 + 363);
  if ( (!v2 || KeGetCurrentThread() == v2) && *(_QWORD *)(*((_QWORD *)a1 + 4) + 2920LL) )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL);
    if ( !Pool2 )
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_QWORD *)Pool2 = &CTDR_GDI_RESET_THREAD::`vftable';
    v4 = TdrReferenceRecoveryContext(a1);
    *(_QWORD *)(v5 + 24) = v4;
    if ( CVP_SYSTEM_THREAD::Start((void **)v5) < 0 )
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  return 0LL;
}
