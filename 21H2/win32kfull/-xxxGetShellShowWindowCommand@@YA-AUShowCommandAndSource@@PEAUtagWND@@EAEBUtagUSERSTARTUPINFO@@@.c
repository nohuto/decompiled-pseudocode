/*
 * XREFs of ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0069E3C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1C009BAB4 (-ComputeShowCommandSource@@YA-AW4ShowCommandSource@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1C0109014 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z.c)
 */

__int64 __fastcall xxxGetShellShowWindowCommand(CallShell *a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v3; // r15d
  char v4; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  int v10; // edx
  int v11; // r8d
  enum SHELL_SPECIFIED_SHOW_COMMAND *v12; // r9
  int v13; // r14d
  int v14; // esi
  char v15; // bp
  char v16; // al
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v3 = a2;
  v4 = 1;
  if ( ShellWindowManagement::WindowSubjectToBehavior(a1, (const struct tagWND *)1, a3) )
  {
    if ( (*(_DWORD *)(a3 + 20) & 0x20000) != 0 )
    {
      v15 = *(_BYTE *)(a3 + 24);
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qd(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          22,
          21,
          (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
          (char)a1,
          *(_WORD *)(a3 + 24));
      if ( ((v15 - 1) & 0xFD) == 0 )
      {
        LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v7,
            v8,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            22,
            22,
            (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
            v15);
        }
        goto LABEL_60;
      }
    }
    v13 = ComputeShowCommandSource(v3, v7, v8, &WPP_GLOBAL_Control);
    if ( v13 == 4 )
    {
      if ( (*(_DWORD *)(a3 + 20) & 0x20000) != 0 )
      {
        v15 = *(_BYTE *)(a3 + 24);
        v12 = (enum SHELL_SPECIFIED_SHOW_COMMAND *)&WPP_GLOBAL_Control;
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            22,
            23,
            (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
            (char)a1,
            *(_WORD *)(a3 + 24));
          v12 = (enum SHELL_SPECIFIED_SHOW_COMMAND *)&WPP_GLOBAL_Control;
        }
        if ( ((v15 - 1) & 0xFD) == 0 )
        {
          LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v11,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              22,
              24,
              (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
              v15);
          }
LABEL_60:
          *((_DWORD *)a1 + 80) |= 2u;
          LODWORD(v17) = 1;
          BYTE4(v17) = v15;
          return v17;
        }
      }
      LODWORD(v17) = 0;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (unsigned int)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
          4,
          22,
          25,
          (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids);
      }
      if ( !CallShell::xxxShowWindowPolicyHandler(a1, (struct tagWND *)v3, (unsigned int)&v17, v12) )
      {
        v13 = 0;
LABEL_37:
        LODWORD(v17) = v13;
        goto LABEL_3;
      }
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v14 = v17;
      v12 = (enum SHELL_SPECIFIED_SHOW_COMMAND *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          22,
          26,
          (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
          v17);
        v12 = (enum SHELL_SPECIFIED_SHOW_COMMAND *)&WPP_RECORDER_INITIALIZED;
      }
      if ( (_WORD)v14 )
      {
        if ( (unsigned __int16)v14 == 1 )
        {
          LOBYTE(v3) = -1;
        }
        else if ( (unsigned __int16)v14 == 2 )
        {
          v16 = 17;
          if ( (_BYTE)v3 != 8 )
            v16 = 3;
          LOBYTE(v3) = v16;
        }
        else
        {
          v13 = 0;
          v14 &= ~0x10000u;
        }
      }
      if ( (v14 & 0x10000) != 0 )
      {
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (unsigned int)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
            4,
            22,
            27,
            (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
            (char)a1);
        }
        *((_DWORD *)a1 + 80) |= 4u;
      }
      else
      {
        *((_DWORD *)a1 + 80) &= ~4u;
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            4,
            22,
            28,
            (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
            (char)a1);
        }
      }
    }
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v4 = 0;
      }
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = v4;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (_DWORD)v12,
          4,
          22,
          29,
          (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
          (char)a1);
      }
      *((_DWORD *)a1 + 80) |= 2u;
    }
    goto LABEL_37;
  }
  LODWORD(v17) = 0;
LABEL_3:
  BYTE4(v17) = v3;
  return v17;
}
