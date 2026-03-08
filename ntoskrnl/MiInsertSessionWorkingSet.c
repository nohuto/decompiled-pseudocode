/*
 * XREFs of MiInsertSessionWorkingSet @ 0x1403023FC
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x1402A5F58 (MiAllowWorkingSetExpansion.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiInsertSessionWorkingSet(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rax
  _QWORD *v4; // rdx
  char v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rcx

  v1 = (_QWORD *)qword_140C69588;
  v2 = (_QWORD *)(a1 + 120);
  if ( *(__int64 **)qword_140C69588 != &qword_140C69580 )
    __fastfail(3u);
  *v2 = &qword_140C69580;
  *(_QWORD *)(a1 + 128) = v1;
  *v1 = v2;
  v4 = (_QWORD *)qword_140C65670;
  qword_140C69588 = a1 + 120;
  v5 = 0;
  v6 = *(unsigned int *)(a1 + 8);
  if ( qword_140C65670 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v6 < *((_DWORD *)v4 - 32) )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  LOBYTE(v6) = v5;
  return RtlAvlInsertNodeEx(&qword_140C65670, v4, v6, a1 + 136);
}
