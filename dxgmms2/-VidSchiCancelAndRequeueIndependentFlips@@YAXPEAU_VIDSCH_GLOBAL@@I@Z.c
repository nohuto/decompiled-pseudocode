void __fastcall VidSchiCancelAndRequeueIndependentFlips(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  unsigned int v2; // r13d
  __int64 i; // rsi
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  struct VIDSCH_FLIP_QUEUE *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // r15d
  unsigned int v20; // r12d
  int v21; // r14d
  int v22; // eax
  unsigned int v23; // r13d
  unsigned int v24; // esi
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-60h]
  struct _VIDSCH_GLOBAL *v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  unsigned __int64 v33; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+10h]
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v34 = a2;
  v2 = a2;
  v31 = a1;
  LODWORD(v32) = a2;
  for ( i = 0xFFFFFFFFLL; ; i = (unsigned int)(i + 1) )
  {
    HIDWORD(v32) = i;
    if ( (_DWORD)i == *((_DWORD *)a1 + 38) )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v31);
    v6 = FlipQueue;
    if ( FlipQueue )
    {
      if ( !*((_BYTE *)FlipQueue + 80) )
      {
        v36 = v2;
        v7 = *(int *)(288 * i + *((_QWORD *)a1 + v2 + 400) + 188);
        if ( (int)v7 > -1 )
        {
          if ( *((_QWORD *)a1 + 416) + 160 * v7 )
          {
            v8 = *((unsigned int *)v6 + 17);
            v9 = *((_DWORD *)v6 + 346 * v8 + 293);
            if ( (v9 == 5 || v9 == 15) && (*((_DWORD *)v6 + 346 * v8 + 314) & 0x2000) != 0 )
            {
              v10 = ((unsigned __int8)*((_DWORD *)v6 + 18) + 1) & 0x3F;
              if ( (_DWORD)v8 != v10 )
              {
                while ( 1 )
                {
                  v11 = 1384LL * (unsigned int)v8;
                  if ( (*(_DWORD *)((_BYTE *)v6 + v11 + 1256) & 0x100000) == 0 )
                    break;
                  v12 = ((_BYTE)v8 + 1) & 0x3F;
                  LODWORD(v8) = v12;
                  if ( v12 == v10 )
                    goto LABEL_35;
                }
                v13 = (__int64)v6 + v11 + 120;
                if ( v13 )
                {
                  v14 = *(_QWORD *)(v13 + 1176);
                  v33 = 0LL;
                  v15 = *(_QWORD *)(v14 + 24);
                  v16 = VidSchiCancelQueuedFlips(a1, v2, i, v15, &v33, 3u);
                  if ( v16 < 0 || (v17 = v33, v33 < v15) )
                  {
                    WdLogSingleEntry3(3LL, v16, (unsigned int)i, v15);
                  }
                  else
                  {
                    v18 = *((_DWORD *)v6 + 18);
                    v19 = -1;
                    v20 = -1;
                    LODWORD(v33) = -1;
                    v35 = v18;
                    v21 = ((_BYTE)v18 + 1) & 0x3F;
                    if ( (_DWORD)v8 != v21 )
                    {
                      while ( *(_QWORD *)(*((_QWORD *)v6 + 173 * (unsigned int)v8 + 162) + 24LL) != v17 )
                      {
                        v22 = ((_BYTE)v8 + 1) & 0x3F;
                        LODWORD(v8) = v22;
                        if ( v22 == v21 )
                          goto LABEL_23;
                      }
                      v20 = *((_DWORD *)v6 + 17);
                      v19 = v8;
                      LODWORD(v33) = v8;
                      if ( (_DWORD)v8 != v20 )
                        v20 = ((_BYTE)v8 - 1) & 0x3F;
                    }
LABEL_23:
                    v23 = v19;
                    if ( v19 != v21 )
                    {
                      v24 = v34;
                      v25 = v36;
                      do
                      {
                        v26 = 1384LL * v23;
                        VidSchiDecrementPendingFlipsForFlipEntry(
                          a1,
                          *((struct _VIDSCH_PRESENT_INFO **)a1 + v25 + 400),
                          (struct VIDSCH_FLIP_QUEUE *)((char *)v6 + v26 + 120));
                        *(_DWORD *)((char *)v6 + v26 + 1256) |= 0x100000u;
                        *(_DWORD *)((char *)v6 + v26 + 1172) = 2;
                        *(_QWORD *)((char *)v6 + v26 + 1184) = ++*((_QWORD *)v6 + 11);
                        VidSchiUpdateFlipQueueHistory(7u, (__int64)a1, v24);
                        v23 = ((_BYTE)v23 + 1) & 0x3F;
                      }
                      while ( v23 != v21 );
                      LODWORD(i) = HIDWORD(v32);
                      v19 = v33;
                      v18 = v35;
                    }
                    v2 = v34;
                    if ( bTracingEnabled && (byte_1C00769C4 & 1) != 0 )
                    {
                      v27 = 1384LL * v18;
                      LODWORD(v30) = *(_DWORD *)((char *)v6 + v27 + 1168);
                      McTemplateK0pqqqq_EtwWriteTransfer(
                        v27,
                        1384 * v19,
                        v18,
                        *((_QWORD *)a1 + 2),
                        v34,
                        i,
                        *((_DWORD *)v6 + 346 * v19 + 292),
                        v30,
                        v31,
                        v32);
                    }
                    v28 = *((_DWORD *)v6 + 16);
                    while ( v28 != *((_DWORD *)v6 + 14) )
                    {
                      ++*((_QWORD *)v6 + 11);
                      v29 = 1384LL * v28;
                      v28 = ((_BYTE)v28 + 1) & 0x3F;
                      *(_QWORD *)((char *)v6 + v29 + 1184) = *((_QWORD *)v6 + 11);
                    }
                    VidSchiSetNextFlipEarliestIdealTime(
                      a1,
                      v2,
                      v6,
                      (struct VIDSCH_FLIP_QUEUE *)((char *)v6 + 1384 * v20 + 120));
                    *((_DWORD *)v6 + 18) = v20;
                    *((_DWORD *)v6 + 16) = v19;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_35:
    ;
  }
}
