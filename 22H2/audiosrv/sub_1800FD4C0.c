/*
 * XREFs of sub_1800FD4C0 @ 0x1800FD4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 */

void __fastcall sub_1800FD4C0(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WAIT Wait, __int64 WaitResult)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 0x2Fu, (__int64)&unk_180172650, Context, Context[25]);
  }
  sub_1800FF380(Context[24], Context, Wait, WaitResult);
}
