void __fastcall VidMmReportGlobalAlloc(struct DXGDEVICE *a1, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 v7; // r11
  __int16 v8; // di
  int v9; // r9d
  int v10; // r10d
  int *v11; // r8
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // r14d
  int v15; // r15d
  int v16; // r12d
  int v17; // r13d
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-158h]
  __int64 v21; // [rsp+28h] [rbp-150h]
  int v22; // [rsp+48h] [rbp-130h]
  int v23; // [rsp+60h] [rbp-118h]
  int v24; // [rsp+100h] [rbp-78h]
  int v25; // [rsp+104h] [rbp-74h]
  int v26; // [rsp+108h] [rbp-70h]
  int v27; // [rsp+110h] [rbp-68h]
  int v28; // [rsp+114h] [rbp-64h]
  int v29; // [rsp+118h] [rbp-60h]
  int v30; // [rsp+11Ch] [rbp-5Ch]
  __int64 v31; // [rsp+120h] [rbp-58h]
  __int64 v32; // [rsp+128h] [rbp-50h]
  char v33; // [rsp+188h] [rbp+10h]
  char v34; // [rsp+190h] [rbp+18h]
  int v35; // [rsp+198h] [rbp+20h]

  v34 = a3;
  v3 = 0LL;
  v6 = **((_DWORD **)a2 + 67);
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)a2 + 5);
    v8 = *((_WORD *)a2 + 34) & 0x3F;
    v9 = (*((_DWORD *)a2 + 17) >> 8) & 1;
    v10 = (*((_DWORD *)a2 + 19) >> 1) & 1;
    v31 = *((_QWORD *)a2 + 48);
    if ( v7 )
      v11 = *(int **)(v7 + 24);
    else
      v11 = 0LL;
    v27 = *((_DWORD *)a2 + 100);
    v28 = *((_DWORD *)a2 + 14);
    v12 = *((_DWORD *)a2 + 16);
    v29 = *((_DWORD *)a2 + 15);
    v30 = *((_DWORD *)a2 + 8);
    v32 = *((_QWORD *)a2 + 2);
    v13 = *((_QWORD *)a2 + 11);
    if ( v13 )
      v3 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
    LOBYTE(v26) = 0;
    LOBYTE(v14) = 0;
    LOBYTE(v25) = 0;
    LOBYTE(v15) = 0;
    LOBYTE(v24) = 0;
    LOBYTE(v16) = 0;
    LOBYTE(v35) = 0;
    LOBYTE(v17) = 0;
    v33 = 0;
    if ( v11 )
    {
      v14 = *v11;
      v15 = v11[1];
      v16 = v11[2];
      v17 = v11[3];
      v26 = v11[4];
      v25 = v11[5];
      v24 = v11[6];
      v35 = v11[7];
      v18 = v11[8];
      a3 = (unsigned int)v11[9];
      v33 = v18;
    }
    else
    {
      a3 = 0LL;
    }
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        v32,
        &EventReportAdapterAllocation,
        a3,
        v3,
        (char)a1,
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
        v6,
        v32,
        v30,
        v22,
        v29,
        v12,
        v23,
        v28,
        v27,
        (char)a2,
        v7,
        v34,
        v14,
        v15,
        v16,
        v17,
        v26,
        v25,
        v24,
        v35,
        v33,
        a3,
        v10,
        v31,
        v8,
        v9);
  }
  v19 = *((_QWORD *)a2 + 67);
  if ( *(_WORD *)(v19 + 4) && bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
  {
    LOBYTE(v21) = *((_BYTE *)a2 + 456);
    LOBYTE(v20) = *(_BYTE *)(v19 + 4);
    McTemplateK0puu_EtwWriteTransfer(v19, &EventReportOfferAllocation, a3, a2, v20, v21);
  }
}
