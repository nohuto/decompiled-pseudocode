/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E998C
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E89DC (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E9A50 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 */

unsigned __int64 __fastcall Edgy::_PostEdgyInertia(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rcx

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v6 = *(_QWORD *)(result + 40);
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
      return PostMessage(result, 0x23Du, 0LL, (__int128 *)(a3 | ((unsigned __int64)a2 << 16)));
  }
  return result;
}
