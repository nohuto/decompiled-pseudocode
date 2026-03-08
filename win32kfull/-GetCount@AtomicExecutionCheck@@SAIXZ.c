/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00B8314
 * Callers:
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C003E988 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00B81FC (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x1C00B8288 (ClientDeliverUserApc.c)
 *     xxxLW_LoadFonts @ 0x1C00B8670 (xxxLW_LoadFonts.c)
 *     ClientNoMemoryPopup @ 0x1C0208910 (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1C02165AC (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1)
{
  __int64 CurrentThreadWin32Thread; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    return *(unsigned int *)(CurrentThreadWin32Thread + 48);
  return result;
}
