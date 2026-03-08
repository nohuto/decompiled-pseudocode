/*
 * XREFs of ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0383C60
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C03222E4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005C3E0 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
        DXG_HOST_GLOBAL_VMBUS *this,
        const struct _DXGSHAREDALLOCOBJECT *a2,
        int a3,
        void *a4,
        unsigned int a5,
        struct DXGKVMB_GUEST_TRANSACTION *a6)
{
  __int64 v7; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  _QWORD **v11; // r15
  unsigned int v12; // eax
  _QWORD *i; // rcx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rdi
  ADAPTER_RENDER *v20; // r13
  unsigned __int8 *v21; // r14
  int v22; // r9d
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rcx
  char *v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  _QWORD *v31; // rsi
  char *v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+A8h] [rbp+10h]

  v7 = *((_QWORD *)a2 + 2);
  v36 = *((_QWORD *)a2 + 3);
  v37 = *((_QWORD *)a2 + 4);
  v9 = *(_DWORD *)(v7 + 128) + 92;
  if ( *(_DWORD *)(v7 + 128) >= 0xFFFFFFA4 )
    return 2147483653LL;
  v10 = v9 + *(_DWORD *)(v7 + 112);
  if ( v10 < v9 )
    return 2147483653LL;
  v11 = (_QWORD **)(v7 + 136);
  v12 = 0;
  for ( i = *(_QWORD **)(v7 + 136); i != v11; i = (_QWORD *)*i )
  {
    v14 = v12 + 56;
    if ( v12 + 56 < v12 )
      return 2147483653LL;
    v12 = v14 + *((_DWORD *)i - 2);
    if ( v12 < v14 )
      return 2147483653LL;
  }
  v15 = v12 + v10;
  if ( v12 + v10 < v10 )
    return 2147483653LL;
  v16 = v15 + 8;
  if ( v15 + 8 < v15 )
    return 2147483653LL;
  v17 = operator new[](v16, 0x4B677844u, 64LL);
  v18 = v17;
  if ( !v17 )
    return 3221225495LL;
  v20 = *(ADAPTER_RENDER **)(v7 + 80);
  v21 = (unsigned __int8 *)v17;
  v22 = *(_DWORD *)(v7 + 132);
  v23 = *(unsigned int *)(v7 + 112);
  v24 = *(_DWORD *)(v7 + 128);
  v25 = *((_QWORD *)a6 + 2);
  v26 = *((_QWORD *)v20 + 2);
  *(_QWORD *)v18 = 0LL;
  *(_DWORD *)(v18 + 8) = 0;
  *(_BYTE *)(v18 + 12) = 2;
  *(_DWORD *)(v18 + 12) &= 0x1FFu;
  *(_DWORD *)(v18 + 16) = 5;
  *(_QWORD *)(v18 + 24) = *(_QWORD *)(v26 + 404);
  *(_QWORD *)(v18 + 40) = a4;
  *(_DWORD *)(v18 + 48) = a5;
  *(_QWORD *)(v18 + 32) = v25;
  v27 = (_DWORD *)(v18 + 80);
  *(_DWORD *)(v18 + 56) = v37 != 0 ? a3 : 0;
  *(_DWORD *)(v18 + 52) = a3;
  *(_DWORD *)(v18 + 64) = v24;
  *(_DWORD *)(v18 + 60) = v36 != 0 ? a3 : 0;
  *(_DWORD *)(v18 + 68) = v23;
  *(_DWORD *)(v18 + 72) = v22;
  v28 = (char *)(v18 + 92);
  *v27 = *(_DWORD *)(v7 + 12);
  v27[1] = *(_DWORD *)(v7 + 128);
  v27[2] = *(_DWORD *)(v7 + 112);
  v29 = *(_DWORD *)(v7 + 128);
  if ( v29 )
  {
    memmove(v28, *(const void **)(v7 + 120), v29);
    v28 += *(unsigned int *)(v7 + 128);
  }
  v30 = *(_DWORD *)(v7 + 112);
  if ( v30 )
  {
    memmove(v28, *(const void **)(v7 + 104), v30);
    v28 += *(unsigned int *)(v7 + 112);
  }
  v31 = *v11;
  while ( v31 != v11 )
  {
    *(_DWORD *)v28 = *((_DWORD *)v31 - 11);
    *((_DWORD *)v28 + 1) = *((_DWORD *)v31 - 2);
    *((_QWORD *)v28 + 1) = *(v31 - 4);
    ADAPTER_RENDER::DdiDescribeAllocation(v20, (struct _DXGKARG_DESCRIBEALLOCATION *)(v28 + 8), v23);
    *((_QWORD *)v28 + 1) = 0LL;
    v32 = v28 + 56;
    memmove(v32, (const void *)*(v31 - 2), *((unsigned int *)v31 - 2));
    v33 = *((unsigned int *)v31 - 2);
    v31 = (_QWORD *)*v31;
    v28 = &v32[v33];
  }
  *(_QWORD *)v28 = 0LL;
  v34 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(this, v21, (struct DXGKVMB_COMMAND_BASE *)v21, v16);
  v35 = v34;
  if ( v34 < 0 )
  {
    WdLogSingleEntry1(2LL, v34);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendAsyncMessage failed. 0x%I64x",
      v35,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  operator delete(v21);
  return (unsigned int)v35;
}
