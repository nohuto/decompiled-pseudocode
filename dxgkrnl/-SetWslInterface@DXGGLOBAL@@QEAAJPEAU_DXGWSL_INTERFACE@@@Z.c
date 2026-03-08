/*
 * XREFs of ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1C0310B84
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01D6220 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::SetWslInterface(DXGGLOBAL *this, struct _DXGWSL_INTERFACE *a2)
{
  _QWORD *v4; // rax

  if ( *((_QWORD *)this + 4) )
    goto LABEL_4;
  v4 = (_QWORD *)operator new[](0x20uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_QWORD *)this + 4) = v4;
LABEL_4:
    g_WslSubsystem = *((_QWORD *)a2 + 2);
    qword_1C013BAD0 = *((_QWORD *)a2 + 4);
    qword_1C013BAD8 = *((_QWORD *)a2 + 5);
    qword_1C013BAE0 = *((_QWORD *)a2 + 6);
    qword_1C013BAE8 = *((_QWORD *)a2 + 7);
    qword_1C013BAF0 = *((_QWORD *)a2 + 8);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 9);
    return 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  WdLogSingleEntry1(6LL, 2186LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocated WSL shared NT handle table",
    2186LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
