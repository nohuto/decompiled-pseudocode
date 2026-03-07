void __fastcall VidSchiCancelQueuedIndependentFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  char *v9; // rdi
  char *i; // r10
  _QWORD *v15; // r9
  _QWORD *j; // r8
  _QWORD *v17; // r8
  _DWORD *v18; // r11
  _QWORD *v19; // r9
  _QWORD *k; // r8
  _QWORD *v21; // r8
  _DWORD *v22; // r11
  char *v23; // rdi
  char *m; // r8
  _QWORD *v25; // rsi
  _QWORD *n; // r9
  _QWORD *v27; // r14
  _QWORD *ii; // r10
  _QWORD *v29; // r10
  _DWORD *v30; // r11
  unsigned int *v31; // rdx
  unsigned int v32; // ecx
  int v33; // r8d
  __int64 v34; // r9
  unsigned int v35; // eax
  int v36; // r10d
  unsigned int *v37; // rax
  unsigned int v38; // ecx
  int v39; // r9d
  __int64 v40; // r8
  unsigned int v41; // eax
  int v42; // r10d
  unsigned int v43; // r8d
  int v44; // [rsp+30h] [rbp-30h]
  unsigned int v45; // [rsp+30h] [rbp-30h]
  __int64 v46; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v47; // [rsp+48h] [rbp-18h]
  char v48; // [rsp+50h] [rbp-10h]
  bool v49; // [rsp+A0h] [rbp+40h] BYREF

  v9 = (char *)a3 + 72;
  for ( i = (char *)*((_QWORD *)a3 + 9); i != v9; i = *(char **)i )
  {
    v15 = i + 640;
    for ( j = (_QWORD *)*((_QWORD *)i + 80); j != v15; j = (_QWORD *)*v17 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(j - 4), a5) == 1 )
        ++*v18;
    }
    v19 = i + 656;
    for ( k = (_QWORD *)*((_QWORD *)i + 82); k != v19; k = (_QWORD *)*v21 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), a5) == 1 )
        ++*v22;
    }
  }
  v23 = (char *)a3 + 88;
  for ( m = (char *)*((_QWORD *)a3 + 11); m != v23; m = *(char **)m )
  {
    v25 = m + 32;
    for ( n = (_QWORD *)*((_QWORD *)m + 4); n != v25; n = (_QWORD *)*n )
    {
      v27 = n + 19;
      for ( ii = (_QWORD *)n[19]; ii != v27; ii = (_QWORD *)*v29 )
      {
        if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(ii - 4), a5) == 1 )
          ++*v30;
      }
    }
  }
  if ( a4 )
  {
    v31 = a8;
    *a8 = -1;
    if ( *((_BYTE *)a1 + 59) )
    {
      v32 = *((_DWORD *)a4 + 17);
      v33 = *((_DWORD *)a4 + 14);
      while ( v32 != v33 )
      {
        v34 = 1384LL * v32;
        v35 = *(_DWORD *)((char *)a4 + v34 + 1172);
        if ( v35 > 0xD || (v36 = 12865, !_bittest(&v36, v35)) )
        {
          if ( *(unsigned int *)((char *)a4 + v34 + 1176) >= a5 )
          {
            v37 = a9;
            *v31 = v32;
            v44 = ((_BYTE)v33 - 1) & 0x3F;
            *v37 = v44;
            v47 = &v46;
            v46 = (__int64)&v46;
            v48 = 0;
            v49 = 0;
            VidSchiCancelIndependentFlipsHwQueue((struct HwQueueStagingList *)&v46, a1, a2, a4, &v49, v31, v44, 1u);
            goto LABEL_48;
          }
        }
        v32 = ((_BYTE)v32 + 1) & 0x3F;
      }
    }
    else
    {
      v38 = *((_DWORD *)a4 + 16);
      v39 = *((_DWORD *)a4 + 14);
      while ( v38 != v39 )
      {
        v40 = 1384LL * v38;
        v41 = *(_DWORD *)((char *)a4 + v40 + 1172);
        if ( v41 > 0xC || (v42 = 4673, !_bittest(&v42, v41)) )
        {
          if ( v41 != 5 && v41 != 15 && v41 != 13 && *(unsigned int *)((char *)a4 + v40 + 1176) >= a5 )
          {
            *v31 = v38;
            break;
          }
        }
        v38 = ((_BYTE)v38 + 1) & 0x3F;
      }
      v43 = *v31;
      if ( *v31 != -1 )
      {
        v48 = 0;
        v49 = 0;
        v45 = ((_BYTE)v39 - 1) & 0x3F;
        v47 = &v46;
        v46 = (__int64)&v46;
        *a9 = v45;
        VidSchiCancelIndependentFlips((unsigned int)&v46, (_DWORD)a1, a2, (_DWORD)a4, (__int64)&v49, v43, v45);
LABEL_48:
        *a6 = *((_DWORD *)a4 + 16);
        if ( !v48 )
          HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v46);
      }
    }
  }
}
