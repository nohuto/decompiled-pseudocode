/*
 * XREFs of ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C01E3BE8
 * Callers:
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00F30E4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionIsAppForeground @ 0x1C023F580 (ApiSetEditionIsAppForeground.c)
 */

bool __fastcall CInputDest::ShouldSkipForegroundActivation(CInputDest *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 26);
  result = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 2) != 0 && (unsigned int)ApiSetEditionIsAppForeground(*((_QWORD *)this + 10)) != 0;
  return result;
}
