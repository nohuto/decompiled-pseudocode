/*
 * XREFs of PspIumGetPhysicalPage @ 0x14090CB8C
 * Callers:
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PspIumReplenishPartitionPages @ 0x140583EB8 (PspIumReplenishPartitionPages.c)
 *     MmVirtualAccessFault @ 0x1408D1DB4 (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rdi
  _KPROCESS *v7; // rsi
  __int64 v8; // rcx
  _KPROCESS *Process; // r14
  __int64 v10; // rax
  int v11; // edi
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  signed __int64 v14[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_KPROCESS **)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( v8 && *(_DWORD *)(v8 + 4) < 8u )
    PspIumReplenishPartitionPages(v8, 3u);
  if ( v5 >= 0x7FFFFFFF0000LL )
  {
    v11 = -1073741819;
  }
  else
  {
    v14[1] = 4096LL;
    v14[0] = v5 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v7 )
      KiStackAttachProcess(v7, 0LL, (__int64)v15, a4);
    v10 = v13;
    while ( 1 )
    {
      v13 = v10 & 0xFFFFFFFFFFFFFLL;
      v11 = MmVirtualAccessFault(v14, (__int64)&v13, v4);
      if ( v11 < 0 )
        break;
      v10 = v13;
      if ( (v13 & 0x10000000000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 16) = v13 & 0xFFFFFFFFFFFFFLL;
        break;
      }
    }
    if ( Process != v7 )
      KiUnstackDetachProcess((__int64)v15, 0);
  }
  result = v11;
  *(_QWORD *)(a1 + 8) = v11;
  return result;
}
