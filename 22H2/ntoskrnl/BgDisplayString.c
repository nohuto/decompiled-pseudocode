/*
 * XREFs of BgDisplayString @ 0x1409F6570
 * Callers:
 *     BgkDrawText @ 0x1409F63DC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021FA90 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1409F7784 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 1) == 0 || (dword_140C134F0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140C135A0 && qword_140C135B8 )
  {
    v5 = BgpTxtDisplayString(qword_140C135B8, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
