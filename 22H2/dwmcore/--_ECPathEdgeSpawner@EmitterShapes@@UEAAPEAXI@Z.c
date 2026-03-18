/*
 * XREFs of ??_ECPathEdgeSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x180243F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C9C4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CPathEdgeSpawner *__fastcall EmitterShapes::CPathEdgeSpawner::`vector deleting destructor'(
        EmitterShapes::CPathEdgeSpawner *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
