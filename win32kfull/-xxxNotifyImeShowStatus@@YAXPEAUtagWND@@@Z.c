/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01B94A8
 * Callers:
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C00F3FC4 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?xxxBroadcastImeShowStatusChange@@YAHPEAUtagWND@@H@Z @ 0x1C01B8C94 (-xxxBroadcastImeShowStatusChange@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00A0B80 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00C62B0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01B9880 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  ULONG64 *v3; // rsi
  PRKPROCESS **v4; // rdi
  ULONG64 v5; // rsi
  ULONG64 v6; // rax
  BOOL v7; // r15d
  struct tagWND *v8; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v3 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v3 )
    {
      v4 = (PRKPROCESS **)*((_QWORD *)a1 + 2);
      if ( v4 != (PRKPROCESS **)gptiCurrent )
        KeAttachProcess(*v4[53]);
      v5 = *v3;
      v6 = v5;
      if ( v5 >= MmUserProbeAddress )
        v6 = MmUserProbeAddress;
      v7 = (*(_DWORD *)(v6 + 44) & 0x20) != 0 && *(_DWORD *)(SGDGetUserSessionState(MmUserProbeAddress) + 13960);
      v8 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v5 + 16), 1);
      if ( v8 || (v8 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 120LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v5 + 44) ^= (*(_DWORD *)(v5 + 44) ^ v7) & 1;
      }
      if ( v4 != (PRKPROCESS **)gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v4, (struct tagIMEUI *)v5, v8, v7);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
