/*
 * XREFs of UserAssociateHwnd @ 0x1C01E318C
 * Callers:
 *     EngCreateWnd @ 0x1C0283EE0 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C02843D0 (EngDeleteWnd.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
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
        ++*((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
        return 1;
      }
    }
    else if ( InternalRemoveProp(v4, (unsigned __int16)atomWndObj, 1u) )
    {
      --*((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
      return 1;
    }
  }
  return v3;
}
