/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x1408059BC
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x140805448 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFindResourceHandlerInfo @ 0x140805DA0 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x140805E30 (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x140805E88 (IopCallArbiter.c)
 *     IopQueryResourceHandlerInterface @ 0x140805F74 (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140807B6C (IopTranslateAndAdjustReqDesc.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char v6; // r12
  char v7; // r13
  __int64 v8; // rcx
  bool v9; // zf
  char v10; // si
  unsigned int v11; // eax
  char v12; // r11
  _QWORD *LegacyBusDeviceNode; // rbx
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // r9
  __int64 result; // rax
  __int16 v19; // di
  int v20; // eax
  __int16 v21; // di
  int v22; // eax
  char v23; // dl
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  PVOID *v29; // rcx
  __int64 v30; // rdi
  __int64 Pool2; // rax
  __int64 *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // [rsp+30h] [rbp-28h] BYREF
  __int64 v35; // [rsp+38h] [rbp-20h] BYREF
  __int64 v36; // [rsp+40h] [rbp-18h]
  char v37; // [rsp+A0h] [rbp+48h]
  char v38; // [rsp+A8h] [rbp+50h]
  __int64 v39; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+60h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 9);
  v40 = 0LL;
  v6 = 0;
  v36 = v4;
  v7 = 0;
  v8 = *(_QWORD *)(v3 + 64);
  v35 = 0LL;
  v38 = 1;
  v34 = 0LL;
  LOBYTE(v3) = *(_BYTE *)(v8 + 1);
  v9 = (_BYTE)v3 == 7;
  v39 = 0LL;
  v10 = v3;
  v11 = a1[20];
  if ( v9 )
    v10 = 3;
  if ( v11 != 1 || (v12 = 1, *a1) )
    v12 = 0;
  v37 = v12;
  if ( !v4 || v11 == 1 )
    LegacyBusDeviceNode = IopRootDeviceNode;
  else
    LegacyBusDeviceNode = *(_QWORD **)(*(_QWORD *)(v4 + 312) + 40LL);
  if ( LegacyBusDeviceNode )
  {
    while ( LegacyBusDeviceNode == IopRootDeviceNode && !v7 && !v12 )
    {
      v37 = 1;
      LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(*a1, a1[1]);
      if ( LegacyBusDeviceNode == v17 && !**(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) )
        LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
LABEL_25:
      if ( !LegacyBusDeviceNode )
        return v6 == 0 ? 0xC000008A : 0;
      v4 = v36;
    }
    if ( v6 || (v14 = LegacyBusDeviceNode[4], v14 == v4) )
    {
LABEL_17:
      if ( !v38 )
      {
LABEL_24:
        LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
        v12 = v37;
        goto LABEL_25;
      }
      LOBYTE(a3) = v10;
      if ( (unsigned __int8)IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, a3, &v34) )
        goto LABEL_19;
      if ( (unsigned __int8)v10 > 0xFu )
        v19 = 0;
      else
        v19 = 1 << v10;
      v20 = IopQueryResourceHandlerInterface(1LL, LegacyBusDeviceNode[4], a3, &v39);
      *((_WORD *)LegacyBusDeviceNode + 261) |= v19;
      if ( v20 >= 0 )
      {
        v30 = v39;
      }
      else
      {
        *((_WORD *)LegacyBusDeviceNode + 260) |= v19;
        if ( (unsigned __int8)v10 <= 0xFu )
        {
LABEL_19:
          v16 = v34;
LABEL_20:
          if ( v16 )
            v7 = 1;
          if ( !v6 && v16 )
          {
            result = IopTranslateAndAdjustReqDesc(*((_QWORD *)a1 + 4), v16, &v35);
            if ( (int)result < 0 )
              return result;
            a3 = v35;
            v23 = *(_BYTE *)(*(_QWORD *)(v35 + 64) + 1LL);
            *(_QWORD *)(v35 + 32) = *((_QWORD *)a1 + 4);
            v10 = v23;
            if ( v23 == 7 )
              v10 = 3;
            v24 = v38;
            *((_QWORD *)a1 + 4) = a3;
            if ( (_DWORD)result == 288 )
              v24 = 0;
            v38 = v24;
          }
          goto LABEL_24;
        }
        v30 = 0LL;
        v39 = 0LL;
      }
      Pool2 = ExAllocatePool2(256LL, 40LL, 538996816LL);
      if ( !Pool2 )
        return 3221225626LL;
      *(_BYTE *)(Pool2 + 16) = v10;
      *(_QWORD *)(Pool2 + 8) = Pool2;
      *(_QWORD *)Pool2 = Pool2;
      *(_QWORD *)(Pool2 + 24) = v30;
      *(_QWORD *)(Pool2 + 32) = LegacyBusDeviceNode;
      v32 = (__int64 *)LegacyBusDeviceNode[64];
      if ( (_QWORD *)*v32 != LegacyBusDeviceNode + 63 )
        goto LABEL_67;
      *(_QWORD *)(Pool2 + 8) = v32;
      *(_QWORD *)Pool2 = LegacyBusDeviceNode + 63;
      *v32 = Pool2;
      v16 = Pool2 & -(__int64)(v30 != 0);
      LegacyBusDeviceNode[64] = Pool2;
      v34 = v16;
      goto LABEL_20;
    }
    LOBYTE(a3) = v10;
    if ( (unsigned __int8)IopFindResourceHandlerInfo(2LL, LegacyBusDeviceNode, a3, &v40) )
      goto LABEL_13;
    if ( (unsigned __int8)v10 > 0xFu )
      v21 = 0;
    else
      v21 = 1 << v10;
    v22 = IopQueryResourceHandlerInterface(2LL, v14, a3, &v39);
    *((_WORD *)LegacyBusDeviceNode + 263) |= v21;
    if ( v22 >= 0 )
    {
      v33 = v39;
    }
    else
    {
      *((_WORD *)LegacyBusDeviceNode + 262) |= v21;
      if ( (unsigned __int8)v10 <= 0xFu )
      {
LABEL_13:
        v15 = v40;
LABEL_14:
        if ( v15 )
        {
          v6 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 40LL) & 1) != 0 && (int)IopCallArbiter(v15, 7LL) < 0 )
          {
            v6 = 0;
          }
          else
          {
            *((_QWORD *)a1 + 36) = v15;
            *(_WORD *)(v15 + 104) = 0;
          }
        }
        goto LABEL_17;
      }
      v33 = 0LL;
      v39 = 0LL;
    }
    v25 = ExAllocatePool2(256LL, 112LL, 538996816LL);
    v26 = v25;
    if ( !v25 )
      return 3221225626LL;
    *(_WORD *)(v25 + 104) = 0;
    *(_QWORD *)(v25 + 96) = v25 + 88;
    *(_QWORD *)(v25 + 88) = v25 + 88;
    *(_QWORD *)(v25 + 80) = v25 + 72;
    *(_QWORD *)(v25 + 72) = v25 + 72;
    v27 = (_QWORD *)(v25 + 40);
    *(_QWORD *)(v25 + 48) = v25 + 40;
    v28 = (_QWORD *)(v25 + 56);
    *v27 = v27;
    v28[1] = v28;
    *v28 = v28;
    *(_QWORD *)(v26 + 8) = v26;
    *(_QWORD *)v26 = v26;
    *(_BYTE *)(v26 + 16) = v10;
    *(_QWORD *)(v26 + 32) = LegacyBusDeviceNode;
    v29 = (PVOID *)LegacyBusDeviceNode[62];
    if ( *v29 != LegacyBusDeviceNode + 61 )
LABEL_67:
      __fastfail(3u);
    *(_QWORD *)v26 = LegacyBusDeviceNode + 61;
    *(_QWORD *)(v26 + 8) = v29;
    *v29 = (PVOID)v26;
    LegacyBusDeviceNode[62] = v26;
    *(_QWORD *)(v26 + 24) = v33;
    v15 = v26 & -(__int64)(v33 != 0);
    v40 = v15;
    goto LABEL_14;
  }
  return 3221225610LL;
}
