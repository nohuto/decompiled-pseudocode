/*
 * XREFs of MiRemoveEnclavePagesFromMirror @ 0x140AAA4B8
 * Callers:
 *     MiMirrorBlackPhase @ 0x1406247B4 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x140624E58 (MiMirrorOmitPagesFromCopy.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromMirror(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  result = (_QWORD *)qword_140C69508;
  v3 = 0LL;
  while ( result )
  {
    v3 = result;
    result = (_QWORD *)*result;
  }
  while ( v3 )
  {
    MiMirrorOmitPagesFromCopy(a1, v3[3], v3[4]);
    result = (_QWORD *)v3[1];
    v4 = v3;
    if ( result )
    {
      v5 = (_QWORD *)*result;
      v3 = (_QWORD *)v3[1];
      if ( *result )
      {
        do
        {
          result = (_QWORD *)*v5;
          v3 = v5;
          v5 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == v4 )
          break;
        v4 = v3;
      }
    }
  }
  return result;
}
