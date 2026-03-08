/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C0397A98
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02009DC (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0208C54 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C0398644 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AD0A8 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AD15C (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AD218 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v9; // ebx
  int v10; // edx
  _QWORD *ChildDescriptor; // rax
  int v12; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  unsigned int *Pool2; // r15
  unsigned int v18; // r14d
  int v19; // edx
  _QWORD *v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // rdi
  int v23; // eax
  int v24; // edx
  int v25; // r9d
  int v26; // r11d
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-9Ch] BYREF
  _DXGK_CHILD_CAPABILITIES v32; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B4h] [rbp-4Ch]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  _DWORD v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+100h] [rbp+0h]
  unsigned int v45; // [rsp+104h] [rbp+4h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  __int64 v48; // [rsp+110h] [rbp+10h]

  *(_QWORD *)&v33[0] = 0x480000001ELL;
  v4 = a3[2];
  v30 = 0;
  v33[1] = 0LL;
  v6 = *(_QWORD *)(a1 + 5744);
  v7 = 1;
  v31 = 1;
  v38 = v4 & 0xFFFFFF;
  v37 = HIBYTE(v4) & 0xF;
  v39 = a3[4];
  v9 = 0;
  v40 = *(_QWORD *)(a1 + 2672);
  v32 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  memset((char *)v33 + 8, 0, 24);
  v36 = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v6);
  v10 = a3[2] & 0xFFFFFF;
  v32.Type.Other.MustBeZero = a3[3];
  v32.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v32.Type.VideoOutput.SupportsSdtvModes = 0;
  v32.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v10);
  if ( !ChildDescriptor )
  {
    v9 = -1073741810;
    v14 = -1073741810LL;
LABEL_3:
    v15 = 2LL;
LABEL_4:
    WdLogSingleEntry1(v15, v14);
LABEL_32:
    v43 = 0LL;
    v28 = *(_QWORD *)(a1 + 5744);
    v48 = *(_QWORD *)(a1 + 2672);
    v41[0] = 30;
    v41[1] = 72;
    v42 = 0LL;
    memset(&v41[2], 0, 24);
    v44 = 93;
    v45 = v7;
    v46 = v9;
    v47 = 0;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41, v28);
    return (unsigned int)v9;
  }
  v16 = v12 & 0xF000000;
  if ( v16 == 83886080 || v16 == 100663296 )
  {
    if ( ChildDescriptor[6] )
    {
      v14 = -1073741811LL;
      v7 = 2;
      v9 = -1073741811;
      v15 = 2LL;
      goto LABEL_4;
    }
    if ( IsInternalVideoOutput(v13) )
    {
      v14 = -1073741811LL;
      v7 = 4;
      v9 = -1073741811;
      goto LABEL_3;
    }
    if ( DpiFdoGetChildDescriptor(a1, a3[4]) )
    {
      if ( v25 == v26 )
      {
        v14 = -1073741811LL;
        v7 = 3;
        v9 = -1073741811;
        goto LABEL_3;
      }
    }
    else
    {
      v9 = DpiFdoCreateChildDescriptor(a1, v24, 0, (int *)&v31, (__int64)&v32, 0);
      if ( v9 < 0 )
      {
        v7 = 0x80000000;
        goto LABEL_32;
      }
      LOBYTE(v7) = 0;
    }
    v27 = DmmCreateDynamicVideoPresentTarget(
            *(void **)(a1 + 3912),
            a3[4],
            a3[2] & 0xFFFFFF,
            &v32,
            v7,
            (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v30);
    v7 = v30;
    v9 = v27;
  }
  else
  {
    if ( v16 != 0x4000000 )
      return (unsigned int)v9;
    v31 = *(_DWORD *)(a1 + 3496);
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4LL * v31, 1953656900LL);
    if ( !Pool2 )
    {
      v14 = -1073741801LL;
      v7 = 0x80000000;
      v9 = -1073741801;
      v15 = 6LL;
      goto LABEL_4;
    }
    v9 = DmmBuildDynamicVideoPresentTargetChildRelations(
           *(void **)(a1 + 3912),
           a3[2] & 0xFFFFFF,
           &v31,
           Pool2,
           (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v30);
    if ( v9 >= 0 )
    {
      v18 = v31;
      while ( v18 )
      {
        v19 = Pool2[--v18];
        v20 = DpiFdoGetChildDescriptor(a1, v19);
        v22 = v20;
        if ( v20[6] != v21 )
        {
          v23 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((_DWORD *)v20 + 6),
                  *((_DWORD *)v20 + 1),
                  0,
                  v21,
                  v21,
                  v21,
                  v21,
                  v21,
                  a2,
                  (__int64)(a3 + 10));
          v9 = v23;
          if ( v23 < 0 )
          {
            v7 = 2;
            WdLogSingleEntry1(2LL, v23);
            goto LABEL_18;
          }
        }
        v9 = DmmDestroyDynamicVideoPresentTarget(
               *(void **)(a1 + 3912),
               *((_DWORD *)v22 + 6),
               (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v30);
        if ( v9 < 0 )
          break;
        DpiFdoRemoveChildDescriptor(a1, v22);
      }
    }
    v7 = v30;
LABEL_18:
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v9 < 0 )
    goto LABEL_32;
  return (unsigned int)v9;
}
