/*
 * XREFs of REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___ @ 0x1C002007C
 * Callers:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0002468 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000195C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C004F810 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C02C423C (--_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___(
        REMOTE_VYSNC_MAPPING_ENTRY *a1,
        _DWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // esi
  int v6; // r8d
  REMOTE_VYSNC_MAPPING_ENTRY *v7; // rdi
  REMOTE_VYSNC_MAPPING_ENTRY *v8; // rdi
  REMOTE_VYSNC_MAPPING_ENTRY *v10; // rbx
  int v11; // edx
  REMOTE_VYSNC_MAPPING_ENTRY *v12; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY **v13; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v14; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v15; // rbx
  unsigned int v16; // edx
  REMOTE_VYSNC_MAPPING_ENTRY *v17; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY **v18; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v19[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v22; // [rsp+78h] [rbp-8h]

  v2 = (_QWORD *)((char *)a1 + 16);
  v22 = 0;
  v20 = (_QWORD *)((char *)a1 + 16);
  v19[1] = (REMOTE_VYSNC_MAPPING_ENTRY *)v19;
  v19[0] = (REMOTE_VYSNC_MAPPING_ENTRY *)v19;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v7 = *(REMOTE_VYSNC_MAPPING_ENTRY **)a1;
  v22 = 1;
  if ( v7 == a1 )
    goto LABEL_2;
  do
  {
    v10 = v7;
    v7 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v7;
    if ( *((_DWORD *)v10 + 4) == **a2 && *((_DWORD *)v10 + 5) == (*a2)[1] )
    {
      v11 = *((_DWORD *)v10 + 6);
      if ( v11 == *a2[1] )
      {
        v12 = v7;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        {
          McTemplateK0xqpp_EtwWriteTransfer(
            (_DWORD)v7,
            (unsigned int)&RemoteVSyncRemoveMapping,
            v6,
            *((_QWORD *)v10 + 2),
            v11,
            *((_QWORD *)v10 + 5),
            *((_QWORD *)v10 + 4));
          v12 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v10;
        }
        if ( *((REMOTE_VYSNC_MAPPING_ENTRY **)v12 + 1) != v10
          || (v13 = (REMOTE_VYSNC_MAPPING_ENTRY **)*((_QWORD *)v10 + 1), *v13 != v10)
          || (*v13 = v12, *((_QWORD *)v12 + 1) = v13, v14 = v19[0], *((REMOTE_VYSNC_MAPPING_ENTRY ***)v19[0] + 1) != v19) )
        {
LABEL_21:
          __fastfail(3u);
        }
        *(REMOTE_VYSNC_MAPPING_ENTRY **)v10 = v19[0];
        *((_QWORD *)v10 + 1) = v19;
        v5 = 0;
        *((_QWORD *)v14 + 1) = v10;
        v19[0] = v10;
      }
    }
  }
  while ( v7 != a1 );
  if ( v22 )
  {
LABEL_2:
    v22 = 0;
    v20[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v8 = v19[0];
  while ( v8 != (REMOTE_VYSNC_MAPPING_ENTRY *)v19 )
  {
    v15 = v8;
    v8 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v8;
    DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v15 + 7), *((_DWORD *)v15 + 12));
    v17 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v15;
    if ( *(REMOTE_VYSNC_MAPPING_ENTRY **)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_21;
    v18 = (REMOTE_VYSNC_MAPPING_ENTRY **)*((_QWORD *)v15 + 1);
    if ( *v18 != v15 )
      goto LABEL_21;
    *v18 = v17;
    *((_QWORD *)v17 + 1) = v18;
    REMOTE_VYSNC_MAPPING_ENTRY::`scalar deleting destructor'(v15, v16);
  }
  return v5;
}
