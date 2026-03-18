/*
 * XREFs of ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDAE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01ECE1C (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     FindRimDevByName @ 0x1C01EEA14 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01EEDB8 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardInputPacket(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  unsigned int v5; // ebx
  struct RIMDEV *RimDevByName; // rax

  a2->Buffer = (USHORT *)((char *)&a2->Length + ((unsigned __int64)a2->Buffer & 0xFFFFFFFFFFFFFFFEuLL));
  v5 = 1;
  RIMLockExclusive(a3 + 104);
  if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    v5 = 2;
  }
  else
  {
    RimDevByName = (struct RIMDEV *)FindRimDevByName(a2);
    if ( RimDevByName )
      DeliverKeyboardInputToRim((struct _IVKeyboardInputPacket *)a2, (struct RawInputManagerObject *)a3, RimDevByName);
    else
      v5 = 0;
  }
  CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 104));
  return v5;
}
