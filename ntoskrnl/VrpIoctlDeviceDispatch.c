/*
 * XREFs of VrpIoctlDeviceDispatch @ 0x140736DF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140244870 (EtwActivityIdControl.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140736830 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VRegEnabledInJob @ 0x140736F40 (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A6F7DC (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140A6F964 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A6FB9C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A6FD28 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 */

__int64 __fastcall VrpIoctlDeviceDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int DifferencingHive; // eax
  unsigned int v13; // esi
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  int v19; // ebx
  unsigned int v20; // eax
  void *v21; // [rsp+28h] [rbp-29h]
  void *v22; // [rsp+30h] [rbp-21h]
  unsigned int v23; // [rsp+38h] [rbp-19h] BYREF
  GUID v24; // [rsp+40h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26[2]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int *v27; // [rsp+80h] [rbp+2Fh]
  int v28; // [rsp+88h] [rbp+37h]
  int v29; // [rsp+8Ch] [rbp+3Bh]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = a2 + 56;
  *(_QWORD *)(a2 + 56) = 0LL;
  v24 = 0LL;
  ActivityId = 0LL;
  v5 = *(_DWORD *)(v2 + 24);
  if ( (unsigned int)VRegEnabledInJob(&v23) && !VrpAllowContainerNesting )
  {
    v13 = -1073741808;
    if ( (unsigned int)dword_140C043C0 > 2 )
    {
      v29 = 0;
      v27 = &v23;
      v23 = v5;
      v28 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C043C0,
        (unsigned __int8 *)byte_140039F0B,
        &v24,
        0LL,
        3u,
        v26);
    }
    goto LABEL_9;
  }
  EtwActivityIdControl(1u, &ActivityId);
  v8 = dword_140C043C0;
  if ( (unsigned int)dword_140C043C0 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v5;
    v28 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)&byte_140039EBF,
      &v24,
      &ActivityId,
      3u,
      v26);
    v8 = dword_140C043C0;
  }
  v9 = v5 - 2228228;
  if ( !v9 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(
                         *(ULONG_PTR **)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         v22);
    goto LABEL_8;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    DifferencingHive = VrpHandleIoctlLoadDifferencingHive(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64),
                         v7,
                         (unsigned __int64)v21,
                         v22);
    goto LABEL_8;
  }
  v11 = v10 - 4;
  if ( !v11 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         (__int64)v22);
LABEL_8:
    v13 = DifferencingHive;
    goto LABEL_9;
  }
  v15 = v11 - 4;
  if ( !v15 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlModifyFlags(*(_QWORD *)(a2 + 24), *(_DWORD *)(v2 + 16), v6, v7, v21, (__int64)v22);
    goto LABEL_8;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (_DWORD)v21,
                         (__int64)v22);
    goto LABEL_8;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                         *(ULONG_PTR **)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         v22);
    goto LABEL_8;
  }
  v18 = v17 - 4;
  if ( !v18 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlGetVirtualRootKey(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         *(_QWORD *)(a2 + 24),
                         v3);
    goto LABEL_8;
  }
  v19 = v18 - 4;
  if ( !v19 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v6);
    goto LABEL_8;
  }
  if ( v19 == 4 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v6);
    goto LABEL_8;
  }
  if ( v8 > 2 )
  {
    v20 = *(_DWORD *)(v2 + 24);
    v29 = 0;
    v23 = v20;
    v28 = 4;
    v27 = &v23;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C043C0, (unsigned __int8 *)byte_140039E93, &v24, 0LL, 3u, v26);
  }
  v13 = -1073741808;
LABEL_9:
  *(_DWORD *)(a2 + 48) = v13;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (unsigned int)dword_140C043C0 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v13;
    v28 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)&dword_140039EE4,
      &v24,
      0LL,
      3u,
      v26);
  }
  return v13;
}
