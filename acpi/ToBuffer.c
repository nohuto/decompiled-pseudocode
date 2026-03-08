/*
 * XREFs of ToBuffer @ 0x1C0058C40
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     ConvertToBuffer @ 0x1C0059884 (ConvertToBuffer.c)
 */

__int64 __fastcall ToBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v7);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), v5, v6);
      if ( !(_DWORD)result )
        return WriteObject(a1, v7, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
