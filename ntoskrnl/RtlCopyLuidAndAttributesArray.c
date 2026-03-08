/*
 * XREFs of RtlCopyLuidAndAttributesArray @ 0x1409B91B0
 * Callers:
 *     CmpBuildAdminInformation @ 0x140A15CBC (CmpBuildAdminInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCopyLuidAndAttributesArray(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 result; // rax

  if ( a1 )
  {
    v3 = a2 - a3;
    v4 = a1;
    do
    {
      *(_QWORD *)a3 = *(_QWORD *)(v3 + a3);
      result = *(unsigned int *)(v3 + a3 + 8);
      *(_DWORD *)(a3 + 8) = result;
      a3 += 12LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
