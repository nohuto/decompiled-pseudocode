/*
 * XREFs of UnmapChildMmioSpace @ 0x1C0391880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v5; // rax
  unsigned __int64 v6; // rdx
  volatile signed __int64 *v7; // rax
  int v8; // eax
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
  v8 = *(_DWORD *)(a1 + 424);
  if ( (v8 & 0x100) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_7:
    v10 = v9 + 160;
    goto LABEL_11;
  }
  if ( (v8 & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 608);
    goto LABEL_7;
  }
  v10 = 0LL;
LABEL_11:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(v10 + 16), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v14 = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_1C013D0E0)(*(_QWORD *)v10, a3);
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
