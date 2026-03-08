/*
 * XREFs of MiMirrorDiscardPageContents @ 0x14064CE84
 * Callers:
 *     MiMirrorBlackPhase @ 0x1406247B4 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140626FE0 (MiIterateOverPartitions.c)
 */

__int64 MiMirrorDiscardPageContents()
{
  _QWORD *v0; // rax
  unsigned __int64 i; // rcx
  _QWORD **v2; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *j; // rax
  _QWORD **v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx

  v0 = (_QWORD *)qword_140C66EF8;
  i = 0LL;
  while ( v0 )
  {
    i = (unsigned __int64)v0;
    v0 = (_QWORD *)*v0;
  }
  while ( i )
  {
    v2 = *(_QWORD ***)(i + 8);
    v3 = i;
    *(_BYTE *)(i + 71) = 1;
    if ( v2 )
    {
      v4 = *v2;
      for ( i = (unsigned __int64)v2; v4; v4 = (_QWORD *)*v4 )
        i = (unsigned __int64)v4;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v3 )
          break;
        v3 = i;
      }
    }
  }
  for ( j = (_QWORD *)qword_140C66EE8; j; j = (_QWORD *)*j )
    i = (unsigned __int64)j;
  while ( i )
  {
    v6 = *(_QWORD ***)(i + 8);
    v7 = i;
    *(_BYTE *)(i + 71) = 1;
    if ( v6 )
    {
      v8 = *v6;
      for ( i = (unsigned __int64)v6; v8; v8 = (_QWORD *)*v8 )
        i = (unsigned __int64)v8;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v7 )
          break;
        v7 = i;
      }
    }
  }
  return MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiFailInProgressZeroing, 0LL);
}
