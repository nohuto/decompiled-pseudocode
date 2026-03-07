__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  CSwapChainProp *v8; // rax
  CSwapChainProp *v9; // rsi
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(1LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 != 669 )
    {
      v11 = 0LL;
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, &v11) )
          *(_DWORD *)(v11 + 32) = 1;
      }
      else
      {
        v8 = (CSwapChainProp *)InternalRemoveProp(v5, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1u);
        v9 = v8;
        if ( v8 )
        {
          *((_QWORD *)v8 + 2) = 0LL;
          CSwapChainProp::ClearCompositionSurfaceObj(v8);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v7) )
            CSwapChainProp::NotifyDwm(v9, v7);
          (**(void (__fastcall ***)(CSwapChainProp *))v9)(v9);
          RemoveVisRgnTracker((__int64)v7, 2);
        }
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
