void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  char v7; // [rsp+30h] [rbp-108h] BYREF
  int v8; // [rsp+34h] [rbp-104h] BYREF
  int v9; // [rsp+38h] [rbp-100h] BYREF
  int v10; // [rsp+3Ch] [rbp-FCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v13; // [rsp+50h] [rbp-E8h]
  __int64 v14; // [rsp+58h] [rbp-E0h]
  __int64 v15; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v18; // [rsp+90h] [rbp-A8h]
  __int64 v19; // [rsp+98h] [rbp-A0h]
  int *v20; // [rsp+A0h] [rbp-98h]
  __int64 v21; // [rsp+A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 *v23; // [rsp+D0h] [rbp-68h]
  __int64 v24; // [rsp+D8h] [rbp-60h]
  int *v25; // [rsp+E0h] [rbp-58h]
  __int64 v26; // [rsp+E8h] [rbp-50h]
  __int64 *v27; // [rsp+F0h] [rbp-48h]
  __int64 v28; // [rsp+F8h] [rbp-40h]
  char *v29; // [rsp+100h] [rbp-38h]
  __int64 v30; // [rsp+108h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 56);
  v14 = v3;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v12 = v3;
    v23 = &v12;
    v24 = 8LL;
    v9 = *(_DWORD *)(v3 + 144);
    v25 = &v9;
    v26 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03770, (unsigned __int8 *)&word_140029C06, 0LL, 0LL, 4u, v22);
  }
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 88); ; i = (_QWORD *)*i )
  {
    v13 = i;
    if ( i == (_QWORD *)(v3 + 88) )
      break;
    v5 = i;
    if ( (unsigned int)dword_140C03770 > 5 )
    {
      v15 = v3;
      v23 = &v15;
      v24 = 8LL;
      v10 = *(_DWORD *)(v3 + 144);
      v25 = &v10;
      v26 = 4LL;
      v16 = i[2];
      v27 = &v16;
      v28 = 8LL;
      v7 = *(_BYTE *)(v16 + 68);
      v29 = &v7;
      v30 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03770, (unsigned __int8 *)byte_140029C91, 0LL, 0LL, 6u, v22);
      v5 = i;
    }
    v6 = i[2];
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 68) )
      {
        i = (_QWORD *)i[1];
        v13 = i;
        FsRtlpRemoveAndCompleteWaitingIrp(v5);
      }
    }
  }
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v11 = v3;
    v18 = &v11;
    v19 = 8LL;
    v8 = *(_DWORD *)(v3 + 144);
    v20 = &v8;
    v21 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03770,
      (unsigned __int8 *)&dword_140029C4C,
      0LL,
      0LL,
      4u,
      &v17);
  }
}
