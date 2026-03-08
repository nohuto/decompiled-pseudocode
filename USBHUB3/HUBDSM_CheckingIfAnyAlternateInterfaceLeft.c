/*
 * XREFs of HUBDSM_CheckingIfAnyAlternateInterfaceLeft @ 0x1C0023B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfAnyAlternateInterfaceLeft(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // edx
  _QWORD **v3; // r8
  _QWORD *i; // rax
  _QWORD *v5; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4061;
  v3 = (_QWORD **)(*(_QWORD *)(v1 + 48) + 16LL);
  for ( i = *v3; ; i = (_QWORD *)*i )
  {
    v5 = i - 1;
    if ( v3 == i )
      break;
    if ( (*((_DWORD *)v5 + 7) & 2) != 0 )
    {
      *(_QWORD *)(v1 + 64) = v5;
      return 4089;
    }
  }
  return v2;
}
