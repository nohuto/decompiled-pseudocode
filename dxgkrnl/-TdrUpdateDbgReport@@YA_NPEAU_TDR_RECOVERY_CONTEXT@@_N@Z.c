/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030AA20
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0309D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0309FA0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A4E0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A36C (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C030A96C (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A9BC (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     DpiIsRfxVgpuDevice @ 0x1C0394B40 (DpiIsRfxVgpuDevice.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 v2; // r9
  char v3; // r10
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  bool v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v3 = a2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 216);
    v6 = *(_QWORD *)(v5 + 64);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 && *(_BYTE *)(v6 + 2695) )
        return 0;
    }
    if ( (unsigned __int8)DpiIsRfxVgpuDevice(v5) )
      return 0;
  }
  if ( !*((_QWORD *)a1 + 355) || v3 )
  {
    TdrGetDbgOwnerTag(a1);
    v15 = 0;
    TdrRetrieveSecondaryBucketingKey(a1, &v15);
    if ( v8 )
      v11 = *(_QWORD *)(v8 + 2928) == 0LL;
    else
      v11 = 0;
    if ( *((_DWORD *)a1 + 4) == 6 )
      v12 = (unsigned int)(*((_BYTE *)a1 + 2820) != 0) + 321;
    else
      v12 = 279LL;
    if ( v8 )
      v13 = *(_QWORD *)(v8 + 216);
    else
      v13 = 0LL;
    v14 = WdDbgReportRecreate(v13, v12, a1, v9, v15, *((_QWORD *)a1 + 351), v11, v10, 0);
    *((_QWORD *)a1 + 355) = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL, a1);
      return 0;
    }
    if ( !(unsigned __int8)WdDbgReportQueryInfo(v14, (char *)a1 + 128) )
      WdLogSingleEntry1(2LL, a1);
  }
  if ( *((_QWORD *)a1 + 356) )
  {
    if ( *((_QWORD *)a1 + 357) )
    {
      TdrUpdateDbgBuffer(a1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(
                               *((_QWORD *)a1 + 355),
                               *((_QWORD *)a1 + 356),
                               *((unsigned int *)a1 + 714)) )
      {
        *((_DWORD *)a1 + 29) |= 0x80000000;
        WdLogSingleEntry2(2LL, a1, *((_QWORD *)a1 + 357));
        return 0;
      }
    }
  }
  return 1;
}
