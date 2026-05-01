/*
 * XREFs of ??_E?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180219290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall Microsoft::WRL::SimpleClassFactory<CAppTransitionManager,0>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
