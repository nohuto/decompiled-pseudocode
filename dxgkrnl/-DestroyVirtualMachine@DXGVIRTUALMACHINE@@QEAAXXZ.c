void __fastcall DXGVIRTUALMACHINE::DestroyVirtualMachine(char *P)
{
  char *v2; // rsi
  char *v3; // rdi
  __int64 v4; // rax
  char *v5; // rdi
  struct DXGADAPTER *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13[8]; // [rsp+40h] [rbp-59h] BYREF
  DXGPUSHLOCK *v14; // [rsp+48h] [rbp-51h]
  int v15; // [rsp+50h] [rbp-49h]
  char v16[8]; // [rsp+58h] [rbp-41h] BYREF
  DXGPUSHLOCK *v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+68h] [rbp-31h]
  char v19[8]; // [rsp+70h] [rbp-29h] BYREF
  DXGPUSHLOCK *v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+80h] [rbp-19h]
  _BYTE v22[64]; // [rsp+90h] [rbp-9h] BYREF

  v2 = P + 40;
  while ( 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(P + 96));
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    *((_QWORD *)P + 13) = 0LL;
    ExReleasePushLockExclusiveEx(P + 96, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 == v2 )
      break;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    v5 = v3 - 136;
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305188) )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 176LL))(v5);
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)P + 8, 0);
      DXGPUSHLOCK::AcquireExclusive(v20);
      v6 = (struct DXGADAPTER *)*((_QWORD *)v5 + 2);
      v21 = 2;
      COREACCESS::COREACCESS((COREACCESS *)v22, v6);
      COREACCESS::AcquireShared((COREACCESS *)v22, 0LL);
      v7 = *((_QWORD *)v5 + 1);
      if ( v5[152] )
        v8 = *(_QWORD *)(v7 + 1872);
      else
        v8 = *(_QWORD *)(v7 + 1864);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(v8 + 40), 0);
      DXGPUSHLOCK::AcquireExclusive(v17);
      v18 = 2;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)v5 + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v14);
      v9 = *(_QWORD *)v5;
      LOBYTE(v10) = 1;
      v15 = 2;
      (*(void (__fastcall **)(char *, _QWORD, __int64))(v9 + 16))(v5, 0LL, v10);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    }
  }
  DXGVIRTUALMACHINE::ResetVirtualMachine((DXGVIRTUALMACHINE *)P, 1u);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppj_EtwWriteTransfer(
      v11,
      &EventDestroyVirtualMachine,
      v12,
      P,
      *((_QWORD *)P + 7),
      *((_QWORD *)P + 34),
      P + 288);
  if ( P )
    DXGVIRTUALMACHINE::`scalar deleting destructor'((DXGVIRTUALMACHINE *)P);
}
