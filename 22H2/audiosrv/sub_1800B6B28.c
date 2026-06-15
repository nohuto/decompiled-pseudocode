/*
 * XREFs of sub_1800B6B28 @ 0x1800B6B28
 * Callers:
 *     sub_1800B6B80 @ 0x1800B6B80 (sub_1800B6B80.c)
 *     sub_1800B6BC0 @ 0x1800B6BC0 (sub_1800B6BC0.c)
 *     sub_180133460 @ 0x180133460 (sub_180133460.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall sub_1800B6B28(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rax
  __int64 v3; // rcx

  result = off_180149EC8;
  *(_QWORD *)a1 = off_180149EC8;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)v2 = 0;
    return (__int64 (__fastcall **)())EtwEventUnregister(v3);
  }
  return result;
}
