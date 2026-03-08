/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00ED718
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00EC954 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM.c)
 *     ?FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00ED1EC (-FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00EDE8C (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 */

__int64 VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(
        union _LARGE_INTEGER *a1,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        ...)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v18; // [rsp+90h] [rbp+28h]
  __int64 v19; // [rsp+98h] [rbp+30h]
  __int64 v20; // [rsp+A0h] [rbp+38h]
  _DWORD *v21; // [rsp+A8h] [rbp+40h]
  _QWORD *v22; // [rsp+B0h] [rbp+48h]
  va_list va1; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _DWORD *);
  v22 = va_arg(va1, _QWORD *);
  v6 = 0;
  if ( VIDMM_WORKER_THREAD::FlushDeferredEvictions(a1, a2) )
  {
    ++a1[47].HighPart;
    return 0LL;
  }
  v8 = v20;
  v9 = **a3;
  v10 = *(_QWORD *)(a1->QuadPart + 40224);
  v11 = *(_DWORD *)(v9 + 68);
  v12 = 1616LL * (v11 & 0x3F);
  if ( (*(_BYTE *)(v10 + v12 + 446) & 2) != 0
    && (*(_DWORD *)(a1->QuadPart + 7056) & 0x2000) == 0
    && ((*(_DWORD *)a3[12] & 0x20000) == 0 || (*(_BYTE *)(v10 + v12 + 445) & 0x10) != 0)
    && (v11 & 0x400) == 0
    && VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(a1, v9, a2) )
  {
    ++a1[48].LowPart;
    return 0LL;
  }
  v13 = v19;
  v14 = 0LL;
  v16 = 0LL;
  if ( !*(_BYTE *)(v19 + 8) )
  {
    if ( v18 && *(_DWORD *)(v18 + 48) == 203 )
      v15 = *(_DWORD *)(v18 + 80);
    else
      v15 = 0;
    if ( (unsigned __int8)VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v19, v8, v15, (__int64 *)va) )
    {
      ++a1[48].HighPart;
      return 0LL;
    }
    v14 = v16;
  }
  if ( (*(_DWORD *)a3[12] & 0x20000) != 0
    && (*(_BYTE *)(*(_QWORD *)(a1->QuadPart + 40224) + v12 + 445) & 0x10) == 0
    && !*(_BYTE *)(v13 + 8) )
  {
LABEL_25:
    v6 = -1073741823;
    goto LABEL_26;
  }
  if ( *(_DWORD *)v13 == 2 )
  {
    if ( v14 )
    {
      *v22 = v14;
      return 3223191812LL;
    }
    goto LABEL_25;
  }
LABEL_26:
  result = v6;
  *v21 = *(_DWORD *)v13;
  return result;
}
