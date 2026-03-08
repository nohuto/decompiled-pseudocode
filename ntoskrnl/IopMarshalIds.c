/*
 * XREFs of IopMarshalIds @ 0x140942350
 * Callers:
 *     IopTrackLink @ 0x140795688 (IopTrackLink.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall IopMarshalIds(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 4);
  *(_OWORD *)(a1 + 32) = *a3;
  memmove((void *)(a1 + 48), (const void *)(a4 + 12), *(unsigned int *)(a4 + 8));
  result = (unsigned int)(*(_DWORD *)(a4 + 8) + 36);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
