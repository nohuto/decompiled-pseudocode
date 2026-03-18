/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00D54CC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC970 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BCEF0 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     GreAccNotifyWindow @ 0x1C00E110C (GreAccNotifyWindow.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD *Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi

  v5 = 0;
  Prop = (_QWORD *)GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (_QWORD *)v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomLayer, v10, 1u) )
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
    if ( (HBITMAP)*Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
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
    v8 = *Prop;
    *Prop = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
