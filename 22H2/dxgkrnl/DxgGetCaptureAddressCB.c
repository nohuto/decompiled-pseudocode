/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C0257B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  ULONG_PTR Count; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 CurrentIrql; // al
  bool v19; // cf
  struct _EX_RUNDOWN_REF *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v28; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v29[24]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v30[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v30);
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, (struct _KTHREAD **)Current);
  v7 = (*a1 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)Current + 64) )
    goto LABEL_7;
  v8 = *((_QWORD *)Current + 30);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 16LL * v7 + 8);
  if ( ((*a1 >> 25) & 0x60) != (v10 & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
    goto LABEL_7;
  v11 = 2 * v9;
  v12 = v10 & 0x1F;
  if ( (_BYTE)v12 != 5 )
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = 316LL;
    WdLogEvent5_WdError(v13);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v8 + 8 * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v14);
  if ( !v28 )
    goto LABEL_18;
  v16 = *(_QWORD *)(v28[1].Count + 16);
  if ( !v16 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v16 + 16)) )
    goto LABEL_18;
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql < 2u;
  v20 = v28;
  if ( !v19 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL) + 216LL) + 64LL);
    v22 = *(_QWORD *)(v21 + 40);
    if ( *(_DWORD *)(v22 + 28) >= 0x2003u )
    {
      v23 = WdLogNewEntry5_WdCriticalError(v21, v22);
      *(_QWORD *)(v23 + 24) = 275LL;
      *(_QWORD *)(v23 + 32) = 20LL;
      *(_QWORD *)(v23 + 40) = *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL);
      *(_OWORD *)(v23 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v23);
      v20 = v28;
    }
  }
  Count = v20[6].Count;
  v16 = *(unsigned int *)(Count + 4);
  if ( (v16 & 0x20) != 0 && (v20[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20[1].Count + 16) + 640LL)
                                                                                               + 8LL)
                                                                                   + 224LL))(
      *(_QWORD *)(*(_QWORD *)(v20[1].Count + 16) + 648LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2,
      0LL);
    v25 = 0;
  }
  else
  {
LABEL_18:
    v26 = WdLogNewEntry5_WdWarning(v16, Count, v17);
    *(_QWORD *)(v26 + 24) = *a1;
    WdLogEvent5_WdWarning(v26);
    v25 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28, v24);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  return v25;
}
