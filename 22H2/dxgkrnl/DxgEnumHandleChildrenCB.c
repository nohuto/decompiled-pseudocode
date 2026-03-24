/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C0257970
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005774 (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _EX_RUNDOWN_REF *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  ULONG_PTR Count; // rcx
  int v25; // eax
  struct _EX_RUNDOWN_REF *v27; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v28[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v29[56]; // [rsp+40h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v29);
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)Current);
  v7 = 0;
  v8 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 >= *((_DWORD *)Current + 64) )
    goto LABEL_7;
  v9 = *((_QWORD *)Current + 30);
  v10 = *(_DWORD *)(v9 + 16LL * (unsigned int)v8 + 8);
  if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * (unsigned int)v8 + 8) & 0x60)
    || (v10 & 0x2000) != 0
    || (v10 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v11 = 2 * v8;
  v12 = v10 & 0x1F;
  if ( (_BYTE)v12 != 4 )
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = 316LL;
    WdLogEvent5_WdError(v13);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v9 + 8 * v11);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v27, v14);
  v18 = v27;
  if ( v27 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL) + 216LL) + 64LL);
      v22 = *(_QWORD *)(v21 + 40);
      if ( *(_DWORD *)(v22 + 28) >= 0x2003u )
      {
        v23 = WdLogNewEntry5_WdCriticalError(v21, v22);
        *(_QWORD *)(v23 + 24) = 275LL;
        *(_QWORD *)(v23 + 32) = 20LL;
        *(_QWORD *)(v23 + 40) = *(_QWORD *)(*(_QWORD *)(v27[1].Count + 16) + 16LL);
        *(_OWORD *)(v23 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v23);
        v18 = v27;
      }
    }
    v20 = a1[1];
    Count = v18[3].Count;
    v25 = 0;
    if ( (_DWORD)v20 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v25 >= (unsigned int)v20 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( Count )
        v7 = *(_DWORD *)(Count + 16);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = *a1;
    WdLogEvent5_WdWarning(v19);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v27, v20);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v29);
  return v7;
}
