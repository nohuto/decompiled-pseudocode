/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0089E68
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C0088F60 (xxxLW_LoadFonts.c)
 *     ClientLoadLocalT1Fonts @ 0x1C0089D50 (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x1C0089DDC (ClientDeliverUserApc.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C0118748 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     ClientNoMemoryPopup @ 0x1C0205D40 (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1C02139E4 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    return *(unsigned int *)(CurrentThreadWin32Thread + 48);
  return result;
}
