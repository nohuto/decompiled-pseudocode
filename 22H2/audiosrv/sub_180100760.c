/*
 * XREFs of sub_180100760 @ 0x180100760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1801004FC @ 0x1801004FC (sub_1801004FC.c)
 */

void __fastcall sub_180100760(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v3; // rdi
  struct _TP_WORK *v5; // rcx
  __int64 v6; // rcx

  v3 = Context[1];
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x2Cu, (__int64)&unk_1801726D0);
  }
  sub_1801004FC(v3, (__int64)Context);
  v5 = (struct _TP_WORK *)Context[2];
  if ( v5 )
    CloseThreadpoolWork(v5);
  v6 = Context[1];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  sub_18006A148(Context);
}
