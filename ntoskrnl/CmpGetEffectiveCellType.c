/*
 * XREFs of CmpGetEffectiveCellType @ 0x14067D5A0
 * Callers:
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140776A40 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpGetEffectiveCellType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 PrevElement; // rax
  int v6; // r10d
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( a2 && *(_QWORD *)(a1 + 240) )
  {
    v8 = 0LL;
    v4 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v4, &v8, a3, v3);
      if ( !PrevElement )
        break;
      if ( *(_DWORD *)(PrevElement + 68) == v6 )
        return *(unsigned int *)(PrevElement + 72);
    }
  }
  return *(_DWORD *)(v3 + 40) >> 31;
}
