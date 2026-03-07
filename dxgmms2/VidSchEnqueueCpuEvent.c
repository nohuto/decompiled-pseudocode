__int64 __fastcall VidSchEnqueueCpuEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        HANDLE Handle)
{
  unsigned int v8; // r12d
  NTSTATUS v9; // eax
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  __int64 Elements; // rax
  struct _VIDSCH_QUEUE_PACKET **v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // r14
  struct VIDSCH_HW_QUEUE *v16; // rbp
  __int64 v17; // r12
  _DWORD *QueuePacket; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  struct _VIDSCH_QUEUE_PACKET *v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct _VIDSCH_QUEUE_PACKET *v27; // rdx
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  PVOID v29; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  char v31; // [rsp+68h] [rbp-60h] BYREF
  int v32; // [rsp+78h] [rbp-50h]
  __int64 v34; // [rsp+D8h] [rbp+10h]
  int v35; // [rsp+E0h] [rbp+18h]

  v8 = a1;
  if ( a3 > 0x41 || !a3 && !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 0x110) != 0 )
  {
    v10 = 0;
    v29 = Handle;
    v35 = 1;
  }
  else
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v10 = v9;
    v29 = Object;
    v35 = 0;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(1LL, v9);
      DxgkLogInternalTriageEvent(v25, 0x40000LL);
      return v10;
    }
  }
  v11 = v8 + a3;
  P = 0LL;
  v32 = 0;
  Elements = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements((__int64 *)&P, v8 + a3);
  v13 = (struct _VIDSCH_QUEUE_PACKET **)Elements;
  if ( !Elements )
  {
    WdLogSingleEntry0(3LL);
    goto LABEL_30;
  }
  v14 = 0;
  if ( !v11 )
  {
LABEL_22:
    if ( P != &v31 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return v10;
  }
  v34 = a2 - Elements;
  v15 = Elements;
  while ( 1 )
  {
    v16 = 0LL;
    if ( v14 >= v8 )
    {
      _mm_lfence();
      v17 = *(_QWORD *)(a4 + 8LL * (v14 - v8));
LABEL_11:
      QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v17, *(_DWORD *)(v17 + 796) == 0);
      goto LABEL_12;
    }
    v17 = 0LL;
    v16 = *(struct VIDSCH_HW_QUEUE **)(v34 + v15);
    if ( !v16 )
      goto LABEL_11;
    QueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(*(_QWORD *)(v34 + v15), 0LL);
LABEL_12:
    *(_QWORD *)v15 = QueuePacket;
    if ( !QueuePacket )
      break;
    *QueuePacket = 895576406;
    *(_DWORD *)(*(_QWORD *)v15 + 48LL) = 5;
    *(_QWORD *)(*(_QWORD *)v15 + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)v15 + 52LL) = 2;
    v19 = *(_QWORD *)v15;
    if ( v16 )
      *(_QWORD *)(v19 + 96) = v16;
    else
      *(_QWORD *)(v19 + 88) = v17;
    *(_QWORD *)(*(_QWORD *)v15 + 104LL) = KeGetCurrentThread();
    *(_QWORD *)(*(_QWORD *)v15 + 72LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v15 + 272LL) ^= (*(_DWORD *)(*(_QWORD *)v15 + 272LL) ^ a5) & 1;
    *(_DWORD *)(*(_QWORD *)v15 + 272LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v15 + 272LL) = *(_DWORD *)(*(_QWORD *)v15 + 272LL) & 0xFFFFFFF7 | (8 * v35);
    *(_QWORD *)(*(_QWORD *)v15 + 536LL) = v29;
    *(_QWORD *)(*(_QWORD *)v15 + 792LL) = 0LL;
    v20 = *(_QWORD *)v15;
    if ( v14 )
    {
      *(_QWORD *)(v20 + 800) = v13[v14 - 1];
      *((_QWORD *)v13[v14 - 1] + 99) = *(_QWORD *)v15;
    }
    else
    {
      *(_QWORD *)(v20 + 800) = 0LL;
    }
    v8 = a1;
    ++v14;
    v15 += 8LL;
    if ( v14 >= v11 )
    {
      v21 = v11;
      do
      {
        v22 = *v13;
        if ( *((_QWORD *)*v13 + 12) )
          VidSchiSubmitCommandPacketToHwQueue(v22);
        else
          VidSchiSubmitCommandPacketToQueue((__int64)v22);
        ++v13;
        --v21;
      }
      while ( v21 );
      goto LABEL_22;
    }
  }
  WdLogSingleEntry2(3LL, -1073741801LL, 10955LL);
  if ( v14 )
  {
    v26 = v14;
    do
    {
      v27 = *v13;
      if ( *v13 )
      {
        if ( *((_QWORD *)v27 + 12) )
          VidSchiFreeQueuePacket(v16, v27);
        else
          VidSchiFreeQueuePacket(v17, (__int64)v27);
      }
      ++v13;
      --v26;
    }
    while ( v26 );
  }
LABEL_30:
  NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>((__int64)&P);
  return 3221225495LL;
}
