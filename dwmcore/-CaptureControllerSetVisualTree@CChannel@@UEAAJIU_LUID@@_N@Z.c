/*
 * XREFs of ?CaptureControllerSetVisualTree@CChannel@@UEAAJIU_LUID@@_N@Z @ 0x1801CBC40
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetVisualTree(
        CChannel *this,
        unsigned int a2,
        struct _LUID a3,
        unsigned __int8 a4)
{
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _LUID v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  CChannel::CheckHandle((__int64)this, a2, 19);
  v9[0] = 36;
  v9[1] = a2;
  v10 = a3;
  v11 = a4;
  return CChannel::SendCommand(this, v9, 0x14u);
}
