/*
 * XREFs of RtlWow64LogMessageInEventLogger @ 0x1800D6720
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

int __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  int result; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  int Callback; // [rsp+28h] [rbp-50h]
  PVOID ProcedureAddress; // [rsp+50h] [rbp-28h] BYREF
  PVOID v11; // [rsp+58h] [rbp-20h] BYREF
  PVOID v12; // [rsp+60h] [rbp-18h] BYREF
  PVOID *retaddr; // [rsp+78h] [rbp+0h]
  PVOID DllHandle; // [rsp+98h] [rbp+20h] BYREF

  result = LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_18011E468, &DllHandle);
  if ( result >= 0 )
  {
    if ( LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_18011E488, 0, &ProcedureAddress, 0, retaddr) >= 0
      && LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_18011E478, 0, &v12, 0, retaddr) >= 0
      && LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_18011E498, 0, &v11, 0, retaddr) >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, const wchar_t *))ProcedureAddress)(0LL, L"Wow64 Emulation Layer");
      v8 = v7;
      if ( v7 )
      {
        LOWORD(Callback) = a1;
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _QWORD))v11)(
          v7,
          4LL,
          0LL,
          a3,
          0LL,
          Callback,
          0,
          a2,
          0LL);
        ((void (__fastcall *)(__int64))v12)(v8);
      }
    }
    return LdrUnloadDll(DllHandle);
  }
  return result;
}
