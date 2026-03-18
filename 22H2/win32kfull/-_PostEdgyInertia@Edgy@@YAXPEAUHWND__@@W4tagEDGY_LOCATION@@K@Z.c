/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E889C
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E78EC (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E8960 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall Edgy::_PostEdgyInertia(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  struct tagWND *result; // rax
  __int64 v6; // rcx

  result = (struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v6 = *((_QWORD *)result + 5);
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
      return (struct tagWND *)PostMessage(result, 0x23Du, 0LL, a3 | ((unsigned __int64)a2 << 16));
  }
  return result;
}
