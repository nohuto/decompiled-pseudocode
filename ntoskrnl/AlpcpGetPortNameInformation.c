/*
 * XREFs of AlpcpGetPortNameInformation @ 0x140976020
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1409760D8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpLogWaitForNewMessage @ 0x140977588 (AlpcpLogWaitForNewMessage.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpGetPortNameInformation(char *a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  int v7; // ebx
  __int64 Pool2; // rax
  void *v9; // rdi
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a3;
  v11 = 0;
  v7 = ObQueryNameStringMode(a1, 0LL, 0, &v11, 0);
  if ( v7 == -1073741820 )
  {
    if ( v11 <= v3 )
    {
      Pool2 = ExAllocatePool2(256LL, v11, 1129335873LL);
      v9 = (void *)Pool2;
      if ( Pool2 )
      {
        v7 = ObQueryNameStringMode(a1, Pool2, v11, &v11, 0);
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
    *a3 = v11;
  }
  return (unsigned int)v7;
}
