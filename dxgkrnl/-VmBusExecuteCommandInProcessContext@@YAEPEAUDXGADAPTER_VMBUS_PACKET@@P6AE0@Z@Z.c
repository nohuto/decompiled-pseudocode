/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C037996C
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C037EC00 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000748C (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x1C0041998 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v6; // r14
  BOOLEAN v7; // bp
  unsigned int v8; // eax
  __int64 v9; // rbx
  int v10; // ecx
  struct _EX_RUNDOWN_REF *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _BYTE v15[24]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v16[8]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v17; // [rsp+70h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-60h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v3 = *((_QWORD *)a1 + 17);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(v3 + 8) )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, (struct DXGPROCESS *)v2);
    v8 = (*(_DWORD *)(v3 + 8) >> 6) & 0xFFFFFF;
    if ( v8 < *(_DWORD *)(v2 + 296) )
    {
      v9 = *(_QWORD *)(v2 + 280);
      if ( ((*(_DWORD *)(v3 + 8) >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60)
        && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0 )
      {
        v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
        if ( v10 )
        {
          if ( v10 == 12 )
          {
            v11 = *(struct _EX_RUNDOWN_REF **)(v9 + 16LL * v8);
            if ( !v11 )
              goto LABEL_12;
            v7 = ExAcquireRundownProtection(v11 + 30);
            if ( v7 )
              goto LABEL_12;
            WdLogSingleEntry2(2LL, *(unsigned int *)(v3 + 8), 307LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to acquire process rundown protection: 0x%I64x",
              *(unsigned int *)(v3 + 8),
              307LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    v11 = 0LL;
LABEL_12:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v3 + 12) )
    goto LABEL_23;
  v12 = *(int *)(v3 + 16);
  if ( (unsigned int)v12 > 0x30 )
    goto LABEL_23;
  v13 = 0x1000000000104LL;
  if ( !_bittest64(&v13, v12) )
    goto LABEL_23;
  v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 12);
LABEL_17:
  if ( !v11 )
  {
LABEL_23:
    WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 8));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process handle specified: 0x%I64x",
      *(unsigned int *)(v3 + 8),
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v16, (struct DXGPROCESS *)v11, 0);
  if ( v17 )
  {
    *((_QWORD *)a1 + 11) = v11;
    v6 = a2(a1);
  }
  else
  {
    WdLogSingleEntry1(2LL, 341LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Setting current DXGPROCESS failed",
      341LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v16);
  if ( v7 )
    ExReleaseRundownProtection(v11 + 30);
LABEL_24:
  KeUnstackDetachProcess(&ApcState);
  return v6;
}
