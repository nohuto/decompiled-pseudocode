/*
 * XREFs of ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0326AC4
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C0326D24 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0376288 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpCreateSharedVmObjectsForExistingResource(
        struct DXGPROCESSVMWP *a1,
        void *a2,
        struct _DXGSHAREDALLOCOBJECT *a3,
        struct DXGSHAREDVMOBJECT **a4,
        unsigned int *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  DXGSHAREDVMOBJECT *v15; // rbx
  unsigned int *v16; // rax
  int v18; // [rsp+38h] [rbp-60h]
  _BYTE v19[32]; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  Handle = 0LL;
  v9 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry1(1LL, 2959LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSharedObject->pSharedResource != nullptr",
      2959LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 76) + 280LL);
  CurrentProcess = PsGetCurrentProcess(a1);
  LOBYTE(v18) = 0;
  v12 = ObDuplicateObject(CurrentProcess, a2, v10, &Handle, 0, 512, 6, v18);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v12);
    goto LABEL_10;
  }
  v14 = operator new[](0x20uLL, 0x4B677844u, 256LL);
  v15 = (DXGSHAREDVMOBJECT *)v14;
  if ( !v14 )
  {
    WdLogSingleEntry1(6LL, 2981LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
      2981LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = -1073741801;
LABEL_10:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_12;
  }
  *(_DWORD *)(v14 + 24) = 1;
  *(_DWORD *)v14 = 4;
  *(_QWORD *)(v14 + 8) = a3;
  *(_QWORD *)(v14 + 16) = Handle;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v19, a1);
  v9 = HMGRTABLE::AllocHandle((unsigned int *)a1 + 70, (__int64)v15, 13, 0, 0);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, 3002LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate NT shared object handle",
      3002LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = -1073741801;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    DXGSHAREDVMOBJECT::ReleaseReference(v15);
LABEL_12:
    v15 = 0LL;
    goto LABEL_13;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
LABEL_13:
  v16 = a5;
  *a4 = v15;
  *v16 = v9;
  return v13;
}
