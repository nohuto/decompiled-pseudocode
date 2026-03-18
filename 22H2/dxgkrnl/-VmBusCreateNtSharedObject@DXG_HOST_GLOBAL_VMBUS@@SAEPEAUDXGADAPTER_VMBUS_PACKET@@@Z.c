/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_41457977__private_IsEnabledDeviceUsage @ 0x1C0024DC0 (Feature_41457977__private_IsEnabledDeviceUsage.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C002623C (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B834 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C01A33C0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A37D8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01A3F58 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C02D8108 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0376288 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGPROCESS **a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r13
  char v2; // bl
  _DWORD *v3; // rsi
  __int64 v4; // rax
  DXGSHAREDVMOBJECT *v5; // rdi
  __int64 v6; // r12
  DXGSYNCOBJECT *v7; // r13
  char *Src; // r12
  _QWORD *v9; // r9
  unsigned int v10; // edx
  int v11; // r10d
  int EntryType; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // r9
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  struct _EX_RUNDOWN_REF *v24; // rdx
  int v25; // eax
  __int64 v27; // [rsp+28h] [rbp-51h]
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+58h] [rbp-21h] BYREF
  __int64 v30[4]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v31; // [rsp+80h] [rbp+7h]
  int v33; // [rsp+E8h] [rbp+6Fh]
  int v34; // [rsp+F0h] [rbp+77h] BYREF
  __int64 Current; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
  v2 = 0;
  Current = (__int64)DXGPROCESS::GetCurrent((__int64)a1);
  v34 = 0;
  v3 = (_DWORD *)Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v29, 0LL);
  v4 = operator new[](0x20uLL, 0x4B677844u, 256LL);
  v5 = (DXGSHAREDVMOBJECT *)v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_DWORD *)(v4 + 24) = 1;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)v1);
    if ( !v6 )
      goto LABEL_57;
    v28 = 0LL;
    v7 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v30,
      (struct DXGPROCESS *)v3);
    Src = (char *)(v6 + 24);
    v9 = v3 + 70;
    v10 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( v10 >= v3[74]
      || (v11 = *(_DWORD *)(*v9 + 16LL * v10 + 8),
          ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*v9 + 16LL * v10 + 8) & 0x60))
      || (v11 & 0x2000) != 0
      || (v11 & 0x1F) == 0 )
    {
      v13 = *(_DWORD *)Src;
      goto LABEL_51;
    }
    EntryType = HMGRTABLE::GetEntryType((__int64)(v3 + 70), v10);
    v33 = EntryType;
    if ( EntryType != 4 )
    {
      if ( EntryType == 8 )
      {
        v18 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
        if ( v18 < *(_DWORD *)(Current + 296) )
        {
          v19 = *(_QWORD *)(Current + 280);
          if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60)
            && (*(_DWORD *)(v19 + 16LL * v18 + 8) & 0x2000) == 0 )
          {
            v20 = *(_DWORD *)(v19 + 16LL * v18 + 8) & 0x1F;
            if ( v20 )
            {
              if ( v20 == 8 )
              {
                v7 = *(DXGSYNCOBJECT **)(v19 + 16LL * v18);
                if ( v7 && (*((_DWORD *)v7 + 51) & 2) != 0 )
                {
                  DXGSYNCOBJECT::AddReference(v7);
                  goto LABEL_42;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, 316LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  316LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
        }
        WdLogSingleEntry2(2LL, *(unsigned int *)Src, 7412LL);
        v27 = 7412LL;
        goto LABEL_27;
      }
      v13 = *(_DWORD *)Src;
      if ( EntryType == 11 )
      {
        v14 = (v13 >> 6) & 0xFFFFFF;
        if ( v14 >= *(_DWORD *)(Current + 296) )
          goto LABEL_16;
        v15 = *(_QWORD *)(Current + 280);
        if ( ((v13 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60) )
          goto LABEL_16;
        if ( (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) != 0 )
          goto LABEL_16;
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( !v16 )
          goto LABEL_16;
        if ( v16 != 11 )
        {
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
          WdLogSingleEntry1(2LL, *(unsigned int *)Src);
          v27 = 0LL;
LABEL_27:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid sync object handle: 0x%I64x",
            *(unsigned int *)Src,
            v27,
            0LL,
            0LL,
            0LL);
LABEL_28:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
LABEL_29:
          v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
          goto LABEL_53;
        }
        v17 = *(_QWORD *)(v15 + 16LL * v14);
        if ( !v17 || (*(_DWORD *)(v17 + 72) & 2) == 0 )
          goto LABEL_16;
        v7 = *(DXGSYNCOBJECT **)(v17 + 32);
        DXGSYNCOBJECT::AddReference(v7);
LABEL_42:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
        v25 = v33;
        if ( v33 == 4 )
        {
          v30[0] = 48LL;
          v30[3] = 512LL;
          v30[1] = 0LL;
          v30[2] = 0LL;
          v31 = 0LL;
          Current = 0LL;
          if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v30, 0x10000000u, &v28, (PVOID *)&Current) < 0 )
          {
            WdLogSingleEntry1(2LL, *(unsigned int *)Src);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to create Nt Shareed object, handle: 0x%I64x",
              *(unsigned int *)Src,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_29;
          }
          v7 = (DXGSYNCOBJECT *)Current;
          v25 = 4;
        }
        *((_QWORD *)v5 + 1) = v7;
        v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
        *(_DWORD *)v5 = v25;
        *((_QWORD *)v5 + 2) = v28;
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, a1[12]);
        v34 = HMGRTABLE::AllocHandle((unsigned int *)a1[12] + 70, (__int64)v5, 13, 0, 0);
        if ( !v34 )
        {
          WdLogSingleEntry1(2LL, 7480LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to allocate NT shared object handle",
            7480LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
        goto LABEL_53;
      }
LABEL_51:
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid object handle: 0x%I64x",
        *(unsigned int *)Src,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_28;
    }
    if ( !(unsigned int)Feature_41457977__private_IsEnabledDeviceUsage() )
      goto LABEL_42;
    v21 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(Current + 296) )
    {
      v22 = *(_QWORD *)(Current + 280);
      if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x60)
        && (*(_DWORD *)(v22 + 16LL * v21 + 8) & 0x2000) == 0 )
      {
        v23 = *(_DWORD *)(v22 + 16LL * v21 + 8) & 0x1F;
        if ( v23 )
        {
          if ( v23 == 4 )
          {
            v24 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * v21);
            goto LABEL_41;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v24 = 0LL;
LABEL_41:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Current, v24);
    DXGRESOURCEREFERENCE::MoveAssign(&v29, (struct _EX_RUNDOWN_REF **)&Current);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Current);
    goto LABEL_42;
  }
  v5 = 0LL;
  WdLogSingleEntry1(6LL, 7389LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
    7389LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_53:
  if ( !v34 && v5 )
    DXGSHAREDVMOBJECT::ReleaseReference(v5);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v34, 4u);
  v2 = 1;
LABEL_57:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
  return v2;
}
