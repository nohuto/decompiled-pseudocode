/*
 * XREFs of ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C00B74A0
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00B7328 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C02E3490 (-vDeletePFE@@YAXPEAVPFE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PFEOBJ::vDelete(PFEOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  void (__fastcall *v5)(_QWORD, _QWORD); // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void (__fastcall *v9)(__int64, _QWORD); // rax
  _DWORD *v10; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(**(_QWORD **)this + 88LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 44LL) == 2
    && (v10 = *(_DWORD **)(v1 + 16)) != 0LL
    && (v10[1] & 0x10) != 0 )
  {
    Win32FreePool(v10);
  }
  else
  {
    v4 = *(_QWORD *)(v1 + 16);
    if ( v4 )
    {
      v9 = *(void (__fastcall **)(__int64, _QWORD))(v3 + 3000);
      if ( v9 )
        v9(v4, *(_QWORD *)(v1 + 24));
    }
  }
  v5 = *(void (__fastcall **)(_QWORD, _QWORD))(v3 + 3000);
  if ( v5 )
  {
    v5(*(_QWORD *)(*(_QWORD *)this + 32LL), *(_QWORD *)(*(_QWORD *)this + 40LL));
    v6 = *(void **)(*(_QWORD *)this + 48LL);
    if ( v6 != &unk_1C03118DC )
      (*(void (__fastcall **)(void *, _QWORD))(v3 + 3000))(v6, *(_QWORD *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  v7 = *(void **)(*(_QWORD *)this + 72LL);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
  v8 = *(void **)(*(_QWORD *)this + 112LL);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_QWORD *)this = 0LL;
}
