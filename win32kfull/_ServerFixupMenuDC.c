__int64 __fastcall ServerFixupMenuDC(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  const struct tagWND *v10; // rax
  const struct tagWND *v11; // rbx
  __int64 *DPIMETRICS; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD **v15; // rax
  bool v16; // zf
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v18, 0LL);
    v19 = 0LL;
    v10 = WindowFromDC(a1);
    v11 = v10;
    if ( v10 )
    {
      DCEx = _GetDCEx(v10, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      DPIMETRICS = (__int64 *)GetDPIMETRICS(v11);
      GreSelectFontInternal(DCEx, *DPIMETRICS, 1);
      v13 = ValidateHmenu(a2);
      v19 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v18, v13);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v18) )
      {
        GreGetTextAlign((HDC)a1);
        if ( a4 && *(_QWORD *)(*(_QWORD *)v18[0] + 88LL) )
        {
          v14 = v19;
          if ( !v19 )
            v14 = *(_QWORD *)v18[0];
          v15 = (_DWORD **)MNGetpItemFromIndex(v14, a3);
          if ( !v15 )
            goto LABEL_15;
          v16 = (**v15 & 0x2000) == 0;
          goto LABEL_13;
        }
        if ( *(_QWORD *)(*(_QWORD *)v18[0] + 88LL) )
        {
          v16 = (***(_DWORD ***)(*(_QWORD *)v18[0] + 88LL) & 0x2000) == 0;
LABEL_13:
          if ( !v16 )
            GreSetTextAlign((HDC)a1);
        }
      }
    }
LABEL_15:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
  }
  return DCEx;
}
