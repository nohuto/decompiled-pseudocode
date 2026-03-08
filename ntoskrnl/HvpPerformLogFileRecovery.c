/*
 * XREFs of HvpPerformLogFileRecovery @ 0x1407FBCAC
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     HvpGrowDirtyVectors @ 0x1402B32C4 (HvpGrowDirtyVectors.c)
 *     RtlMergeBitMaps @ 0x1402D7420 (RtlMergeBitMaps.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14072CD4C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1407300D8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x14073024C (HvpExpandMap.c)
 *     HvpMapHiveImageFromViewMap @ 0x14073051C (HvpMapHiveImageFromViewMap.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1407307FC (HvpLogTypeToLogArrayIndex.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140731AB4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     HvWriteHivePrimaryFile @ 0x14073216C (HvWriteHivePrimaryFile.c)
 *     HvpViewMapExtendStorage @ 0x140732D5C (HvpViewMapExtendStorage.c)
 *     HvResetLogFileStatusAll @ 0x140798BB4 (HvResetLogFileStatusAll.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvApplyLogFiles @ 0x1407F9454 (HvApplyLogFiles.c)
 *     HvpAddDummyBinToHive @ 0x140A1AF8C (HvpAddDummyBinToHive.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned int v5; // r13d
  _DWORD *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 Pool; // rax
  __int64 v11; // r8
  struct _PRIVILEGE_SET *v12; // r14
  _DWORD *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r10
  char v17; // r11
  __int64 v18; // r9
  char v19; // cl
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // edx
  unsigned int v24; // edx
  int v26; // eax
  unsigned int v27; // r12d
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-60h]
  int v31; // [rsp+20h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35; // [rsp+60h] [rbp-20h]
  PPRIVILEGE_SET v36[2]; // [rsp+68h] [rbp-18h]
  PPRIVILEGE_SET Privileges; // [rsp+C0h] [rbp+40h]

  v5 = a4[16];
  v7 = a4;
  v34 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 64);
  v35 = 0LL;
  Privileges = 0LL;
  *(_OWORD *)v36 = 0LL;
  v9 = *(_DWORD *)(v8 + 40);
  if ( v5 <= v9 )
    v5 = *(_DWORD *)(v8 + 40);
  if ( v5 > v9 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      v20 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v5 + 4096, 1);
      v15 = v20;
      if ( v20 < 0 )
      {
        v31 = 0;
LABEL_28:
        LODWORD(v21) = 0;
LABEL_30:
        SetFailureLocation(a5, v21, 27, v20, v31);
LABEL_18:
        v12 = Privileges;
        goto LABEL_19;
      }
      if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 160), 0x11u) )
      {
        v26 = HvpViewMapExtendStorage((__int64 *)(BugCheckParameter2 + 224), v5);
        if ( v26 < 0 )
          SetFailureLocation(a5, 0, 27, v26, 16);
      }
    }
    v20 = HvpExpandMap(BugCheckParameter2, 0, v9, v5);
    v15 = v20;
    if ( v20 < 0 )
    {
      v31 = 32;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 280) = v5;
      v20 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v5, 0);
      v15 = v20;
      if ( v20 >= 0 )
      {
        v20 = HvpGrowDirtyVectors(BugCheckParameter2, v5);
        v15 = v20;
        if ( v20 >= 0 )
        {
          if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 160), 0x11u) )
            v27 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
          else
            v27 = 0;
          if ( v9 >= v27 )
          {
            while ( 1 )
            {
LABEL_48:
              if ( v9 >= v5 )
              {
                v7 = a4;
                goto LABEL_4;
              }
              v20 = HvpAddDummyBinToHive(BugCheckParameter2);
              v15 = v20;
              if ( v20 < 0 )
                break;
              v9 += 4096;
            }
            v31 = 96;
          }
          else
          {
            v20 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v9, v27 - v9);
            v15 = v20;
            if ( v20 >= 0 )
            {
              v9 = v27;
              goto LABEL_48;
            }
            v31 = 80;
          }
        }
        else
        {
          v31 = 64;
        }
      }
      else
      {
        v31 = 48;
      }
    }
    goto LABEL_28;
  }
LABEL_4:
  Pool = CmpAllocatePool(256LL, ((v5 >> 12) + 3) & 0xFFFFFFFC, 942886211LL);
  Privileges = (PPRIVILEGE_SET)Pool;
  v12 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    v13 = *(_DWORD **)(BugCheckParameter2 + 64);
    v35 = Pool;
    v33 = *(_QWORD *)(BugCheckParameter2 + 32);
    v32 = *(_QWORD *)(BugCheckParameter2 + 24);
    LODWORD(v34) = v5 >> 9;
    v14 = HvApplyLogFiles(v13, a2, v11, (__int64)v7, v30, BugCheckParameter2, v32, v33, (__int64)&v34);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = 0LL;
      if ( v7[15] )
      {
        v17 = 0;
        do
        {
          v18 = (unsigned int)v7[v16 + 13];
          v19 = -1;
          *(_WORD *)(BugCheckParameter2 + 208) |= LOWORD(v7[6 * v18 + 2]) << v17;
          if ( (unsigned int)(v7[6 * v18 + 4] - v7[6 * v18 + 3] + 1) < 0xFF )
            v19 = LOBYTE(v7[6 * v18 + 4]) - LOBYTE(v7[6 * v18 + 3]) + 1;
          v16 = (unsigned int)(v16 + 1);
          v17 += 3;
          *(_BYTE *)(v18 + BugCheckParameter2 + 210) = v19;
        }
        while ( (unsigned int)v16 < v7[15] );
      }
      HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2);
      RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v34);
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      v20 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
      v21 = 0LL;
      v15 = v20;
      if ( v20 < 0 )
      {
        v31 = 144;
        goto LABEL_30;
      }
      *(_BYTE *)(BugCheckParameter2 + 194) = 0;
      *(_DWORD *)(BugCheckParameter2 + 184) = v7[17];
      *(_DWORD *)(BugCheckParameter2 + 168) = v7[18];
      *(_DWORD *)(BugCheckParameter2 + 172) = v7[20];
      *(_DWORD *)(BugCheckParameter2 + 176) = v7[19];
      *(_DWORD *)(BugCheckParameter2 + 180) = v7[21];
      if ( v7[15] )
      {
        do
        {
          LOBYTE(v22) = HvpLogTypeToLogArrayIndex(v7[6 * v7[v21 + 13] + 2]);
          v21 = (unsigned int)(v23 + 1);
          *(_BYTE *)(v22 + BugCheckParameter2 + 192) = 1;
        }
        while ( (unsigned int)v21 < v7[15] );
      }
      if ( (v7[22] & 1) != 0 && (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
      {
        RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 88));
        *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
        RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
        *(_DWORD *)(BugCheckParameter2 + 104) = 0;
        *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
        v20 = HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v28);
        v15 = v20;
        if ( v20 < 0 )
        {
          v31 = 256;
          goto LABEL_28;
        }
        *(_DWORD *)(BugCheckParameter2 + 184) = *(_DWORD *)(BugCheckParameter2 + 172);
        LOBYTE(v29) = 1;
        v20 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v29, 0LL, 0);
        v15 = v20;
        if ( v20 < 0 )
        {
          v31 = 272;
          goto LABEL_28;
        }
        RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
        *(_DWORD *)(BugCheckParameter2 + 128) = 0;
        HvResetLogFileStatusAll(BugCheckParameter2);
        *(_DWORD *)(BugCheckParameter2 + 168) = 1;
      }
      v24 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
      if ( v24 < v5 )
        HvFreeHivePartial(BugCheckParameter2, v24, 0);
      v15 = 0;
      goto LABEL_18;
    }
    SetFailureLocation(a5, 0, 27, v14, 128);
  }
  else
  {
    v15 = -1073741670;
    SetFailureLocation(a5, 0, 27, -1073741670, 112);
  }
LABEL_19:
  if ( v36[1] )
    CmSiFreeMemory(v36[1]);
  if ( v12 )
    CmSiFreeMemory(v12);
  return v15;
}
