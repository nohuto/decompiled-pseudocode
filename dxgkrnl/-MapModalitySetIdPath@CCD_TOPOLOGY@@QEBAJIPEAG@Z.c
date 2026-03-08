/*
 * XREFs of ?MapModalitySetIdPath@CCD_TOPOLOGY@@QEBAJIPEAG@Z @ 0x1C03B7CAC
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::MapModalitySetIdPath(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v4; // rax
  unsigned __int16 v5; // r8
  __int64 v6; // r8

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
    return 3221225473LL;
  v4 = *((_QWORD *)this + 8);
  v5 = v4 ? *(_WORD *)(v4 + 20) : 0;
  if ( a2 >= v5 )
    return 3221225473LL;
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    LOWORD(a2) = *(_WORD *)(v6 + 2LL * a2);
  *a3 = a2;
  return 0LL;
}
