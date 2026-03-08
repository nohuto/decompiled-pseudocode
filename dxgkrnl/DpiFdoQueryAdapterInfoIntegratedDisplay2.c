/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C039828C
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01E7088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01E70A8 (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0201770 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rbx
  void *v8; // rax
  __int64 v9; // rax
  char v10; // cl
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-39h] BYREF
  int v19; // [rsp+24h] [rbp-35h]
  __int64 v20; // [rsp+28h] [rbp-31h]
  struct _DXGKARG_QUERYADAPTERINFO v21; // [rsp+30h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v22; // [rsp+60h] [rbp+7h] BYREF
  int v23; // [rsp+C0h] [rbp+67h] BYREF
  int v24; // [rsp+C8h] [rbp+6Fh] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v23 = *(_DWORD *)(a2 + 24);
  v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_2;
  *(_QWORD *)&v22.Type = 0LL;
  v22.pInputData = &v23;
  v8 = *(void **)(a2 + 104);
  *(&v22.InputDataSize + 1) = 0;
  v22.pOutputData = v8;
  *(_OWORD *)&v22.OutputDataSize = 0LL;
  v22.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
  v22.InputDataSize = 4;
  v22.OutputDataSize = 128;
  v7 = (int)DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v3 + 3912), &v22, v6);
  DpiReleaseCoreSyncAccessSafe(a1, 0);
  if ( (int)v7 < 0 )
    goto LABEL_2;
  v9 = *(_QWORD *)(a2 + 104);
  v10 = *(_BYTE *)(v9 + 123);
  if ( v10 != 1 )
  {
    v13 = *(_DWORD *)(a2 + 24);
    if ( v10 != 2 )
    {
      WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v9 + 123), *(unsigned int *)(a2 + 24));
      LODWORD(v7) = -1073741811;
      return (unsigned int)v7;
    }
    v14 = *(unsigned __int16 *)(a2 + 92);
    *(_WORD *)(a2 + 96) = v14;
    v18 = v14;
    v19 = 0;
    v20 = *(_QWORD *)(a2 + 120);
    v21.pInputData = &v24;
    v24 = v13;
    v21.pOutputData = &v18;
    *(_WORD *)(a2 + 94) = 0;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_QWORD *)&v21.Type = 20LL;
    *(_QWORD *)&v21.InputDataSize = 4LL;
    *(_QWORD *)&v21.Flags.0 = 0LL;
    HIDWORD(v21.hKmdProcessHandle) = 0;
    v21.OutputDataSize = 16;
    v15 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v7 = v15;
    if ( v15 < 0 )
      goto LABEL_2;
    v7 = (int)DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v3 + 3912), &v21, v16);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_8:
    if ( (int)v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_2;
  }
  v11 = *(unsigned __int16 *)(a2 + 92);
  *(_WORD *)(a2 + 94) = v11;
  *(_QWORD *)(a2 + 120) = 0LL;
  *(_WORD *)(a2 + 96) = 0;
  if ( (unsigned __int16)v11 >= 0x80u )
  {
    v12 = *(_QWORD *)(v3 + 3912);
    v19 = v11;
    v20 = *(_QWORD *)(a2 + 112);
    v18 = 0;
    DxgkAcquireAdapterDdiSync(v12, 1);
    v7 = (int)DpiDxgkDdiQueryDeviceDescriptor(
                *(_QWORD *)(v3 + 40),
                *(_QWORD *)(v3 + 48),
                *(unsigned int *)(a2 + 24),
                &v18);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v3 + 3912));
    goto LABEL_8;
  }
  v7 = -1073741811LL;
LABEL_2:
  WdLogSingleEntry1(2LL, v7);
  return (unsigned int)v7;
}
