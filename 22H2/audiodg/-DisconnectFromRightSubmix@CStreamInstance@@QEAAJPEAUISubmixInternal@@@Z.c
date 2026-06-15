/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400016E8
 * Callers:
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400049F0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140018C80 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     wil::details::lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___::_lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___ @ 0x14004CEF0 (wil--details--lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___--_lambda_call__lambda_417a.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004CF30 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400017E0 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(CStreamInstance *this, struct ISubmixInternal *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CPipeInstance *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  char *v13; // [rsp+38h] [rbp+10h]

  v4 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(_QWORD *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      v10);
    return v5;
  }
  else
  {
    *((_BYTE *)this + 17) = 0;
    v6 = *(CPipeInstance **)this;
    v7 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 64LL))(a2);
    CPipeInstance::OnDisconnectedFromRightSubmix(v6, v7);
    v12 = 0LL;
    (*(void (__fastcall **)(struct ISubmixInternal *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, &v12);
    v8 = v12;
    if ( v12 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
      v13 = (char *)this + 48;
      if ( *((_QWORD *)this + 11) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        *((_QWORD *)this + 11) = 0LL;
      }
      if ( this != (CStreamInstance *)-48LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
      v8 = v12;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return 0LL;
  }
}
