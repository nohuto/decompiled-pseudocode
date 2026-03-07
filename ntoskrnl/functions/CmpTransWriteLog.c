__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r14d
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
  unsigned int v21; // [rsp+30h] [rbp-91h] BYREF
  int v22; // [rsp+34h] [rbp-8Dh] BYREF
  int v23; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-81h] BYREF
  int *v26; // [rsp+60h] [rbp-61h]
  int v27; // [rsp+68h] [rbp-59h]
  int v28; // [rsp+6Ch] [rbp-55h]
  int *v29; // [rsp+70h] [rbp-51h]
  int v30; // [rsp+78h] [rbp-49h]
  int v31; // [rsp+7Ch] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+80h] [rbp-41h] BYREF
  int *v33; // [rsp+A0h] [rbp-21h]
  int v34; // [rsp+A8h] [rbp-19h]
  int v35; // [rsp+ACh] [rbp-15h]
  int *v36; // [rsp+B0h] [rbp-11h]
  int v37; // [rsp+B8h] [rbp-9h]
  int v38; // [rsp+BCh] [rbp-5h]

  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  v8 = a4;
  v23 = a4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = v21;
  while ( 1 )
  {
    v11 = CmpDoTransWriteLogRecord(a1, a2, a3, v8, plsnFinish);
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
      if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
      {
        v28 = 0;
        v31 = 0;
        v26 = &v24;
        v24 = v16;
        v29 = &v22;
        v27 = v16 + 3;
        v30 = v16 + 3;
        v22 = v18;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04328,
          (unsigned __int8 *)qword_140037830,
          0LL,
          0LL,
          v16 + 3,
          &v25);
      }
      if ( v18 < 0 )
        goto LABEL_6;
      LOBYTE(v17) = 1;
      CmpLogCheckpoint(a1, v16, v17);
      v8 = v23;
    }
    else
    {
      v10 = 1;
      LOBYTE(v13) = 1;
      v21 = 1;
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
    if ( (unsigned int)dword_140C04328 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
      {
        v35 = 0;
        v38 = 0;
        v33 = &v23;
        v34 = v19 + 3;
        v36 = &v22;
        v22 = v20;
        v37 = v19 + 3;
        v23 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04328,
          (unsigned __int8 *)&dword_1400377D4,
          0LL,
          0LL,
          v19 + 3,
          &v32);
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return v14;
}
