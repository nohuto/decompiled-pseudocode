/*
 * XREFs of ?NpiTreeWalkCallback@NP_CONTEXT@@SAJPEAX0PEA_K@Z @ 0x1405BC070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NP_CONTEXT::NpiTreeWalkCallback(void *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _DWORD *v3; // rax

  if ( (*(_DWORD *)a3 & 3) == 1 )
  {
    v3 = (_DWORD *)a2[7];
    if ( !v3 || (*(_DWORD *)a3 & 0xFFCu) < (*v3 & 0xFFCu) )
      a2[7] = a3;
  }
  return 0LL;
}
