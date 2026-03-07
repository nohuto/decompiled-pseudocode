__int64 __fastcall PfSnPrefetchSections(_QWORD *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // r14
  WORK_QUEUE_TYPE v8; // r13d
  _QWORD *v9; // r12
  unsigned int v10; // edi
  unsigned int v11; // r15d
  int v12; // r15d
  unsigned int v13; // ebx
  unsigned int *v14; // rdi
  unsigned int v15; // r13d
  unsigned int *v16; // rdi
  WORK_QUEUE_TYPE v17; // r12d
  __int64 v18; // r14
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // r8
  __int64 v23; // rax
  __int16 v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  WORK_QUEUE_TYPE QueueType; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int32 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h]
  void *v29; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 RunRef; // [rsp+70h] [rbp-98h]
  struct _EX_RUNDOWN_REF RunRef_8[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v33; // [rsp+88h] [rbp-80h]
  __int128 v34; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C4h] [rbp-44h]
  __int64 v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  __int64 v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  WORK_QUEUE_TYPE *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  __int16 *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  unsigned __int32 *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]

  v5 = *a1;
  LODWORD(v28) = a3;
  v7 = -1LL;
  v27 = a2;
  v30 = (unsigned __int64)a1;
  v8 = a2;
  RunRef = a5;
  v9 = a1;
  LOBYTE(v24) = 0;
  v10 = 0;
  QueueType = a2;
  v11 = 0;
  LODWORD(v29) = a3;
  *(_OWORD *)&RunRef_8[0].Count = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( v5 && qword_140C6A388 && EtwEventEnabled(qword_140C6A388, &PfSnEvt_PrefetchSections_Start) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)(v5 + 16 + 2 * v23) );
    LOWORD(v25) = v23;
    UserData.Ptr = (ULONGLONG)&v25;
    v37 = 2 * (unsigned __int16)v23;
    v36 = v5 + 16;
    v39 = v5 + 76;
    v41 = v5 + 80;
    v43 = (WORK_QUEUE_TYPE *)&v29;
    p_QueueType = &QueueType;
    v47 = &v24;
    *(_QWORD *)&UserData.Size = 2LL;
    v38 = 0;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 1LL;
    EtwWrite(qword_140C6A388, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
  }
  if ( a3 >= 1 << *(_DWORD *)(*v9 + 124LL) )
    goto LABEL_34;
  if ( v8 == CriticalWorkQueue )
  {
    v12 = 0;
    goto LABEL_8;
  }
  if ( v8 != DelayedWorkQueue )
  {
LABEL_34:
    v19 = -1073741811;
    goto LABEL_23;
  }
  v12 = 1;
LABEL_8:
  v13 = *(_DWORD *)(v5 + 88);
  v29 = (void *)v9[8];
  memset(v29, 0, 8LL * v13);
  v14 = (unsigned int *)v9[11];
  memset(v14, 0, 0x600uLL);
  ExInitializePushLock(RunRef_8);
  *(_QWORD *)&v33 = RunRef;
  RunRef_8[1].Count = (unsigned __int64)v9;
  LODWORD(v34) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v13 > 0x20 )
    v13 = 32;
  PfSnLogGetReadListsStart(v5, v13);
  if ( v13 )
  {
    v15 = v28;
    v16 = v14 + 11;
    v17 = QueueType;
    v18 = v13;
    do
    {
      *(v16 - 1) = v15;
      *(_QWORD *)(v16 - 3) = RunRef_8;
      *v16 = v12 | *v16 & 0xFFFFFFFE;
      *(_QWORD *)(v16 - 11) = 0LL;
      *(_QWORD *)(v16 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v16 - 5) = v16 - 11;
      ExAcquireRundownProtection_0(RunRef_8);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v16 - 11), v17);
      v16 += 12;
      --v18;
    }
    while ( v18 );
    v9 = (_QWORD *)v30;
    v7 = -1LL;
    v8 = v27;
  }
  ExWaitForRundownProtectionRelease(RunRef_8);
  PfSnLogGetReadListsStop(v5);
  v10 = DWORD2(v33);
  v19 = DWORD2(v34);
  if ( SDWORD2(v34) < 0 )
  {
    v11 = 0;
    if ( !DWORD2(v33) )
      goto LABEL_23;
  }
  else
  {
    v11 = DWORD1(v34);
    if ( !DWORD2(v33) )
    {
      v19 = 0;
      goto LABEL_23;
    }
    if ( DWORD1(v34) )
    {
      v20 = MmPrefetchPagesEx(DWORD2(v33), (__int64)v29, (int)v9 + 104);
      v8 = v27;
      v19 = v20;
      if ( v20 >= 0 && !v9[13] )
        v19 = -2147483622;
    }
    else
    {
      v19 = -1073741823;
    }
  }
  v21 = v10;
  if ( v10 > 0x20 )
    v21 = 32LL;
  PfSnPrefetchSectionsCleanup(v9, v10, v21, RunRef);
LABEL_23:
  v27 = v10;
  QueueType = (int)v28;
  v30 = v11;
  LOBYTE(v24) = 0;
  LODWORD(v29) = v8;
  if ( v5 && qword_140C6A388 && EtwEventEnabled(qword_140C6A388, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v7;
    while ( *(_WORD *)(v5 + 16 + 2 * v7) );
    v36 = v5 + 16;
    UserData.Ptr = (ULONGLONG)&v25;
    LOWORD(v25) = v7;
    v37 = 2 * (unsigned __int16)v7;
    *(_QWORD *)&UserData.Size = 2LL;
    v39 = v5 + 76;
    v41 = v5 + 80;
    v43 = &QueueType;
    p_QueueType = (WORK_QUEUE_TYPE *)&v29;
    v47 = &v24;
    v49 = &v30;
    v51 = &v27;
    v38 = 0;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 1LL;
    v50 = 8LL;
    v52 = 4LL;
    EtwWrite(qword_140C6A388, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &UserData);
  }
  return v19;
}
