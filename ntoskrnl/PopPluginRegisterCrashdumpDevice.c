/*
 * XREFs of PopPluginRegisterCrashdumpDevice @ 0x1403AD964
 * Callers:
 *     PoFxRegisterCrashdumpDevice @ 0x14085E1D0 (PoFxRegisterCrashdumpDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPluginRegisterCrashdumpDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 (__fastcall *v3)(__int64, _QWORD *); // rax
  unsigned int v4; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 96);
  v4 = 0;
  v7[1] = a2;
  v7[0] = 0LL;
  if ( v3(25LL, v7) && v7[0] )
    *(_QWORD *)(a3 + 592) = v7[0];
  else
    return (unsigned int)-1073741637;
  return v4;
}
