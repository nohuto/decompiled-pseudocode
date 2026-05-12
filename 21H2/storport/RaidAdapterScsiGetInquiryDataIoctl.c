/*
 * XREFs of RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002EA78
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0020540 (memset.c)
 */

__int64 __fastcall RaidAdapterScsiGetInquiryDataIoctl(__int64 a1, IRP *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  unsigned int v6; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IRP *MasterIrp; // r15
  __int64 v9; // r14
  unsigned int v10; // r12d
  __int64 *v11; // r9
  __int64 *i; // rcx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8
  _DWORD *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 *v20; // r8
  __int64 v21; // r10
  int v22; // eax
  __int64 v23; // r11
  __int64 v24; // rcx
  char v25; // al
  unsigned int v26; // r9d
  _DWORD *v27; // r8
  _DWORD *p_MdlAddress; // rdx
  char v29; // cl
  char v30; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFF0uLL, 0x32316152u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFF0uLL);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v9 = *(unsigned __int8 *)(a1 + 400);
    v10 = 8 * (v9 + 6 * *(_DWORD *)(a1 + 152)) + 4;
    if ( CurrentStackLocation->Parameters.Read.Length >= v10 )
    {
      v11 = (__int64 *)(a1 + 136);
      for ( i = *(__int64 **)(a1 + 136); i != v11; i = (__int64 *)*i )
      {
        if ( (i[49] & 8) == 0 )
        {
          v13 = *((_DWORD *)i + 10);
          if ( (_BYTE)v13 != 0xFF )
          {
            v14 = 2LL * (unsigned __int8)v13;
            v15 = v5[4 * (unsigned __int8)v13];
            if ( v15 >= 0xFF )
            {
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              ExFreePoolWithTag(v5, 0x32316152u);
              v6 = -1073741637;
              return RaidCompleteRequestEx(a2, 0, v6);
            }
            v5[2 * v14] = v15 + 1;
          }
        }
      }
      v16 = 0LL;
      if ( (_DWORD)v9 )
      {
        v17 = v5;
        v18 = v9;
        do
        {
          v19 = 3 * v16;
          v16 = (unsigned int)(*v17 + v16);
          v17 += 4;
          *((_QWORD *)v17 - 1) = (char *)MasterIrp + 16 * v19 + (unsigned int)(8 * v9 + 4);
          --v18;
        }
        while ( v18 );
      }
      v20 = (__int64 *)*v11;
      v21 = 0LL;
      if ( (__int64 *)*v11 != v11 )
      {
        do
        {
          if ( (v20[49] & 8) == 0 )
          {
            v22 = *((_DWORD *)v20 + 10);
            v23 = v20[6];
            if ( (_BYTE)v22 != 0xFF )
            {
              v24 = (unsigned int)v5[4 * (unsigned __int8)v22 + 1];
              v21 = *(_QWORD *)&v5[4 * (unsigned __int8)v22 + 2] + 48 * v24;
              v5[4 * (unsigned __int8)v22 + 1] = v24 + 1;
              *(_BYTE *)v21 = v22;
              *(_BYTE *)(v21 + 2) = BYTE2(v22);
              *(_BYTE *)(v21 + 1) = BYTE1(v22);
              v25 = v20[49] & 1;
              *(_DWORD *)(v21 + 4) = 36;
              *(_BYTE *)(v21 + 3) = v25;
              *(_DWORD *)(v21 + 8) = v21 - (_DWORD)MasterIrp + 48;
              *(_OWORD *)(v21 + 12) = *(_OWORD *)v23;
              *(_OWORD *)(v21 + 28) = *(_OWORD *)(v23 + 16);
              *(_DWORD *)(v21 + 44) = *(_DWORD *)(v23 + 32);
            }
          }
          v20 = (__int64 *)*v20;
        }
        while ( v20 != v11 );
        if ( v21 )
          *(_DWORD *)(v21 + 8) = 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v26 = 0;
      if ( (_DWORD)v9 )
      {
        v27 = v5;
        p_MdlAddress = &MasterIrp->MdlAddress;
        do
        {
          v29 = *(_BYTE *)v27;
          *((_BYTE *)p_MdlAddress - 4) = *(_BYTE *)v27;
          if ( (unsigned __int8)v26 < 8u )
            v30 = *(_BYTE *)((unsigned __int8)v26 + a1 + 401);
          else
            v30 = -1;
          *((_BYTE *)p_MdlAddress - 3) = v30;
          if ( v29 )
          {
            *p_MdlAddress = v27[2] - (_DWORD)MasterIrp;
            *(_DWORD *)(*((_QWORD *)v27 + 1) + 48LL * (unsigned int)(*v27 - 1) + 8) = 0;
          }
          else
          {
            *p_MdlAddress = 0;
          }
          ++v26;
          p_MdlAddress += 2;
          v27 += 4;
        }
        while ( v26 < (unsigned int)v9 );
      }
      LOBYTE(MasterIrp->Type) = v9;
      ExFreePoolWithTag(v5, 0x32316152u);
      v6 = 0;
      a2->IoStatus.Information = v10;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(v5, 0x32316152u);
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  return RaidCompleteRequestEx(a2, 0, v6);
}
