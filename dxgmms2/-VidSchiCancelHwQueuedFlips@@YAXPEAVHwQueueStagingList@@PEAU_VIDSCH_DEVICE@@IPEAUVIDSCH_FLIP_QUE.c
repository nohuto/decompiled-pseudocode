void __fastcall VidSchiCancelHwQueuedFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  struct _VIDSCH_GLOBAL *v6; // r15
  __int64 v7; // r14
  unsigned int v8; // r10d
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  char v14; // bp
  bool v15; // zf
  int v16; // eax
  char v17; // dl
  __int64 v18; // r13
  unsigned __int64 v19; // r9
  char v20; // cl
  int v21; // eax
  __int64 v22; // r12
  unsigned int v23; // ebp
  char v24; // bl
  int v25; // eax
  unsigned int v26; // esi
  char v27; // cl
  int v28; // eax
  __int64 v29; // [rsp+30h] [rbp-58h]
  unsigned __int64 v31; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v32 = a3;
  v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v7 = 1384LL * *((unsigned int *)a4 + 17);
  v8 = a3;
  v9 = *(_DWORD *)((char *)a4 + v7 + 1172);
  v33 = *((_QWORD *)v6 + a3 + 400);
  if ( v9 > 0xC || (v10 = 4673, !_bittest(&v10, v9)) )
  {
    if ( v9 == 5 || v9 == 15 )
    {
      v11 = *(_DWORD *)((char *)a4 + v7 + 1256);
      if ( (v11 & 0x2000) != 0 )
      {
        if ( (v11 & 0x10) != 0 )
          v12 = ((unsigned __int16)**(_DWORD **)((char *)a4 + v7 + 1296) | (unsigned __int16)(**(_DWORD **)((char *)a4 + v7 + 1296) >> 10)) & 0x3FF;
        else
          v12 = (1 << *((_DWORD *)v6 + 38)) - 1;
        v13 = 0;
        v14 = -1;
        a5 = 0;
        v15 = !_BitScanForward((unsigned int *)&v16, v12);
        if ( !v15 )
          v14 = v16;
        v17 = 0;
        LOBYTE(a5) = 0;
        if ( v12 )
        {
          do
          {
            v18 = *(_QWORD *)((char *)a4 + v7 + 1296);
            v29 = v17 * ((8 * *(_DWORD *)(v18 + 8) + 231) & 0xFFFFFFF8);
            v19 = *(_QWORD *)(v29 + v18 + 24);
            if ( v19 )
            {
              v31 = 0LL;
              VidSchiCancelQueuedFlips(v6, v8, v14, v19, &v31, 0);
              v8 = v32;
              if ( v31 >= *(_QWORD *)(v29 + v18 + 24) && v31 <= *(_QWORD *)(288LL * v14 + v33 + 392) )
                v13 |= 1 << v14;
            }
            LODWORD(v31) = 0;
            v20 = v14;
            v14 = -1;
            v12 &= ~(1 << v20);
            v15 = !_BitScanForward((unsigned int *)&v21, v12);
            if ( !v15 )
              v14 = v21;
            LOBYTE(a5) = a5 + 1;
            v17 = a5;
          }
          while ( v12 );
          if ( v13 )
          {
            v22 = v33;
            VidSchiSynchronouslyCancelPendingFlips(a1, v6, v8, *(struct VIDSCH_FLIP_QUEUE **)(v33 + 32), v13);
            v23 = v32;
            v24 = -1;
            v15 = !_BitScanForward((unsigned int *)&v25, v13);
            v26 = v13;
            if ( !v15 )
              v24 = v25;
            do
            {
              VidSchiSynchronouslyCancelPendingFlips(
                a1,
                v6,
                v23,
                *(struct VIDSCH_FLIP_QUEUE **)(v22 + 8LL * v24 + 40),
                v13);
              v32 = 0;
              v27 = v24;
              v24 = -1;
              v26 &= ~(1 << v27);
              v15 = !_BitScanForward((unsigned int *)&v28, v26);
              if ( !v15 )
                v24 = v28;
            }
            while ( v26 );
          }
        }
      }
    }
  }
}
