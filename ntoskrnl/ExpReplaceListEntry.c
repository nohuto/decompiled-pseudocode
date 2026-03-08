/*
 * XREFs of ExpReplaceListEntry @ 0x1403C5D60
 * Callers:
 *     ExpRotateFastOwnerEntrySublistHead @ 0x1403C589C (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpReleaseFastResourceShared @ 0x1403C5A70 (ExpReleaseFastResourceShared.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpReplaceListEntry(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 result; // rax

  v2 = (_QWORD *)*a1;
  if ( !*a1 )
  {
    result = 0LL;
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_4;
  }
  if ( v2 != a1 )
  {
    v3 = (_QWORD *)a1[1];
    a2[1] = v3;
    *a2 = v2;
    v2[1] = a2;
    *v3 = a2;
    result = 0LL;
LABEL_4:
    *a1 = 0LL;
    a1[1] = 0LL;
    return result;
  }
  result = 0LL;
  a2[1] = a2;
  *a2 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
