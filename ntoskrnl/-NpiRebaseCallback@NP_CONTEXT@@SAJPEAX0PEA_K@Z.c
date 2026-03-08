/*
 * XREFs of ?NpiRebaseCallback@NP_CONTEXT@@SAJPEAX0PEA_K@Z @ 0x1405BC020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NP_CONTEXT::NpiRebaseCallback(void *a1, void *a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v4 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 3) == 1 )
    {
      v5 = v4 & 0xFFFFF003;
      if ( ((v4 >> 2) & 0x3FF) > v3 )
        v5 |= ((_WORD)v4 - 4 * (_WORD)v3) & 0xFFC;
      *(_DWORD *)a3 = v5;
    }
  }
  return 0LL;
}
