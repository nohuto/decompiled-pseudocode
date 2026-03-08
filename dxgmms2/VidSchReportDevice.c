/*
 * XREFs of VidSchReportDevice @ 0x1C0108500
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C003C618 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DE9C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // r10
  __int64 v6; // rbx
  int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // r10
  char v10; // dl
  char v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  char v14; // r9
  __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+28h] [rbp-80h]

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v5 + 240) )
    {
      v6 = *(_QWORD *)(v5 + 248);
      if ( v6 )
      {
        if ( bTracingEnabled )
        {
          v7 = 1 << VidSchiSchedulerNodeToDriverEngine(v5, *(_DWORD *)(v6 + 88));
          v10 = VidSchiSchedulerNodeToDriverNode(v9, v8);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8);
            if ( !v13 )
              v13 = v12;
          }
          else
          {
            v13 = 0LL;
          }
          v14 = (2 * (v11 & 1)) | 1;
          if ( (byte_1C00769C1 & 4) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              v13,
              &EventReportContext,
              a3,
              v13,
              v10,
              v7,
              0,
              0,
              0,
              0,
              0,
              v14,
              v6);
        }
        v15 = *(_QWORD *)(v6 + 56);
        if ( !v15 || (*(_DWORD *)(v6 + 112) & 0x40) != 0 )
          v15 = v6;
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          LODWORD(v17) = *(_DWORD *)(v6 + 404);
          LODWORD(v16) = *(_DWORD *)(v6 + 400);
          McTemplateK0pqq_EtwWriteTransfer((unsigned int)v17, &EventChangePriority, a3, v15, v16, v17);
        }
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225485LL;
  }
}
