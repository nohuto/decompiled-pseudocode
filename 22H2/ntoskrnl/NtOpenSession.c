/*
 * XREFs of NtOpenSession @ 0x1406A3080
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x14070CBB0 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, int a2, int a3)
{
  int v3; // r10d
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  v8[0] = 0LL;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a3 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(v3, (_DWORD)MmSessionObjectType, a3, 0, a2, 0LL, (__int64)v8);
  *a1 = v8[0];
  return result;
}
