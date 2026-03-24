/*
 * XREFs of CmpTransWriteLog @ 0x1407631B8
 * Callers:
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x1407630E8 (CmLogTmRmAction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpComputeLogFillLevel @ 0x1407632B8 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x140763404 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x1407702A4 (CmpLogCheckpoint.c)
 *     CmpAddRemoveRMLogContainer @ 0x140875224 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r14d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  int v19; // edx
  int v20; // r9d
  unsigned int v21; // [rsp+30h] [rbp-A1h] BYREF
  int v22; // [rsp+34h] [rbp-9Dh] BYREF
  int v23; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-95h]
  int v25; // [rsp+40h] [rbp-91h] BYREF
  int v26; // [rsp+44h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+50h] [rbp-81h] BYREF
  int *v28; // [rsp+70h] [rbp-61h]
  int v29; // [rsp+78h] [rbp-59h]
  int v30; // [rsp+7Ch] [rbp-55h]
  int *v31; // [rsp+80h] [rbp-51h]
  int v32; // [rsp+88h] [rbp-49h]
  int v33; // [rsp+8Ch] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-41h] BYREF
  int *v35; // [rsp+B0h] [rbp-21h]
  int v36; // [rsp+B8h] [rbp-19h]
  int v37; // [rsp+BCh] [rbp-15h]
  int *v38; // [rsp+C0h] [rbp-11h]
  int v39; // [rsp+C8h] [rbp-9h]
  int v40; // [rsp+CCh] [rbp-5h]

  CurrentThread = KeGetCurrentThread();
  v6 = a4;
  v21 = 0;
  v24 = a4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = 0;
  while ( 1 )
  {
    v11 = CmpDoTransWriteLogRecord(a1, a2, a3, v6, plsnFinish);
    v14 = v11;
    if ( v11 != -1072037859 )
      break;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_6;
LABEL_11:
      v21 = ++v10;
      v18 = CmpAddRemoveRMLogContainer(a1);
      if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      {
        v30 = 0;
        v33 = 0;
        v28 = &v22;
        v22 = v16;
        v31 = &v23;
        v29 = v16 + 3;
        v32 = v16 + 3;
        v23 = v18;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&word_14002398E,
          0LL,
          0LL,
          v16 + 3,
          &v27);
      }
      if ( v18 < 0 )
        goto LABEL_6;
      LOBYTE(v17) = 1;
      CmpLogCheckpoint(a1, v16, v17);
      v6 = v24;
    }
    else
    {
      v10 = 1;
      v21 = 1;
      LOBYTE(v13) = 1;
      if ( (int)CmpLogCheckpoint(a1, v12, v13) < 0 )
        goto LABEL_11;
    }
  }
  if ( v11 >= 0
    && (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v21) >= 0
    && v21 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      {
        v37 = 0;
        v40 = 0;
        v35 = &v25;
        v36 = v19 + 3;
        v38 = &v26;
        v26 = v20;
        v39 = v19 + 3;
        v25 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_1400239C1,
          0LL,
          0LL,
          v19 + 3,
          &v34);
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
