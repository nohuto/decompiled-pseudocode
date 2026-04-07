/*
 * XREFs of ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18003C630
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C510 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001930C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A3A0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18003C6F4 (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CImmersiveState::Initialize(CImmersiveState *this, __int64 a2)
{
  struct _LIST_ENTRY *WindowListForDesktop; // rsi
  struct _LIST_ENTRY *i; // rbx

  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 0x18u);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           a2);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    if ( (HIDWORD(i[6].Flink) & 0x40000000) == 0 )
    {
      switch ( LODWORD(i[7].Flink) )
      {
        case 6:
          if ( !CImmersiveState::UpdateInfoIfTaskbar(this, (const struct CWindowData *)i)
            && ((__int64)i[38].Blink & 0xFFF) == 9 )
          {
            if ( (BYTE4(i[38].Flink) & 2) == 0 )
              *((_BYTE *)this + 56) = 1;
            *(struct _LIST_ENTRY *)((char *)this + 72) = i[3];
          }
          break;
        case 0xC:
          if ( !*((_QWORD *)this + 6) )
            *((_QWORD *)this + 6) = i;
          break;
        case 1:
          CImmersiveState::UpdateInfoIfTaskbar(this, (const struct CWindowData *)i);
          break;
      }
    }
  }
  return 0LL;
}
