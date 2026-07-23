/*
 * XREFs of SetFailureLocation @ 0x140242D88
 * Callers:
 *     CmpDoFileRead @ 0x140245F5C (CmpDoFileRead.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140662298 (CmpValidateHiveSecurityDescriptors.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 *     CmpCheckLeaf @ 0x1406DB680 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x1406DF7A0 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x1406DFBC0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1406E0950 (CmpCheckKey.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmCheckRegistry @ 0x1406F8F20 (CmCheckRegistry.c)
 *     HvHiveStartFileBacked @ 0x1406F94C0 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 *     HvpInitMap @ 0x1406FBFC8 (HvpInitMap.c)
 *     HvCheckBin @ 0x140720570 (HvCheckBin.c)
 *     HvCheckHive @ 0x140720C28 (HvCheckHive.c)
 *     HvpEnlistFreeCells @ 0x140720EE0 (HvpEnlistFreeCells.c)
 *     HvHiveStartMemoryBacked @ 0x14076FFD4 (HvHiveStartMemoryBacked.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407B209C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 *     HvpMapHiveImage @ 0x140873FF4 (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+6Ch] [rbp-15h]
  char *v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  __int64 *v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  char *v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]

  if ( (unsigned int)dword_140C02130 > 5 )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v14 = &v11;
    v17 = (char *)&v11 + 4;
    v20 = &v12;
    v23 = (char *)&v12 + 4;
    HIDWORD(v11) = a3;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    LOBYTE(v11) = a2;
    v15 = 1;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C02130, &word_14002E38E, 0LL, 0LL, 6, v13, v11, __PAIR64__(a5, a4));
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v10 = *(unsigned __int16 *)(a1 + 10);
      if ( (unsigned int)v10 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 9)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 8);
      if ( (unsigned int)v9 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 1)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
