__int64 __fastcall DxgkSignalEventCBPaged(const struct _DXGKARGCB_SIGNALEVENT *a1)
{
  __int64 v2; // rsi
  HANDLE hEvent; // rcx
  NTSTATUS v4; // eax
  PVOID v5; // rbx
  unsigned int v6; // ebp
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  v2 = *((_QWORD *)a1->hDxgkProcess + 4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  hEvent = a1->hEvent;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(hEvent, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v5 = Object;
  v6 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, a1->hEvent, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid event handle: 0x%I64x DXGPROCESS: 0x%I64x",
      (__int64)a1->hEvent,
      v2,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)Object, 0, 0);
    ObfDereferenceObject(v5);
  }
  KeUnstackDetachProcess(&ApcState);
  return v6;
}
