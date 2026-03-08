/*
 * XREFs of ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x1C002A184
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C006D2EC (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CB880 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     _lambda_65e49200310e163fd0a118e331418de0_::operator() @ 0x1C0056C60 (_lambda_65e49200310e163fd0a118e331418de0_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING::TriggerRemoteVsync(KSPIN_LOCK *this, struct _LUID a2, int a3, int a4, char a5)
{
  char *v5; // rbx
  bool v7; // zf
  HOSTVMMONITORMAPPING *v8; // rbx
  HOSTVMMONITORMAPPING *v9; // rdx
  _QWORD v10[5]; // [rsp+20h] [rbp-50h] BYREF
  char *v11; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v13; // [rsp+68h] [rbp-8h]
  struct _LUID v14; // [rsp+98h] [rbp+28h] BYREF
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v5 = (char *)(this + 2);
  v13 = 0;
  v11 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v7 = *((_BYTE *)this + 32) == 0;
  v13 = 1;
  if ( !v7 )
    goto LABEL_6;
  v8 = (HOSTVMMONITORMAPPING *)*this;
  v10[0] = &v14;
  v10[1] = &v15;
  v10[2] = &v16;
  v10[3] = &a5;
  if ( v8 == (HOSTVMMONITORMAPPING *)this )
    goto LABEL_6;
  do
  {
    v9 = v8;
    v8 = *(HOSTVMMONITORMAPPING **)v8;
  }
  while ( (unsigned __int8)lambda_65e49200310e163fd0a118e331418de0_::operator()(v10, v9)
       && v8 != (HOSTVMMONITORMAPPING *)this );
  if ( v13 )
  {
LABEL_6:
    v13 = 0;
    *((_QWORD *)v11 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
