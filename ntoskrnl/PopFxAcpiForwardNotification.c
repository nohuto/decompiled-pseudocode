/*
 * XREFs of PopFxAcpiForwardNotification @ 0x14059E718
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14059E614 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  NTSTATUS v8; // edi
  char v9; // si

  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 272), (PVOID)0x72466F50, &Src, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 80) + 112LL))(a2, a3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
    *a5 = v9;
  }
  return (unsigned int)v8;
}
