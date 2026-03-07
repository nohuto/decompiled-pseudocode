__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // edx
  int v8; // edx
  struct _EX_RUNDOWN_REF *v9; // rdx
  ULONG_PTR Count; // rcx
  unsigned int v11; // ebx
  struct _EX_RUNDOWN_REF *v13; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v15[8]; // [rsp+70h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v15);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v14, Current);
  v4 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)Current + 35);
  v6 = 2LL * v4;
  v7 = *(_DWORD *)(v5 + 16LL * v4 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (v7 & 0x60) )
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v13, v9);
  if ( v13 )
  {
    Count = v13[5].Count;
    if ( Count )
    {
      v11 = *(_DWORD *)(Count + 16);
      goto LABEL_14;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v1);
  }
  v11 = 0;
LABEL_14:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( v15[0] )
    KeUnstackDetachProcess(&ApcState);
  return v11;
}
