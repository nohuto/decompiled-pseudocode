// attributes: thunk
BOOL __stdcall EngModifySurface_0(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  return EngModifySurface(hsurf, hdev, flHooks, flSurface, dhsurf, pvScan0, lDelta, pvReserved);
}
