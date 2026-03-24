/*
 * XREFs of MapClientNeuterToClientPfn @ 0x1C00BFE0C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x1C00BC568 (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x1C00FC29C (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientNeuterToClientPfn(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  if ( !a2 )
    v4 = *(_QWORD *)(v3 + 32);
  v5 = *(unsigned __int16 *)(v3 + 4);
  if ( (unsigned __int16)(v5 - 673) > 9u )
    return v4;
  if ( !a3 )
  {
    if ( *(_QWORD *)(gpsi + 8 * v5 - 4936) == v4 )
      return *(_QWORD *)(gpsi + 8 * v5 - 4744);
    return v4;
  }
  if ( *(_QWORD *)(gpsi + 8 * v5 - 4744) != v4 )
    return v4;
  return *(_QWORD *)(gpsi + 8 * v5 - 4936);
}
