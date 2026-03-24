/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00125AC
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0012198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     DxLddmFindProcessEntry @ 0x1C0012600 (DxLddmFindProcessEntry.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  _QWORD *ProcessEntry; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  void (__fastcall *v10)(_QWORD, char *); // rax
  int v11; // eax
  unsigned int v12; // eax

  ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(a1 + 656);
  v6 = ProcessEntry;
  if ( ProcessEntry )
  {
    v7 = *ProcessEntry;
    if ( *(_QWORD **)(v7 + 8) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *((_DWORD *)v6 + 5);
    if ( v9 )
    {
      a1[660] -= v9;
      v10 = (void (__fastcall *)(_QWORD, char *))*((_QWORD *)a1 + 331);
      if ( v10 )
        v10(*((_QWORD *)a1 + 225), (char *)v6 + 28);
      if ( qword_1C0255040 )
        v11 = qword_1C0255040();
      else
        v11 = -1073741637;
      if ( v11 >= 0 && qword_1C0255048 )
        qword_1C0255048(a1, (char *)v6 + 28, 1LL);
    }
    if ( *a3 + *((_DWORD *)v6 + 6) < *a3 )
      v12 = -1;
    else
      v12 = *a3 + *((_DWORD *)v6 + 6);
    *a3 = v12;
    Win32FreePool(v6);
  }
}
