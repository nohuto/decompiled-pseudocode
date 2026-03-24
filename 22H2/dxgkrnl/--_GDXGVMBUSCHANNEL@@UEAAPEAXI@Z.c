/*
 * XREFs of ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C02B2E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C02B2D84 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 */

void **__fastcall DXGVMBUSCHANNEL::`scalar deleting destructor'(void **this, char a2)
{
  DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
