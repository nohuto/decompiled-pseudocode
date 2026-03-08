/*
 * XREFs of ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C01A05AC
 * Callers:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00067DC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A0140 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

void __fastcall ProtectableFromChange::DisallowModifyingAction(
        ProtectableFromChange *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rax

  v4 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
    WdLogSingleEntry0(1LL);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( (_BYTE)v4 == 0xFF )
  {
    *((_WORD *)this + 11) = 0;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
    memset(*((void **)this + 11), 0, 8LL * *((_QWORD *)this + 10));
  }
  else
  {
    *((_WORD *)this + 11) &= ~(1 << v4);
    if ( v4 >= *((_QWORD *)this + 5) )
      WdLogSingleEntry0(1LL);
    *(_BYTE *)(*((_QWORD *)this + 6) + v4) &= 0xF0u;
    if ( v4 >= *((_QWORD *)this + 10) )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v4) = 0LL;
  }
}
