/*
 * XREFs of ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00EFF00
 * Callers:
 *     VidMmReportDmaPoolState @ 0x1C002D3C0 (VidMmReportDmaPoolState.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E7460 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E560 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002E6AC (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F1D8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x1C002FAB0 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_DMA_POOL::ReportState(VIDMM_DMA_POOL *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v5; // rdi
  int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // r11
  int *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r12
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-168h]
  __int64 v18; // [rsp+48h] [rbp-140h]
  int v19; // [rsp+60h] [rbp-128h]
  char v20; // [rsp+90h] [rbp-F8h]
  int v21; // [rsp+100h] [rbp-88h]
  int v22; // [rsp+104h] [rbp-84h]
  int v23; // [rsp+108h] [rbp-80h]
  int v24; // [rsp+10Ch] [rbp-7Ch]
  char v25; // [rsp+190h] [rbp+8h]
  int v26; // [rsp+198h] [rbp+10h]
  int v27; // [rsp+1A0h] [rbp+18h]
  int v28; // [rsp+1A8h] [rbp+20h]

  v3 = (char *)this + 96;
  v5 = (char *)*((_QWORD *)this + 12);
  if ( v5 != (char *)this + 96 )
  {
    LOBYTE(v6) = 0;
    while ( 1 )
    {
      v7 = *((_QWORD *)v5 + 7);
      if ( !v7 )
        goto LABEL_27;
      v8 = *((_QWORD *)this + 3);
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 16);
      else
        v9 = 0LL;
      if ( bTracingEnabled )
      {
        v10 = *(_QWORD *)(v7 + 40);
        if ( v10 )
          v11 = *(int **)(v10 + 24);
        else
          v11 = 0LL;
        v12 = *(_QWORD *)(v7 + 88);
        if ( v12 )
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        else
          v13 = 0LL;
        LOBYTE(v24) = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v21) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v26) = 0;
        v25 = 0;
        if ( v11 )
        {
          v6 = *v11;
          v24 = v11[1];
          v23 = v11[2];
          v22 = v11[3];
          v21 = v11[4];
          v28 = v11[5];
          v27 = v11[6];
          v26 = v11[7];
          v14 = v11[8];
          a3 = (unsigned int)v11[9];
          v25 = v14;
        }
        else
        {
          a3 = 0LL;
        }
        if ( (byte_1C00769C1 & 8) != 0 )
        {
          v20 = v6;
          LOBYTE(v6) = 0;
          McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
            *(_QWORD *)(v7 + 16),
            &EventReportAdapterAllocation,
            a3,
            v13,
            v9,
            *(_QWORD *)(*(_QWORD *)this + 24LL),
            **(_DWORD **)(v7 + 536),
            *(_QWORD *)(v7 + 16),
            *(_DWORD *)(v7 + 32),
            v18,
            *(_DWORD *)(v7 + 60),
            *(_DWORD *)(v7 + 64),
            v19,
            *(_DWORD *)(v7 + 56),
            *(_DWORD *)(v7 + 400),
            v7,
            v10,
            0,
            v20,
            v24,
            v23,
            v22,
            v21,
            v28,
            v27,
            v26,
            v25,
            a3,
            (*(_DWORD *)(v7 + 76) & 2) != 0,
            *(_QWORD *)(v7 + 384),
            *(_BYTE *)(v7 + 68) & 0x3F,
            BYTE1(*(_DWORD *)(v7 + 68)) & 1);
        }
        else
        {
          LOBYTE(v6) = 0;
        }
      }
      if ( !v9 )
        break;
      a3 = *((_QWORD *)v5 + 8);
      if ( bTracingEnabled )
      {
        if ( (byte_1C00769C1 & 8) != 0 )
        {
          v19 = 0;
          LODWORD(v18) = 0;
          McTemplateK0ppppppppppppq_EtwWriteTransfer(
            *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL),
            &EventReportDeviceAllocation,
            a3,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL) + 80LL),
            v9,
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL),
            a3,
            v7,
            0LL);
        }
LABEL_27:
        if ( bTracingEnabled )
        {
          if ( (byte_1C00769C1 & 1) != 0 )
          {
            v18 = *((_QWORD *)v5 + 7);
            McTemplateK0pppxxxp_EtwWriteTransfer(
              *((unsigned int *)v5 + 13),
              *((unsigned int *)v5 + 12),
              *(_QWORD *)this,
              *((_QWORD *)this + 3),
              *(_QWORD *)(*(_QWORD *)this + 24LL),
              v5,
              *((_QWORD *)v5 + 5),
              *((unsigned int *)v5 + 12),
              *((unsigned int *)v5 + 13));
          }
        }
      }
      v5 = *(char **)v5;
      if ( v5 == v3 )
        return;
    }
    v15 = *(_QWORD *)(v7 + 120);
    if ( v15 && (byte_1C00769C1 & 1) != 0 )
    {
      v16 = (unsigned int)(*(_DWORD *)(v15 + 16) + 1);
      LODWORD(v17) = v16;
      McTemplateK0pqx_EtwWriteTransfer(v16, &EventReportCommittedGlobalAllocation, a3, v7, v17, *(_QWORD *)(v7 + 128));
    }
    goto LABEL_27;
  }
}
