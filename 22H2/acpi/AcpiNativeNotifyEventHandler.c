/*
 * XREFs of AcpiNativeNotifyEventHandler @ 0x1C005B440
 * Callers:
 *     <none>
 * Callees:
 *     NotifyHandler @ 0x1C002EE50 (NotifyHandler.c)
 *     AcpiHandleInternalNotify @ 0x1C005B1E8 (AcpiHandleInternalNotify.c)
 */

__int64 __fastcall AcpiNativeNotifyEventHandler(__int64 a1)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rdi
  unsigned int v3; // edx

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(volatile signed __int32 **)a1;
  if ( v1 == 0xFFFF )
    AcpiHandleInternalNotify(*(volatile signed __int32 **)a1);
  v3 = 0;
  if ( v1 != 0xFFFF )
    v3 = v1;
  return NotifyHandler(2LL, v3, (__int64)v2);
}
