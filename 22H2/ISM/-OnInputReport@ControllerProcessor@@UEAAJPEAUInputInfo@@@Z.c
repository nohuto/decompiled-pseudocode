/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180121690
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x180047A7C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ.c)
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x180120D70 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801211A0 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801211D0 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x180121F7C (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x180122478 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x180123DC8 (-UpdatePointerTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136950 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int updated; // eax
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v18; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    NonPointerProcessor::OnInputReport(this, a2);
    v4 = *(_OWORD *)((char *)this + 152);
    v5 = *(_OWORD *)((char *)this + 168);
    v18 = 0;
    *(_OWORD *)((char *)this + 216) = v4;
    v6 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 232) = v5;
    v7 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 248) = v6;
    *(_OWORD *)((char *)this + 264) = v7;
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 2);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 4);
    *((_DWORD *)this + 44) = *((_DWORD *)a2 + 11);
    *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 3);
    *(_QWORD *)((char *)this + 196) = *((_QWORD *)a2 + 8);
    *((_DWORD *)this + 51) = *((_DWORD *)a2 + 18);
    *((_DWORD *)this + 52) = *((_DWORD *)a2 + 19);
    *((_BYTE *)this + 212) = *((_BYTE *)a2 + 80);
    v9 = ControllerProcessor::HandleTaskSwitcherChordedKey(this, &v18, v8);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        641LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    if ( !v18 )
    {
      if ( *((_DWORD *)this + 70) )
      {
        v10 = ControllerProcessor::SendGameControllerAsVirtualKeys(this);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            651LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
      }
      else
      {
        v11 = ControllerProcessor::SendGameControllerAsVirtualKeysForNavigation(this);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            660LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v11);
          __debugbreak();
        }
        v12 = ControllerProcessor::BuildAndSendMouseInputInfo(this);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1185LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        if ( *((_DWORD *)this + 82) )
        {
          updated = ControllerProcessor::UpdatePointerTimer(this);
          if ( updated < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              669LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)updated);
            __debugbreak();
          }
        }
      }
    }
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v14 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5928), a2);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        680LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  else if ( *(char *)a2 < 0 )
  {
    v15 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 1248), a2);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        688LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
  }
  return 0LL;
}
