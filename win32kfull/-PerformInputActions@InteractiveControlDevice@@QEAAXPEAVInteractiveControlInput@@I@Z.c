void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _WORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+34h] [rbp-2Ch]
  __int64 v19; // [rsp+38h] [rbp-28h]
  _WORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch]
  __int64 v22; // [rsp+48h] [rbp-18h]

  if ( (a3 & 0x240) != 0 )
    CInputGlobals::UpdateInputGlobals(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      4LL);
  InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( (a3 & 0x40) != 0 )
  {
    v17[0] = *((_WORD *)this + 196);
    v17[1] = 0;
    v18 = 0;
    v19 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v17);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 15)
    && *((_DWORD *)InteractiveControlManager::Instance(v7) + 21)
    && !*((_DWORD *)this + 16) )
  {
    v20[0] = *((_WORD *)this + 197);
    v20[1] = 0;
    v21 = 0;
    v22 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v20);
  }
  if ( *((_QWORD *)this + 43) != -1LL )
  {
    if ( (unsigned int)GetUserHandedness(v7, v6, v8, v9) != *((_DWORD *)this + 84) )
    {
      InteractiveControlDevice::DestroyDeadzone(this);
      InteractiveControlDevice::CreateDeadzone(this, v10, v11, v12);
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x1000) != 0 )
    {
      v13 = (_QWORD *)((char *)this + 240);
      v14 = *((_QWORD *)this + 30);
      if ( v14 )
      {
        v15 = *((_QWORD *)this + 43);
        if ( v15 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v14 + 72, v15, *((_QWORD *)a2 + 8));
      }
      if ( (a3 & 0x400) != 0 )
      {
LABEL_21:
        if ( *v13 )
        {
          v16 = *((_QWORD *)this + 43);
          if ( v16 != -1 )
            RIMActivatePointerDeviceDeadzone(*v13 + 72LL, v16, (*((_DWORD *)a2 + 18) >> 1) & 1);
        }
        return;
      }
    }
    else
    {
      v13 = (_QWORD *)((char *)this + 240);
    }
    if ( (a3 & 0x800) == 0 )
      return;
    goto LABEL_21;
  }
}
