/*
 * XREFs of ?VmBusSignalGuestEventPassive@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038EB10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEventPassive(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rdx
  void *v5; // rcx
  NTSTATUS v6; // eax
  PVOID v7; // rbx
  PEPROCESS Process; // [rsp+50h] [rbp+7h] BYREF
  PVOID Object; // [rsp+58h] [rbp+Fh] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp+17h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  Process = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v2 = PsLookupProcessByProcessId(*(HANDLE *)(v1 + 32), &Process);
  if ( v2 >= 0 )
  {
    v4 = *(_QWORD *)(v1 + 24);
    if ( (unsigned __int64)(v4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      WdLogSingleEntry1(3LL, v4);
    }
    else
    {
      KeStackAttachProcess(Process, &ApcState);
      v5 = *(void **)(v1 + 24);
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(v5, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v7 = Object;
      if ( v6 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 24), Process);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid event handle: 0x%I64x DXGPROCESS: 0x%I64x",
          *(_QWORD *)(v1 + 24),
          (__int64)Process,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( *(_BYTE *)(v1 + 41) )
          KePulseEvent((PRKEVENT)Object, 0, 0);
        else
          KeSetEvent((PRKEVENT)Object, 0, 0);
        ObfDereferenceObject(v7);
      }
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObject(Process);
    }
  }
  else
  {
    v3 = v2;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 32), v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to reference EPROCESS from process handle 0x%I64x Status: 0xI64x",
      *(_QWORD *)(v1 + 32),
      v3,
      0LL,
      0LL,
      0LL);
  }
  return 0;
}
