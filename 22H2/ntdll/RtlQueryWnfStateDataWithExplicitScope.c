/*
 * XREFs of RtlQueryWnfStateDataWithExplicitScope @ 0x1800840C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A0150 (ZwQueryWnfStateData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800A27A0 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800DE694 (RtlResetStackOverflow.c)
 */

NTSTATUS __fastcall RtlQueryWnfStateDataWithExplicitScope(
        ULONG *a1,
        WNF_STATE_NAME a2,
        const void *a3,
        __int64 (__fastcall *a4)(WNF_STATE_NAME, __int64, PCWNF_TYPE_ID, __int64, _BYTE *, ULONG),
        __int64 a5,
        PCWNF_TYPE_ID TypeId)
{
  void *v8; // rsp
  NTSTATUS result; // eax
  __int64 v10; // rdx
  _BYTE Buffer[4096]; // [rsp+20h] [rbp-1000h] BYREF
  ULONG BufferSize; // [rsp+1020h] [rbp+0h] BYREF
  ULONG ChangeStamp; // [rsp+1024h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1028h] [rbp+8h]
  WNF_STATE_NAME StateName; // [rsp+1030h] [rbp+10h] BYREF

  StateName = a2;
  v8 = alloca(4096LL);
  v14 = Buffer;
  BufferSize = 4096;
  result = ZwQueryWnfStateData(&StateName, TypeId, a3, &ChangeStamp, Buffer, &BufferSize);
  if ( result >= 0 )
  {
    v10 = ChangeStamp;
    *a1 = ChangeStamp;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))a4)(
             StateName,
             v10,
             TypeId,
             a5,
             Buffer,
             BufferSize);
  }
  return result;
}
