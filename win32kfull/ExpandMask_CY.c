/*
 * XREFs of ExpandMask_CY @ 0x1C025F7C0
 * Callers:
 *     <none>
 * Callees:
 *     BltMask_CY @ 0x1C025F560 (BltMask_CY.c)
 */

__int64 __fastcall ExpandMask_CY(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 *v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v1 + 168))-- == 1 )
  {
    v3 = *(unsigned __int16 **)(v1 + 152);
    *(_DWORD *)(v1 + 168) = *v3;
    *(_QWORD *)(v1 + 152) = v3 + 1;
    return BltMask_CY(a1);
  }
  return result;
}
