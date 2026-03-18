/*
 * XREFs of IovpSessionDataReference @ 0x140ADF01C
 * Callers:
 *     IovpCallDriver1 @ 0x140ACD170 (IovpCallDriver1.c)
 *     IovpCompleteRequest2 @ 0x140ACDAFC (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovpSessionDataReference(_DWORD *a1)
{
  __int64 result; // rax

  if ( !a1[2] )
  {
    result = *(_QWORD *)a1;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)a1 + 20LL));
  }
  ++a1[2];
  return result;
}
