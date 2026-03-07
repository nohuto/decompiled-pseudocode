struct DXGVIRTUALMACHINE *__fastcall FindVirtualMachineByGuidAndAcquireLock(struct _GUID *a1)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD *v3; // rbx
  struct DXGGLOBAL *v4; // rax
  _QWORD **v5; // r8
  _QWORD *i; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v13[8]; // [rsp+20h] [rbp-58h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h]
  char v16[8]; // [rsp+38h] [rbp-40h] BYREF
  DXGPUSHLOCK *v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-28h]

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)Global + 57, 0);
  DXGPUSHLOCK::AcquireExclusive(v17);
  v3 = 0LL;
  v18 = 2;
  v4 = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)v4 + 61, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v15 = 2;
  v5 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 1720);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = *(_QWORD *)&a1->Data1;
    v8 = i - 1;
    v9 = i[35];
    v19 = 0LL;
    v10 = v9 - v7;
    if ( !v10 )
      v10 = v8[37] - *(_QWORD *)a1->Data4;
    if ( !v10 )
      goto LABEL_11;
    v11 = v7 - v19;
    if ( !v11 )
      v11 = *(_QWORD *)a1->Data4 - *((_QWORD *)&v19 + 1);
    if ( !v11 )
    {
LABEL_11:
      WdLogSingleEntry1(4LL, i - 1);
      v3 = v8;
      break;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  if ( v3 )
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v3 + 8));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return (struct DXGVIRTUALMACHINE *)v3;
}
