/*
 * XREFs of DxgGetHandleParentCB @ 0x1C0257DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG_PTR Count; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v22; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v23[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, (struct _KTHREAD **)Current);
  v7 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)Current + 64) )
    goto LABEL_7;
  v8 = *((_QWORD *)Current + 30);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 16LL * v7 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (v10 & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
    goto LABEL_7;
  v11 = 2 * v9;
  v12 = v10 & 0x1F;
  if ( (_BYTE)v12 != 5 )
  {
    v13 = WdLogNewEntry5_WdError(((unsigned int)v1 >> 25) & 0x60, v12);
    *(_QWORD *)(v13 + 24) = 316LL;
    WdLogEvent5_WdError(v13);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v8 + 8 * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v14);
  if ( v22 )
  {
    Count = v22[5].Count;
    if ( Count )
    {
      v19 = *(_DWORD *)(Count + 16);
      goto LABEL_14;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v20 + 24) = v1;
    WdLogEvent5_WdWarning(v20);
  }
  v19 = 0;
LABEL_14:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22, v15);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  return v19;
}
