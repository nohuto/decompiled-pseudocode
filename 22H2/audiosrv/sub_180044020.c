/*
 * XREFs of sub_180044020 @ 0x180044020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall sub_180044020(char *lpMem, char a2)
{
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax

  DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 48));
  *((_DWORD *)lpMem + 11) = -1073741823;
  v4 = *((_QWORD *)lpMem + 4);
  if ( v4 )
  {
    *((_QWORD *)lpMem + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
