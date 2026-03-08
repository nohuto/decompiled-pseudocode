/*
 * XREFs of IoSetShadowFileInformation @ 0x140554D70
 * Callers:
 *     <none>
 * Callees:
 *     IopSetTypeSpecificFoExtension @ 0x14023FE5C (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoSetShadowFileInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *Pool2; // rax
  __int64 v7; // rcx
  int v8; // ebx
  void *v9; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  result = IopAllocateFileObjectExtension(a1, &v10);
  if ( (int)result >= 0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1716744009LL);
    if ( Pool2 )
    {
      v7 = v10;
      *Pool2 = a2;
      Pool2[1] = a3;
      v8 = IopSetTypeSpecificFoExtension(v7, 9u, (signed __int64)Pool2);
      if ( v8 < 0 )
      {
        v8 = -1073741791;
        ExFreePoolWithTag(v9, 0);
      }
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
