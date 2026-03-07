__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  struct _EX_RUNDOWN_REF *v9; // rdx
  __int64 v10; // rcx
  bool v11; // cf
  struct _EX_RUNDOWN_REF *v12; // rax
  __int64 v13; // r9
  ULONG_PTR Count; // rdx
  unsigned int v15; // ebx
  struct _EX_RUNDOWN_REF *v17; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v19);
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, Current);
  v4 = (*a1 >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)Current + 35);
  v6 = 2LL * v4;
  v7 = *(_DWORD *)(v5 + 16LL * v4 + 8);
  if ( ((*a1 >> 25) & 0x60) != (v7 & 0x60) )
    goto LABEL_7;
  if ( (v7 & 0x2000) != 0 )
    goto LABEL_7;
  v8 = v7 & 0x1F;
  if ( !v8 )
    goto LABEL_7;
  if ( v8 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = *(struct _EX_RUNDOWN_REF **)(v5 + 8 * v6);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17, v9);
  if ( !v17 )
    goto LABEL_18;
  v10 = *(_QWORD *)(v17[1].Count + 16);
  if ( !v10 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v10 + 16)) )
    goto LABEL_18;
  v11 = KeGetCurrentIrql() < 2u;
  v12 = v17;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v17[1].Count + 16) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, v13, 0LL, 0LL);
      v12 = v17;
    }
  }
  Count = v12[6].Count;
  if ( (*(_DWORD *)(Count + 4) & 0x20) != 0 && (v12[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12[1].Count + 16) + 760LL)
                                                                                               + 8LL)
                                                                                   + 208LL))(
      *(_QWORD *)(*(_QWORD *)(v12[1].Count + 16) + 768LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2,
      0LL);
    v15 = 0;
  }
  else
  {
LABEL_18:
    WdLogSingleEntry1(3LL, *a1);
    v15 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v17);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  return v15;
}
