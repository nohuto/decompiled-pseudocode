bool __fastcall VidSchiPacketBlockedOnWaitCondition(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rbx
  struct _VIDSCH_QUEUE_PACKET *v2; // r11
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // eax
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 **v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v2 = a1;
  v3 = *(_QWORD *)(v1[5] + 8LL);
  v4 = *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0)
    || *(_DWORD *)(v4 + 3012) )
  {
    v13 = v1 + 3;
    v14 = v1[3];
    if ( !v14 )
      return 0;
    if ( *(_QWORD **)(v14 + 8) == v13 )
    {
      v15 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v15 == v13 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = 0LL;
        v1[4] = 0LL;
        return 0;
      }
    }
    goto LABEL_25;
  }
  v5 = *((_DWORD *)v2 + 12);
  if ( v5 )
  {
    if ( v5 == 4 )
      return (*((_BYTE *)v2 + 272) & 1) == 0;
    if ( v5 != 8 )
      return 0;
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)v2 + 12));
  }
  if ( (*((_DWORD *)v2 + 16) & 8) != 0 )
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)v2 + 12));
  if ( (unsigned int)VIDMM_GLOBAL::CheckPrimaryAllocationReferences(
                       (VIDMM_GLOBAL *)v3,
                       (struct _VIDSCH_QUEUE_PACKET *)((char *)v2 + 472),
                       *(_DWORD *)(v3 + 1576) == 0) != -1071775486 )
  {
    v10 = v1 + 3;
    v11 = v1[3];
    if ( v11 )
    {
      if ( *(_QWORD **)(v11 + 8) != v10 )
        goto LABEL_25;
      v12 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v12 != v10 )
        goto LABEL_25;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = 0LL;
      v1[4] = 0LL;
    }
    *((_DWORD *)v2 + 16) |= 8u;
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)v2 + 12));
  }
  if ( !v1[4] )
  {
    v7 = v1 + 3;
    v8 = *(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3536LL;
    v9 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3544LL);
    if ( *v9 == (__int64 *)v8 )
    {
      *v7 = v8;
      v1[4] = v9;
      *v9 = v7;
      *(_QWORD *)(v8 + 8) = v7;
      return 1;
    }
LABEL_25:
    __fastfail(3u);
  }
  return 1;
}
