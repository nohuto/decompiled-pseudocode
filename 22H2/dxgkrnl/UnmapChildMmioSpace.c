/*
 * XREFs of UnmapChildMmioSpace @ 0x1C0251EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v5; // rax
  unsigned __int64 v6; // rdx
  volatile signed __int64 *v7; // rax
  char v8; // al
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct _KPROCESS *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-58h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v5 = &g_VgpuNumVaToGpaMappings;
  if ( !a4 )
    v5 = &g_VgpuNumHpaToGpaMappings;
  v6 = -a2;
  _InterlockedDecrement(v5);
  v7 = &g_VgpuSizeVaToGpaMappings;
  if ( !a4 )
    v7 = &g_VgpuSizeHpaToGpaMappings;
  _InterlockedExchangeAdd64(v7, v6);
  v8 = *(_BYTE *)(a1 + 347);
  if ( (v8 & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 496LL);
LABEL_7:
    v10 = v9 + 128;
    goto LABEL_11;
  }
  if ( (v8 & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 496);
    goto LABEL_7;
  }
  v10 = 0LL;
LABEL_11:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(v10 + 8), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v14 = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_1C00B45D0)(*(_QWORD *)v10, a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v11 = *(struct _KPROCESS **)(a3 + 40);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v11, &ApcState);
    ObCloseHandle(*(HANDLE *)(a3 + 16), 0);
    KeUnstackDetachProcess(&ApcState);
  }
  ExFreePoolWithTag((PVOID)a3, 0x4B677844u);
}
