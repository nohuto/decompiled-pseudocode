/*
 * XREFs of ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1C0361100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C0360E44 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 */

DXGCHANNELENDPOINTPROXY *__fastcall DXGCHANNELENDPOINTPROXY::`vector deleting destructor'(
        DXGCHANNELENDPOINTPROXY *this,
        char a2)
{
  DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
