/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x1402CCEF0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1407291A8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1408598B8 (MmInitializeHandBuiltProcess.c)
 *     MiAllocateAweInfo @ 0x140A3D3BC (MiAllocateAweInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  return result;
}
