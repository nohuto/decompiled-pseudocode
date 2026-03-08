/*
 * XREFs of AcpiDispatchNativeMethodEvalRequest @ 0x1C00373D4
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C00375E0 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiDispatchNativeMethodEvalRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  int v7; // [rsp+28h] [rbp-48h]
  int v8; // [rsp+2Ch] [rbp-44h]
  __int64 v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v14)(); // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  __int64 (__fastcall *v16)(_QWORD *, void *, __int64, __int64 *); // [rsp+60h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v11 = 0;
  v6 = v2;
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 56);
  v14 = AcpiNativeMethodEvalRequestCompletion;
  v16 = AcpiAllocateNativeMethodOutputBuffer;
  v15 = a1;
  v7 = v4;
  result = ((__int64 (__fastcall *)(__int64 *))qword_1C006EC88)(&v6);
  if ( (_DWORD)result != 259 )
    *(_DWORD *)(a1 + 64) = result;
  return result;
}
