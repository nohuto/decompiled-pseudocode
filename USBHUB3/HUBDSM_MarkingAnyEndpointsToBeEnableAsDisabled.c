/*
 * XREFs of HUBDSM_MarkingAnyEndpointsToBeEnableAsDisabled @ 0x1C0023CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_MarkingAnyEndpointsToBeEnableAsDisabled(__int64 a1)
{
  _QWORD **v1; // r8
  _QWORD *i; // rax
  __int64 j; // rdx
  _QWORD *v4; // rcx

  v1 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 48LL) + 16LL);
  for ( i = *v1; ; i = (_QWORD *)*i )
  {
    v4 = i - 1;
    if ( v1 == i )
      break;
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 6); j = (unsigned int)(j + 1) )
    {
      if ( LODWORD(v4[9 * j + 6]) == 3 )
        LODWORD(v4[9 * j + 6]) = 6;
    }
  }
  return 4077LL;
}
