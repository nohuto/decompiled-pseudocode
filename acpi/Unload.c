/*
 * XREFs of Unload @ 0x1C0055B80
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     PushPost @ 0x1C0053CE0 (PushPost.c)
 */

__int64 __fastcall Unload(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "H");
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( v5 )
      return PushPost(a1, (__int64)ParseUnload, v5, 0LL, *(_QWORD *)(a2 + 88));
  }
  return result;
}
