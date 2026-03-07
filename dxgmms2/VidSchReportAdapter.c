__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // r15
  __int64 v7; // r13
  unsigned int i; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // r9d
  char v16; // r11
  __int64 v17; // r9
  unsigned int j; // r14d
  __int64 v19; // rsi
  unsigned int v20; // edx
  char v21; // al
  char v22; // r9
  __int64 v23; // r9
  unsigned int v24; // r14d
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  unsigned int v27; // edx
  char v28; // al
  char v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int k; // esi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // [rsp+28h] [rbp-49h]
  __int64 v38; // [rsp+30h] [rbp-41h]

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 240);
  if ( v6 )
  {
    if ( bTracingEnabled )
    {
      a3 = *(_QWORD *)(a1 + 16);
      a2 = *(_DWORD *)(v6 + 48) >> 2;
      if ( (byte_1C00769C1 & 4) != 0 )
        McTemplateK0ppqpttqpqp_EtwWriteTransfer((*(_DWORD *)(v6 + 48) >> 1) & 1, &EventReportDevice, a3, 0LL, a3);
    }
  }
  v7 = *(_QWORD *)(a1 + 256);
  if ( v7 )
  {
    if ( bTracingEnabled )
    {
      a3 = *(_DWORD *)(v7 + 48) >> 2;
      if ( (byte_1C00769C1 & 4) != 0 )
        McTemplateK0ppqpttqpqp_EtwWriteTransfer(
          (*(_DWORD *)(v7 + 48) >> 1) & 1,
          &EventReportDevice,
          (*(_DWORD *)(v7 + 48) & 4) != 0,
          0LL,
          *(_QWORD *)(a1 + 16));
    }
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    v9 = *(_QWORD *)(a1 + 632);
    a3 = *(unsigned int *)(a1 + 704);
    v10 = 8LL * i;
    a2 = v9 + v10;
    if ( i >= (unsigned int)a3 )
      a2 = *(_QWORD *)(a1 + 632);
    if ( *(_QWORD *)a2 )
    {
      v11 = v9 + v10;
      if ( i >= (unsigned int)a3 )
        v11 = *(_QWORD *)(a1 + 632);
      v12 = *(_QWORD *)(*(_QWORD *)v11 + 32LL);
      if ( v12 )
      {
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v12 + 88));
          v14 = VidSchiSchedulerNodeToDriverNode(a1, v13);
          a3 = v14;
          if ( (byte_1C00769C1 & 4) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              *(_QWORD *)(v12 + 104),
              &EventReportContext,
              v14,
              v6,
              v14,
              v16,
              0,
              0,
              0,
              0,
              0,
              (2 * (((v15 >> 1) & 0x20 | *(_DWORD *)(*(_QWORD *)(v12 + 104) + 48LL) & 0x10) >> 4)) | 1,
              v12);
        }
        v17 = *(_QWORD *)(v12 + 56);
        a2 = *(unsigned int *)(v12 + 400);
        if ( !v17 || (*(_DWORD *)(v12 + 112) & 0x40) != 0 )
          v17 = v12;
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          LODWORD(v38) = *(_DWORD *)(v12 + 404);
          LODWORD(v37) = *(_DWORD *)(v12 + 400);
          McTemplateK0pqq_EtwWriteTransfer((unsigned int)v38, &EventChangePriority, a3, v17, v37, v38);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 76); ++j )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * j);
      if ( v19 )
      {
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v19 + 88));
          v21 = VidSchiSchedulerNodeToDriverNode(a1, v20);
          if ( (byte_1C00769C1 & 4) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              *(_QWORD *)(v19 + 104),
              &EventReportContext,
              a3,
              v7,
              v21,
              v22,
              0,
              0,
              0,
              0,
              0,
              (2 * ((*(_DWORD *)(*(_QWORD *)(v19 + 104) + 48LL) & 0x10) != 0)) | 1,
              v19);
        }
        v23 = *(_QWORD *)(v19 + 56);
        a2 = *(unsigned int *)(v19 + 400);
        if ( !v23 || (*(_DWORD *)(v19 + 112) & 0x40) != 0 )
          v23 = v19;
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          LODWORD(v38) = *(_DWORD *)(v19 + 404);
          LODWORD(v37) = *(_DWORD *)(v19 + 400);
          McTemplateK0pqq_EtwWriteTransfer((unsigned int)v38, &EventChangePriority, a3, v23, v37, v38);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 272) )
  {
    v24 = 0;
    if ( *(_DWORD *)(a1 + 76) )
    {
      while ( 1 )
      {
        v25 = v24;
        v26 = *(_QWORD **)(*(_QWORD *)(a1 + 272) + 8LL * v24);
        if ( v26 )
        {
          if ( !bTracingEnabled )
            goto LABEL_45;
          VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(v26[2] + 4LL));
          v28 = VidSchiSchedulerNodeToDriverNode(a1, v27);
          v30 = v26[1];
          a2 = (2 * ((*(_DWORD *)(v30 + 48) >> 4) & 1)) | 1u;
          if ( (byte_1C00769C1 & 4) != 0 )
            break;
        }
LABEL_47:
        if ( ++v24 >= *(_DWORD *)(a1 + 76) )
          goto LABEL_48;
      }
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        v30,
        &EventReportContext,
        a3,
        v7,
        v28,
        v29,
        0,
        0,
        0,
        0,
        0,
        (2 * ((*(_DWORD *)(v30 + 48) & 0x10) != 0)) | 1,
        v26);
LABEL_45:
      if ( (byte_1C00769C1 & 4) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(v25, a2, a3, v26, v26, v26[6], v26[4]);
      goto LABEL_47;
    }
  }
LABEL_48:
  v31 = *(_QWORD *)(a1 + 280);
  if ( v31 )
  {
    for ( k = 0; k < *(_DWORD *)(a1 + 76); ++k )
    {
      v33 = v31;
      v34 = *(_QWORD *)(v31 + 8LL * k);
      if ( v34 && bTracingEnabled )
      {
        v35 = *(_QWORD *)(v34 + 40);
        v36 = *(_QWORD *)(v35 + 24);
        if ( !v36 || (*(_DWORD *)(v35 + 56) & 0x40) != 0 )
          v36 = *(_QWORD *)(v34 + 40);
        v31 = v33;
        if ( (byte_1C00769C1 & 4) != 0 )
        {
          McTemplateK0ppp_EtwWriteTransfer(v33, &EventReportHwQueue, v34, v36, 0LL, v34);
          v31 = *(_QWORD *)(a1 + 280);
        }
      }
    }
  }
  return 0LL;
}
