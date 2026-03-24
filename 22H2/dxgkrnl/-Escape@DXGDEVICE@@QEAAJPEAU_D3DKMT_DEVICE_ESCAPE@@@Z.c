/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02555BC
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 Type; // rcx
  __int64 v10; // rax
  struct _KTHREAD **Current; // rax
  D3DKMT_HANDLE hPrimaryAllocation; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGPROCESS *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  ULONG_PTR Count; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  _BYTE v33[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v34; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v8 + 24) = 5198LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Type = (unsigned int)a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    v10 = WdLogNewEntry5_WdWarning(Type, v3, v5);
    *(_QWORD *)(v10 + 24) = a2->Type;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)-1073741811;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(Type, v3, v5, v6);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, Current);
  hPrimaryAllocation = a2->VidPnFromAllocation.hPrimaryAllocation;
  v18 = DXGPROCESS::GetCurrent(v15, v14, v16, v17);
  v19 = (hPrimaryAllocation >> 6) & 0xFFFFFF;
  if ( v19 >= *((_DWORD *)v18 + 64) )
    goto LABEL_13;
  v20 = *((_QWORD *)v18 + 30);
  v21 = v19;
  v22 = *(_DWORD *)(v20 + 16LL * v19 + 8);
  if ( ((hPrimaryAllocation >> 25) & 0x60) != (v22 & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_13;
  v23 = 2 * v21;
  v24 = v22 & 0x1F;
  if ( (_BYTE)v24 != 5 )
  {
    v25 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v25 + 24) = 316LL;
    WdLogEvent5_WdError(v25);
LABEL_13:
    v26 = 0LL;
    goto LABEL_14;
  }
  v26 = *(struct _EX_RUNDOWN_REF **)(v20 + 8 * v23);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34, v26);
  if ( !v34
    || (Count = v34[6].Count, v30 = *(_DWORD *)(Count + 4), (v30 & 1) == 0) && (v30 & 2) == 0 && (v30 & 0x2000) == 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(Count, v27, v29);
    *(_QWORD *)(v31 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v32);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    return 3221225485LL;
  }
  a2->VidPnFromAllocation.VidPnSourceId = (v30 >> 6) & 0xF;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v27);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v7;
}
