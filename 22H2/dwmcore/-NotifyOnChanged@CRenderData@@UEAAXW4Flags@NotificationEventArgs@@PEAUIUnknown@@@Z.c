/*
 * XREFs of ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800370B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (((_DWORD)a2 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      a2 = 6LL;
      return CResource::NotifyOnChanged(a1, a2, a3);
    }
  }
  else
  {
    a2 = 0LL;
  }
  *(_BYTE *)(a1 + 264) = 1;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
