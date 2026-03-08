/*
 * XREFs of VslpDispatchIumSyscall @ 0x1404122C0
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VslpDispatchIumSyscall(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD),
        _QWORD *a2,
        char a3)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3 & 7;
  if ( v3 )
    qmemcpy(&v5, a2 + 4, 8 * v3);
  result = a1(*a2, a2[1], a2[2], a2[3]);
  __incgsdword(0x2EB8u);
  return result;
}
