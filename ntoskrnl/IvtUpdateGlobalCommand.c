/*
 * XREFs of IvtUpdateGlobalCommand @ 0x14037AD08
 * Callers:
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall IvtUpdateGlobalCommand(__int64 a1, unsigned int a2, char a3)
{
  int v3; // ebp
  ULONG_PTR v4; // rsi
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL);
  if ( a3 )
    v7 = a2 | v6;
  else
    v7 = ~a2 & v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v7;
  _InterlockedOr(v11, 0);
  v8 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    result = (unsigned int)v4 & v9;
    if ( (_DWORD)result == ((unsigned int)v4 & v7) )
      break;
    KeStallExecutionProcessor(1u);
    if ( v3 == 100000 )
      KeBugCheckEx(0x5Cu, 0x500uLL, v4, v7, v9);
    v8 = *(_QWORD *)(a1 + 8);
    ++v3;
  }
  return result;
}
