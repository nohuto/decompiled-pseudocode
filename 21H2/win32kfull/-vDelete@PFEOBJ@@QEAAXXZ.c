/*
 * XREFs of ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C000CF64
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C000CDEC (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C02C1500 (-vDeletePFE@@YAXPEAVPFE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PFEOBJ::vDelete(PFEOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  void (__fastcall *v5)(_QWORD, _QWORD); // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, _QWORD); // rax
  __int64 v11; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(**(_QWORD **)this + 88LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 44LL) == 2
    && (v11 = *(_QWORD *)(v1 + 16)) != 0
    && (*(_DWORD *)(v11 + 4) & 0x10) != 0 )
  {
    Win32FreePool(v11);
  }
  else
  {
    v4 = *(_QWORD *)(v1 + 16);
    if ( v4 )
    {
      v10 = *(void (__fastcall **)(__int64, _QWORD))(v3 + 3000);
      if ( v10 )
        v10(v4, *(_QWORD *)(v1 + 24));
    }
  }
  v5 = *(void (__fastcall **)(_QWORD, _QWORD))(v3 + 3000);
  if ( v5 )
  {
    v5(*(_QWORD *)(*(_QWORD *)this + 32LL), *(_QWORD *)(*(_QWORD *)this + 40LL));
    v6 = *(void **)(*(_QWORD *)this + 48LL);
    if ( v6 != &gkpNothing )
      (*(void (__fastcall **)(void *, _QWORD))(v3 + 3000))(v6, *(_QWORD *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(*(_QWORD *)this + 72LL);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
    v7 = *(_QWORD *)this;
  }
  v9 = *(_QWORD *)(v7 + 112);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_QWORD *)this = 0LL;
}
