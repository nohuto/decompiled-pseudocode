/*
 * XREFs of FsRtlpDoBoost @ 0x1402ECD68
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     KeSetPriorityBoost @ 0x14035112C (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  bool v5; // bl
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 result; // rax
  unsigned __int8 v12; // cl

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1376) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(unsigned __int8 *)(a2 + 195);
  v10 = v9;
  if ( (unsigned __int8)v9 >= 0xFu )
    v10 = 15;
  result = (unsigned __int8)*a3;
  if ( (unsigned int)result <= v10 )
  {
    result = 15LL;
    if ( (unsigned __int8)v9 < 0xFu )
      result = v9;
  }
  *a3 = result;
  v12 = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)result > v12 )
  {
    if ( (unsigned __int8)result > v12 )
      result = KeSetPriorityBoost(a1, (unsigned __int8)result);
    if ( v5 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      return IoBoostThreadIoPriority(a1, (*(_DWORD *)(a2 + 1376) >> 9) & 7, 0LL);
    }
  }
  return result;
}
