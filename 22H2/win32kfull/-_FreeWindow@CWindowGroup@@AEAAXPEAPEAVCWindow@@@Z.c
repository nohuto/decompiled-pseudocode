/*
 * XREFs of ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C024067C
 * Callers:
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C0240254 (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C0240708 (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

void __fastcall CWindowGroup::_FreeWindow(CWindowGroup *this, struct CWindow **a2)
{
  void *v2; // rdi
  __int64 v4; // rax

  v2 = *a2;
  v4 = HMValidateHandleNoSecure(*((_QWORD *)*a2 + 2), 1);
  if ( v4 )
    *(_DWORD *)(v4 + 308) = 0;
  Win32FreePool(v2);
  *a2 = 0LL;
}
