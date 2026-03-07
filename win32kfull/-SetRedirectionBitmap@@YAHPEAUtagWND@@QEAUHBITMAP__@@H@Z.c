__int64 __fastcall SetRedirectionBitmap(void **a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  HBITMAP *Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi

  v5 = 0;
  Prop = (HBITMAP *)GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (HBITMAP *)v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp(a1, (unsigned __int16)atomLayer, v10, 1LL) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v5;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    if ( *Prop != a2 )
    {
      GreAccNotifyWindow((__int64)*Prop, 0LL);
      GreAccNotifyWindow((__int64)a2, *a1);
      *Prop = a2;
    }
  }
  else if ( a3 )
  {
    v11 = (__int64 *)InternalRemoveProp((__int64)a1, (unsigned __int16)atomLayer, 1u);
    v12 = v11;
    if ( v11 )
    {
      v8 = *v11;
      DeleteMaybeSpecialRgn(v11[5]);
      Win32FreePool(v12);
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  else if ( Prop )
  {
    v8 = (__int64)*Prop;
    *Prop = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
