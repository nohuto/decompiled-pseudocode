/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00EF5D4
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00EE740 (xxxLW_LoadFonts.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00EF424 (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x1C00EF4B0 (ClientDeliverUserApc.c)
 *     xxxClientThreadSetup @ 0x1C00EF540 (xxxClientThreadSetup.c)
 *     ClientNoMemoryPopup @ 0x1C0222ACC (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1C022D320 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *Data; // rcx
  __int64 result; // rax

  Data = (unsigned int *)GetData(a1, a2, a3);
  result = 0LL;
  if ( Data )
    return *Data;
  return result;
}
