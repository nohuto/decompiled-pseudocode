/*
 * XREFs of ?cTotalCurves@EPATHOBJ@@QEAAKXZ @ 0x1C0181110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::cTotalCurves(EPATHOBJ *this)
{
  unsigned int v1; // edx
  __int64 *i; // rcx
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edx

  v1 = 0;
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
  {
    v3 = *((_DWORD *)i + 4);
    v4 = v1 + 1;
    if ( (v3 & 8) == 0 )
      v4 = v1;
    v5 = *((_DWORD *)i + 5);
    if ( (v3 & 0x10) != 0 )
    {
      v1 = v4 + v5 / 3;
    }
    else
    {
      v1 = v4 + v5;
      if ( (v3 & 1) != 0 )
        --v1;
    }
  }
  return v1;
}
