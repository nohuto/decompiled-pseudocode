/*
 * XREFs of HUBDSM_CreatingUCXDevice30 @ 0x1C0020A60
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CreateDeviceInUCX @ 0x1C00271C8 (HUBUCX_CreateDeviceInUCX.c)
 */

__int64 __fastcall HUBDSM_CreatingUCXDevice30(__int64 a1)
{
  return HUBUCX_CreateDeviceInUCX(*(_QWORD *)(a1 + 960));
}
