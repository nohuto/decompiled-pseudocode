/*
 * XREFs of UserAssociateHwnd @ 0x1C01E84FC
 * Callers:
 *     EngCreateWnd @ 0x1C0286D00 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C02871E0 (EngDeleteWnd.c)
 * Callees:
 *     InternalSetProp @ 0x1C0038408 (InternalSetProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = (unsigned __int16)atomWndObj;
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5u) )
      {
        ++LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
        return 1;
      }
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 144);
      if ( atomWndObj == word_1C0339F44 )
        *(_QWORD *)(*(_QWORD *)(v4 + 40) + 312LL) = 0LL;
      if ( RealInternalRemoveProp(v6, v5, 1LL) )
      {
        --LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
        return 1;
      }
    }
  }
  return v3;
}
