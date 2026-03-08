/*
 * XREFs of ?OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003A600
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::OnChanged(CCachedVisualImage *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)a1 + 1776) )
  {
    CCachedVisualImage::MarkAllTargetsDirty(a1);
    return 1LL;
  }
  return result;
}
