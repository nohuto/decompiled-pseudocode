/*
 * XREFs of SetFailureLocation @ 0x140243E5C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x1402F6880 (CmpDoFileRead.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpOpenHiveFiles @ 0x1406C02C8 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x1406C0B40 (CmpGetCompleteFileName.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     HvCheckBin @ 0x1406ED190 (HvCheckBin.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmCheckRegistry @ 0x14072DEB4 (CmCheckRegistry.c)
 *     HvHiveStartFileBacked @ 0x14072F1D4 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     HvpInitMap @ 0x1407309B8 (HvpInitMap.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmLoadKey @ 0x140732FF8 (CmLoadKey.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x1407A4A50 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     CmpCheckRegistry2 @ 0x1407B3F40 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x1407FF060 (HvHiveStartMemoryBacked.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407FF548 (HvpBuildMapForMemoryBackedHive.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1A060 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1A1E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1A9B4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x140A1B050 (HvpMapHiveImage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // [rsp+30h] [rbp-51h] BYREF
  int v12; // [rsp+34h] [rbp-4Dh] BYREF
  int v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-41h] BYREF
  char *v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int *v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+7Ch] [rbp-5h]
  int *v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+8Ch] [rbp+Bh]
  int *v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]

  if ( (unsigned int)dword_140C04328 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v11;
    v19 = &v12;
    v22 = &v13;
    v25 = &v14;
    v12 = a3;
    v20 = 4;
    v13 = a4;
    v23 = 4;
    v26 = 4;
    v11 = a2;
    v17 = 1;
    v14 = a5;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C04328, byte_140037863, 0LL, 0LL, 6, v15);
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
