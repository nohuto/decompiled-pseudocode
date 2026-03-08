/*
 * XREFs of MarkNativeObjectsDefunct @ 0x1C004A094
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0049C4C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C004C42C (NotifyObjectDestruction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkNativeObjectsDefunct(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 *v4; // rdx
  __int64 *i; // rcx
  __int64 j; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  if ( a1 )
  {
    v3 = *(_WORD *)(a1 + 66);
    if ( v3 == 6 || (unsigned __int16)(v3 - 11) <= 2u )
    {
      v4 = (__int64 *)(a1 + 24);
      for ( i = *(__int64 **)(a1 + 24); v4 != i; i = (__int64 *)*i )
      {
        if ( i[6] == gpNativeNameSpaceOwner )
          *((_WORD *)i + 32) |= 4u;
      }
    }
  }
  if ( a2 )
  {
    for ( j = *(_QWORD *)(a2 + 24); j; j = *(_QWORD *)(j + 56) )
    {
      if ( (*(_BYTE *)(j + 64) & 4) != 0 )
      {
        v7 = *(_QWORD *)(j + 136);
        if ( v7 )
        {
          *(_WORD *)(v7 + 64) |= 4u;
          *(_QWORD *)(j + 136) = 0LL;
          *(_WORD *)(j + 64) &= ~0x400u;
        }
      }
    }
  }
  result = gpNativeNameSpaceOwner;
  v9 = *(_QWORD *)(gpNativeNameSpaceOwner + 24);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 56);
      v11 = v9;
      while ( (*(_BYTE *)(v11 + 64) & 4) == 0 )
      {
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_22;
      }
      *(_WORD *)(v9 + 64) |= 4u;
LABEL_22:
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
