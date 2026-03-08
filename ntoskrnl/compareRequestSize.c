/*
 * XREFs of compareRequestSize @ 0x1403F0FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall compareRequestSize(const void *a1, const void *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( v3 <= v2 )
    return (unsigned int)-(v3 < v2);
  else
    return 1LL;
}
