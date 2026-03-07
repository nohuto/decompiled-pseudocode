void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_HW_QUEUE *a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_GLOBAL *a6)
{
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v6; // r13
  __int64 v8; // rdi
  char v11; // r9
  bool v12; // zf
  unsigned int v13; // eax
  char v14; // cl
  __int64 Pool2; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+24h] [rbp-34h]

  v6 = (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 600);
  v21 = *((_DWORD *)a4 + 29);
  v8 = 0LL;
  v13 = *((_DWORD *)a4 + 150) & 0x3FF;
  v11 = -1;
  v12 = !_BitScanForward(&v13, v13);
  v14 = 0;
  if ( !v12 )
    v11 = v13;
  if ( v11 != -1 )
    v14 = v11;
  v22 = v14;
  Pool2 = ExAllocatePool2(
            64LL,
            *((_DWORD *)a6 + 38) * ((*((_DWORD *)a6 + 19) << 6) + ((8 * *((_DWORD *)a6 + 19) + 231) & 0xFFFFFFF8))
          + 8 * (*((_DWORD *)a6 + 19) + 83),
            811755862LL);
  WdLogSingleEntry1(8LL, *((_QWORD *)a4 + 13));
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), a4, *((unsigned int *)a4 + 139));
    VidSchiAcquirePrivateDataReference(a6, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 648));
    VidSchiReleasePrivateDataReference(a6, v6);
    v17 = *(_QWORD *)(Pool2 + 80);
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 12));
    *(union _ULARGE_INTEGER *)(Pool2 + 16) = a5;
    *(_QWORD *)(Pool2 + 24) = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 198);
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_QWORD *)(Pool2 + 40) = a3;
    if ( a3 )
      ++*((_DWORD *)a3 + 394);
    ++*((_DWORD *)a6 + 201);
    v18 = *(int *)(*((_QWORD *)a6 + v21 + 400) + 288LL * v22 + 188);
    if ( (int)v18 > -1 )
      v8 = *((_QWORD *)a6 + 416) + 160 * v18;
    v19 = v8 + 120;
    v20 = *(__int64 **)(v19 + 8);
    if ( *v20 != v19 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v19;
    *(_QWORD *)(Pool2 + 8) = v20;
    *v20 = Pool2;
    *(_QWORD *)(v19 + 8) = Pool2;
  }
}
