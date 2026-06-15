/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400083E0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004CC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008030 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140008520 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140008750 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140008990 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14004AE1C (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r15
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  CConnectionInstance *v10; // rsi
  struct IAudioProcessor *v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 19) + 32LL))(
         *((_QWORD *)this + 19),
         &v23);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v4,
      v20);
    return v5;
  }
  v21 = (int)this;
  v6 = 1;
  v7 = *((_QWORD *)this + 9);
  if ( !v7 )
  {
LABEL_9:
    v15 = CPipeInstance::SetModulesManagerOnAPOs(this, a2);
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v15,
        v21);
    }
    else
    {
      v16 = CPipeInstance::ActivateAPOs(this, v23);
      v14 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB61,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v16,
          v21);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 40LL))(
                *((_QWORD *)this + 19),
                v23);
        v14 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB63,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v17,
            v21);
        }
        else
        {
          *((_DWORD *)this + 29) = 1;
          v6 = 0;
          v14 = 0;
        }
      }
    }
    goto LABEL_13;
  }
  while ( 1 )
  {
    v8 = *(_QWORD **)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v9 = (_QWORD *)*v8;
    if ( v9 )
      break;
LABEL_8:
    if ( !v7 )
      goto LABEL_9;
  }
  while ( 1 )
  {
    v10 = (CConnectionInstance *)v9[2];
    v9 = (_QWORD *)*v9;
    v11 = (struct IAudioProcessor *)*((_QWORD *)this + 19);
    v12 = *((_DWORD *)v10 + 4);
    if ( !v12 )
    {
      v13 = CConnectionInstance::AddRenderConnection(v10, v11, v23);
      v14 = v13;
      if ( v13 >= 0 )
        goto LABEL_6;
      v19 = 242LL;
      goto LABEL_21;
    }
    if ( v12 != 1 )
      break;
    v13 = CConnectionInstance::AddCaptureConnection(v10, v11, v23);
    v14 = v13;
    if ( v13 >= 0 )
    {
LABEL_6:
      *((_DWORD *)v10 + 1) = 1;
      goto LABEL_7;
    }
    v19 = 246LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v13,
      v21);
    if ( v14 < 0 )
      goto LABEL_24;
LABEL_7:
    if ( !v9 )
      goto LABEL_8;
  }
  v14 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)0x8000FFFFLL,
    v21);
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB59,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v14,
    v21);
LABEL_13:
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v23);
  return (unsigned int)v14;
}
