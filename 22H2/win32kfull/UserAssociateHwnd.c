/*
 * XREFs of UserAssociateHwnd @ 0x1C01BDD30
 * Callers:
 *     EngCreateWnd @ 0x1C0287AF0 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C0287F80 (EngDeleteWnd.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5u) )
      {
        ++*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
        return 1;
      }
    }
    else if ( InternalRemoveProp(v4, (unsigned __int16)atomWndObj, 1u) )
    {
      --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
      return 1;
    }
  }
  return v3;
}
