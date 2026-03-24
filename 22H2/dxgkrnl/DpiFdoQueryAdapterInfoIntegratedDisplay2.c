/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02CBCF0
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0188434 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C012E130 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012E3AC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0174BD0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0174C50 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0179350 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-39h] BYREF
  int v21; // [rsp+24h] [rbp-35h]
  __int64 v22; // [rsp+28h] [rbp-31h]
  struct _DXGKARG_QUERYADAPTERINFO v23; // [rsp+30h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v24; // [rsp+60h] [rbp+7h] BYREF
  int v25; // [rsp+C0h] [rbp+67h] BYREF
  int v26; // [rsp+C8h] [rbp+6Fh] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v25 = *(_DWORD *)(a2 + 24);
  v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
  v9 = v5;
  if ( v5 < 0 )
    goto LABEL_2;
  *(_QWORD *)&v24.Type = 0LL;
  v24.pInputData = &v25;
  v11 = *(void **)(a2 + 104);
  *(&v24.InputDataSize + 1) = 0;
  v24.pOutputData = v11;
  *(_OWORD *)&v24.OutputDataSize = 0LL;
  v24.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
  v24.InputDataSize = 4;
  v24.OutputDataSize = 128;
  v9 = (int)DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v3 + 3896), &v24, v8);
  DpiReleaseCoreSyncAccessSafe(a1, 0);
  if ( (int)v9 < 0 )
    goto LABEL_2;
  v6 = 1LL;
  LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(a2 + 104) + 123LL);
  if ( (_BYTE)v7 != 1 )
  {
    if ( (_BYTE)v7 != 2 )
    {
      v18 = WdLogNewEntry5_WdError(v7, 1LL);
      *(_QWORD *)(v18 + 24) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 104) + 123LL);
      *(_QWORD *)(v18 + 32) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdError(v18);
      LODWORD(v9) = -1073741811;
      return (unsigned int)v9;
    }
    v15 = *(unsigned __int16 *)(a2 + 92);
    v26 = *(_DWORD *)(a2 + 24);
    v21 = 0;
    v22 = *(_QWORD *)(a2 + 120);
    v23.pInputData = &v26;
    *(_WORD *)(a2 + 96) = v15;
    v20 = v15;
    v23.pOutputData = &v20;
    *(_WORD *)(a2 + 94) = 0;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_QWORD *)&v23.Type = 20LL;
    *(_QWORD *)&v23.InputDataSize = 4LL;
    *(_QWORD *)&v23.Flags.0 = 0LL;
    HIDWORD(v23.hKmdProcessHandle) = 0;
    v23.OutputDataSize = 16;
    v16 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v9 = v16;
    if ( v16 < 0 )
      goto LABEL_2;
    v9 = (int)DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v3 + 3896), &v23, v17);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_8:
    if ( (int)v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_2;
  }
  v12 = *(unsigned __int16 *)(a2 + 92);
  *(_WORD *)(a2 + 94) = v12;
  *(_QWORD *)(a2 + 120) = 0LL;
  *(_WORD *)(a2 + 96) = 0;
  if ( (unsigned __int16)v12 >= 0x80u )
  {
    v13 = *(_QWORD *)(v3 + 3896);
    v21 = v12;
    v22 = *(_QWORD *)(a2 + 112);
    v20 = 0;
    DxgkAcquireAdapterDdiSync(v13, 1LL);
    v9 = (int)DpiDxgkDdiQueryDeviceDescriptor(
                *(_QWORD *)(v3 + 40),
                *(_QWORD *)(v3 + 48),
                *(unsigned int *)(a2 + 24),
                &v20);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v3 + 3896), v14);
    goto LABEL_8;
  }
  v9 = -1073741811LL;
LABEL_2:
  v10 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v10 + 24) = v9;
  WdLogEvent5_WdError(v10);
  return (unsigned int)v9;
}
