/*
 * XREFs of ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BB9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx

  v4 = 6LL;
  if ( a2 != 1 )
    v4 = a2;
  return CResource::NotifyOnChanged(a1, v4, a3);
}
