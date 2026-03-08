/*
 * XREFs of IopSetFileMemoryPartitionInformation @ 0x140944B5C
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 * Callees:
 *     IopSetTypeSpecificFoExtension @ 0x14023FE5C (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetFileMemoryPartitionInformation(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  _DWORD *Pool2; // rdi
  NTSTATUS v7; // eax
  PVOID v8; // rbp
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __m128i v11; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0LL;
  Object = 0LL;
  if ( a3 < 0x10 )
    return (unsigned int)-1073741811;
  v11 = *(__m128i *)a2;
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) > 1u )
    return (unsigned int)-1073741811;
  v11.m128i_i8[8] = 0;
  if ( v11.m128i_i32[2] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1716547401LL);
    if ( Pool2 )
    {
      v7 = PsReferencePartitionByHandle(*(void **)a2, 2u, 0, 0x66506F49u, &Object);
      v8 = Object;
      v5 = v7;
      if ( v7 >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x6F466F49u);
        PsDereferencePartition((__int64)v8);
        *(_QWORD *)Pool2 = v8;
        Pool2[2] ^= (Pool2[2] ^ *(unsigned __int8 *)(a2 + 8)) & 1;
        v5 = IopAllocateFileObjectExtension(a1, &v10);
        if ( v5 >= 0 )
        {
          if ( (int)IopSetTypeSpecificFoExtension(v10, 8u, (signed __int64)Pool2) >= 0 )
            return 0;
          v5 = -1073741791;
        }
      }
      if ( *(_QWORD *)Pool2 )
        ObfDereferenceObjectWithTag(v8, 0x6F466F49u);
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
