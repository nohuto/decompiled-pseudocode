/*
 * XREFs of AlpcpGetPortNameInformation @ 0x1408C3098
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3150 (AlpcpPortQueryServerInfo.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C3F28 (AlpcpLogWaitForNewMessage.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14070FFB0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcpGetPortNameInformation(char *a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  int v7; // ebx
  PVOID PoolWithTag; // rax
  void *v9; // rdi
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a3;
  LODWORD(NumberOfBytes) = 0;
  v7 = ObQueryNameStringMode(a1, 0LL, 0, &NumberOfBytes, 0);
  if ( v7 == -1073741820 )
  {
    if ( (unsigned int)NumberOfBytes <= v3 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x43504C41u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        v7 = ObQueryNameStringMode(a1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes, 0);
        if ( v7 < 0 )
          ExFreePoolWithTag(v9, 0);
        else
          *a2 = v9;
      }
      else
      {
        v7 = -1073741801;
      }
    }
    *a3 = NumberOfBytes;
  }
  return (unsigned int)v7;
}
