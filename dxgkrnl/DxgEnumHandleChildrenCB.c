__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // ecx
  struct _EX_RUNDOWN_REF *v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // edx
  ULONG_PTR Count; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  struct _EX_RUNDOWN_REF *v15; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v17);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, Current);
  v4 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)Current + 35);
  v6 = 2 * v4;
  if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v5 + 8 * v6 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v5 + 8 * v6 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v7 = *(_DWORD *)(v5 + 8 * v6 + 8) & 0x1F;
  if ( !v7 )
    goto LABEL_7;
  if ( v7 != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v8 = 0LL;
    goto LABEL_8;
  }
  v8 = *(struct _EX_RUNDOWN_REF **)(v5 + 8 * v6);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v15, v8);
  if ( !v15 )
  {
    WdLogSingleEntry1(3LL, *a1);
    goto LABEL_18;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry5(0LL, 275LL, 20LL, v9, 0LL, 0LL);
  }
  v10 = a1[1];
  Count = v15[3].Count;
  v12 = 0;
  if ( v10 )
  {
    while ( Count )
    {
      Count = *(_QWORD *)(Count + 64);
      if ( ++v12 >= v10 )
        goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_17:
  if ( !Count )
  {
LABEL_18:
    v13 = 0;
    goto LABEL_20;
  }
  v13 = *(_DWORD *)(Count + 16);
LABEL_20:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v15);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  if ( v17[0] )
    KeUnstackDetachProcess(&ApcState);
  return v13;
}
