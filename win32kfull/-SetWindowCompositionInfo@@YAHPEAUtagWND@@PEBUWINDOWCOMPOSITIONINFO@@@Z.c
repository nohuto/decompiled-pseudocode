__int64 __fastcall SetWindowCompositionInfo(struct tagWND *a1, const struct WINDOWCOMPOSITIONINFO *a2)
{
  unsigned int v3; // esi
  _OWORD *Prop; // rax
  _OWORD *v7; // rax
  void *v8; // rdi
  __int64 v9; // rdx

  v3 = 0;
  Prop = (_OWORD *)GetProp(a1, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1LL);
  if ( Prop )
  {
    v3 = 1;
    *Prop = *(_OWORD *)a2;
    Prop[1] = *((_OWORD *)a2 + 1);
    Prop[2] = *((_OWORD *)a2 + 2);
    Prop[3] = *((_OWORD *)a2 + 3);
  }
  else
  {
    v7 = (_OWORD *)Win32AllocPoolZInit(64LL, 1684239189LL);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
      *v7 = *(_OWORD *)a2;
      v7[1] = *((_OWORD *)a2 + 1);
      v7[2] = *((_OWORD *)a2 + 2);
      v7[3] = *((_OWORD *)a2 + 3);
      v3 = InternalSetProp(a1, v9, v7, 1LL);
      if ( !v3 )
        Win32FreePool(v8);
    }
  }
  return v3;
}
