/*
 * XREFs of ?SetCallbackId@CNotificationResourceMarshaler@DirectComposition@@MEAAJIPEA_N@Z @ 0x1C00A8420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNotificationResourceMarshaler::SetCallbackId(
        DirectComposition::CNotificationResourceMarshaler *this,
        int a2,
        bool *a3)
{
  *a3 = 0;
  if ( a2 != *((_DWORD *)this + 14) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 14) = a2;
    *a3 = 1;
  }
  return 0LL;
}
