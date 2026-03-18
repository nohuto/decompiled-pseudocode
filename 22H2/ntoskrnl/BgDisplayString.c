/*
 * XREFs of BgDisplayString @ 0x140AF21B8
 * Callers:
 *     BgkDrawText @ 0x140AF200C (BgkDrawText.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x140AF37A0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) == 0 || (dword_140C0E4B0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140C0E560 && qword_140C0E578 )
  {
    v5 = BgpTxtDisplayString(qword_140C0E578, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
