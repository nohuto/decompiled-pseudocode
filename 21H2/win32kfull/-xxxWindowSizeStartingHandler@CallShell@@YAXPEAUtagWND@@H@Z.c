/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0237D20
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020F498 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C01090A8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?Feature_1133322554__private_IsEnabled@@YAHXZ @ 0x1C015AD5C (-Feature_1133322554__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C021ADE4 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     _anonymous_namespace_::GetModifiersStateForShell @ 0x1C02363E0 (_anonymous_namespace_--GetModifiersStateForShell.c)
 */

void __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  int v2; // r14d
  int IsEnabled; // eax
  __int64 v5; // rbx
  unsigned __int16 ModifiersStateForShell; // ax
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // dl
  __int64 v16; // [rsp+20h] [rbp-59h]
  _QWORD v17[12]; // [rsp+50h] [rbp-29h] BYREF

  v2 = (int)a2;
  IsEnabled = Feature_1133322554__private_IsEnabled();
  v5 = *((_QWORD *)this + 2);
  if ( IsEnabled )
  {
    memset(v17, 0, sizeof(v17));
    v17[0] = *(_QWORD *)this;
    LODWORD(v17[1]) = 2;
    HIDWORD(v17[3]) = v2;
    ModifiersStateForShell = anonymous_namespace_::GetModifiersStateForShell(v5);
    v7 = *((_QWORD *)this + 5) + 88LL;
    LODWORD(v17[4]) = ModifiersStateForShell;
    TransformRectBetweenCoordinateSpaces((char *)&v17[1] + 4, v7, *(_QWORD *)(*(_QWORD *)(v5 + 456) + 320LL), this);
    if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)v17) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 672LL);
      if ( v9 )
      {
        v10 = (*(_DWORD *)(v9 + 332) ^ (4 * LODWORD(v17[5]))) & 0xC;
        *(_DWORD *)(v9 + 328) = HIDWORD(v17[4]);
        *(_DWORD *)(v9 + 332) ^= v10;
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_Dq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v8,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v8,
            v16,
            1u,
            0x18u,
            (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids);
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(v5 + 672);
    memset(v17, 0, sizeof(v17));
    v17[0] = *(_QWORD *)this;
    LODWORD(v17[1]) = 2;
    HIDWORD(v17[3]) = v2;
    v12 = anonymous_namespace_::GetModifiersStateForShell(v5);
    v13 = *((_QWORD *)this + 5) + 88LL;
    LODWORD(v17[4]) = v12;
    TransformRectBetweenCoordinateSpaces((char *)&v17[1] + 4, v13, *(_QWORD *)(*(_QWORD *)(v5 + 456) + 320LL), this);
    if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)v17) )
    {
      v14 = (*(_DWORD *)(v11 + 332) ^ (4 * LODWORD(v17[5]))) & 0xC;
      *(_DWORD *)(v11 + 328) = HIDWORD(v17[4]);
      *(_DWORD *)(v11 + 332) ^= v14;
      v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_Dq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          25,
          v16,
          1u,
          0x19u,
          (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids);
    }
  }
}
