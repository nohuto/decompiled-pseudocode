/*
 * XREFs of ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0277AC0
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C0277CDC (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpCreateSharedVmObjectsForExistingResource(
        struct DXGPROCESSVMWP *a1,
        void *a2,
        struct _DXGSHAREDALLOCOBJECT *a3,
        struct DXGSHAREDVMOBJECT **a4,
        unsigned int *a5)
{
  DXGSHAREDVMOBJECT *v5; // rdi
  unsigned int v6; // esi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 CurrentProcess; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  DXGSHAREDVMOBJECT *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned int *v27; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE v32[32]; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  Handle = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 2724LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 62) + 240LL);
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v14 = ObDuplicateObject(CurrentProcess, a2, v12, &Handle, 0, 512, 6, 0);
  v18 = v14;
  if ( v14 >= 0 )
  {
    v21 = (DXGSHAREDVMOBJECT *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
    v5 = v21;
    if ( v21 )
    {
      *(_DWORD *)v21 = 0;
      *((_QWORD *)v21 + 1) = 0LL;
      *((_DWORD *)v21 + 4) = 0;
      *((_DWORD *)v21 + 6) = 1;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = 2746LL;
      WdLogEvent5_WdLowResource(v26);
      LODWORD(v18) = -1073741801;
      goto LABEL_10;
    }
    *(_DWORD *)v5 = 4;
    *((_QWORD *)v5 + 1) = a3;
    *((_QWORD *)v5 + 2) = Handle;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v32, (struct _KTHREAD **)a1);
    v6 = HMGRTABLE::AllocHandle((unsigned int *)a1 + 60, (__int64)v5, 13, 0, 0);
    if ( !v6 )
    {
      v31 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v31 + 24) = 2767LL;
      WdLogEvent5_WdError(v31);
      LODWORD(v18) = -1073741801;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      goto LABEL_18;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdWarning(v19);
  }
  if ( (int)v18 >= 0 )
    goto LABEL_13;
LABEL_18:
  if ( !v5 )
  {
LABEL_10:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_12;
  }
  DXGSHAREDVMOBJECT::ReleaseReference(v5, v20);
LABEL_12:
  v5 = 0LL;
LABEL_13:
  v27 = a5;
  *a4 = v5;
  *v27 = v6;
  return (unsigned int)v18;
}
