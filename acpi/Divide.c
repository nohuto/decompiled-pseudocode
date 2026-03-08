/*
 * XREFs of Divide @ 0x1C00065A0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     PushPost @ 0x1C0053CE0 (PushPost.c)
 */

__int64 __fastcall Divide(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135LL, &v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 135LL, &v6);
      if ( !(_DWORD)result )
        return PushPost(a1, (unsigned int)ProcessDivide, a2, 0, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
