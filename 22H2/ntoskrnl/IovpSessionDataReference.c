/*
 * XREFs of IovpSessionDataReference @ 0x1409E19A8
 * Callers:
 *     IovpCallDriver1 @ 0x1409CFC5C (IovpCallDriver1.c)
 *     IovpCompleteRequest2 @ 0x1409D0600 (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovpSessionDataReference(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = a1[2];
  if ( !v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)a1 + 20LL));
    v1 = a1[2];
  }
  result = (unsigned int)(v1 + 1);
  a1[2] = result;
  return result;
}
