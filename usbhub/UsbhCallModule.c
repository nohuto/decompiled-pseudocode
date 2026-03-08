/*
 * XREFs of UsbhCallModule @ 0x1C0042708
 * Callers:
 *     UsbhModuleDispatch @ 0x1C0043D00 (UsbhModuleDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhCallModule(__int64 a1, __int64 a2, __int64 a3, _LIST_ENTRY *a4, int a5, __int64 a6, __int64 a7)
{
  unsigned int v7; // ebx
  void (__fastcall *v8)(_LIST_ENTRY *, __int64); // rax
  unsigned int (__fastcall *v9)(_LIST_ENTRY *, __int64); // rax
  void (__fastcall *v10)(_LIST_ENTRY *); // rax
  _LIST_ENTRY *Blink; // rcx

  v7 = 0;
  if ( !a2 )
    return v7;
  switch ( a5 )
  {
    case 0:
      v8 = *(void (__fastcall **)(_LIST_ENTRY *, __int64))a2;
LABEL_21:
      if ( v8 )
        v8(a4, a7);
      return v7;
    case 1:
      v9 = *(unsigned int (__fastcall **)(_LIST_ENTRY *, __int64))(a2 + 8);
LABEL_17:
      if ( !v9 )
        return v7;
      a6 = a7;
      Blink = a4;
      return v9(Blink, a6);
    case 2:
      v8 = *(void (__fastcall **)(_LIST_ENTRY *, __int64))(a2 + 16);
      goto LABEL_21;
    case 3:
      v9 = *(unsigned int (__fastcall **)(_LIST_ENTRY *, __int64))(a2 + 24);
      if ( !v9 )
        return v7;
      Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
      return v9(Blink, a6);
  }
  if ( a5 != 4 )
  {
    if ( a5 != 5 )
    {
      if ( a5 != 6 )
        return v7;
      v8 = *(void (__fastcall **)(_LIST_ENTRY *, __int64))(a2 + 48);
      goto LABEL_21;
    }
    v9 = *(unsigned int (__fastcall **)(_LIST_ENTRY *, __int64))(a2 + 40);
    goto LABEL_17;
  }
  v10 = *(void (__fastcall **)(_LIST_ENTRY *))(a2 + 32);
  if ( v10 )
    v10(WPP_MAIN_CB.Queue.ListEntry.Blink);
  return v7;
}
