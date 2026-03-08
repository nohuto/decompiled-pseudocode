/*
 * XREFs of HalpNumaQueryNodeCapacity @ 0x1403B1370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaQueryNodeCapacity(unsigned __int16 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( (unsigned int)a1 >= *(_DWORD *)(HalpNumaConfig + 56) )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 40) + 4LL * a1);
  return result;
}
