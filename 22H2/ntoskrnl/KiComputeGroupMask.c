/*
 * XREFs of KiComputeGroupMask @ 0x140223B28
 * Callers:
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1403AD9D8 (KeQueryCpuPartitionAffinity.c)
 *     KeSetAffinityProcess @ 0x1403AE3D8 (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x14057E9F4 (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeGroupMask(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned int v3; // edx
  _QWORD *v4; // rcx
  unsigned int v5; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  result = 0LL;
  v5 = 0;
  v3 = 0;
  if ( v1 )
  {
    v4 = a1 + 4;
    do
    {
      if ( *v4 )
        _bittestandset((signed __int32 *)&v5, v3);
      ++v3;
      ++v4;
    }
    while ( v3 < v1 );
    return v5;
  }
  return result;
}
