/*
 * XREFs of _DSA_MaybeShrink @ 0x18014FAF0
 * Callers:
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x1804E799C (--$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z.c)
 */

__int64 __fastcall DSA_MaybeShrink(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned int ProcessHeap; // eax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)a1 - 1) / *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 24)
     + *(_DWORD *)a1
     - 1
     - (unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)a1 - 1) % *(_DWORD *)(a1 + 24);
  if ( (v3 & 0x80000000) == 0 && v3 < *(_DWORD *)(a1 + 16) )
  {
    ProcessHeap = (unsigned int)GetProcessHeap();
    result = CCv6s_HeapReallocArray<void>(
               ProcessHeap,
               (unsigned int)&v5,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 20),
               v3,
               (__int64)&v5);
    if ( (int)result >= 0 )
    {
      result = v5;
      *(_QWORD *)(a1 + 8) = v5;
    }
    *(_DWORD *)(a1 + 16) = v3;
  }
  return result;
}
