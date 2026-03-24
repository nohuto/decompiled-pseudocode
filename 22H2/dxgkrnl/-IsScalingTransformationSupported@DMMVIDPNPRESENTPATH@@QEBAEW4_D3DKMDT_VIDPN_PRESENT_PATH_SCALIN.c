/*
 * XREFs of ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006CC0
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006C14 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011C33C (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011C398 (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  unsigned __int8 IsDriverAspectRatioCenteredMaxSupported; // al
  char v7; // cl
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int8 IsDriverCustomScalingSupported; // al

  v2 = (int)a2;
  switch ( (_DWORD)a2 )
  {
    case 1:
      LOBYTE(v4) = *((_BYTE *)this + 120);
      return v4 & 1;
    case 2:
      v4 = *((_DWORD *)this + 30) >> 1;
      return v4 & 1;
    case 3:
      v4 = *((_DWORD *)this + 30) >> 2;
      return v4 & 1;
    case 4:
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      v7 = 0;
      if ( !IsDriverAspectRatioCenteredMaxSupported )
        return v7;
      v8 = *((_DWORD *)this + 30) >> 3;
      return v8 & 1;
    case 5:
      IsDriverCustomScalingSupported = DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(this);
      v7 = 0;
      if ( !IsDriverCustomScalingSupported )
        return v7;
      v8 = *((_DWORD *)this + 30) >> 4;
      return v8 & 1;
    case 0xFF:
      return 1;
  }
  v9 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v9 + 24) = v2;
  WdLogEvent5_WdError(v9);
  return 0;
}
