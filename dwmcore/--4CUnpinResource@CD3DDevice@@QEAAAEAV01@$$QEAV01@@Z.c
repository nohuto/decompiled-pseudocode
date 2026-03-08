/*
 * XREFs of ??4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x180289018
 * Callers:
 *     ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x180288CBC (--$move@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator@PEAVCUnp.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18028C058 (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall CD3DDevice::CUnpinResource::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v5 = *a1;
    *a1 = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = a1[1];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 184LL))(v6);
    v7 = a2[1];
    a2[1] = 0LL;
    v8 = a1[1];
    a1[1] = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    a1[2] = a2[2];
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 7);
  }
  return a1;
}
