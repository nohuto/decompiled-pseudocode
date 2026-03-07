__int64 __fastcall WindowMargins::_anonymous_namespace_::GetWindowMargins(const struct tagWND *a1, INT a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  INT WindowDpiLastNotify; // r9d
  int v8; // ecx
  __int64 v10; // rax
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int16 v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( IsTopLevelWindow((__int64)a1) && (unsigned int)CWindowProp::GetProp<WindowMargins::CWindowMarginProp>(v4, &v11) )
  {
    v5 = *((_QWORD *)a1 + 5);
    v6 = *(_DWORD *)(v5 + 288);
    WindowDpiLastNotify = (v6 >> 8) & 0x1FF;
    if ( !WindowDpiLastNotify )
    {
      if ( (*(_BYTE *)(v5 + 233) & 4) == 0 )
        goto LABEL_11;
      if ( a2 )
      {
        WindowDpiLastNotify = a2;
        return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(
                            v11,
                            &v12,
                            a1,
                            WindowDpiLastNotify,
                            0);
      }
      v8 = v6 & 0xF;
      if ( v8 != 3 )
      {
        if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
          return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(
                              v11,
                              &v12,
                              a1,
                              WindowDpiLastNotify,
                              0);
        }
        if ( !v8 )
        {
          v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
          if ( v10 )
          {
            if ( (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
              return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(
                                  v11,
                                  &v12,
                                  a1,
                                  WindowDpiLastNotify,
                                  0);
            }
          }
        }
LABEL_11:
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
    }
    return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v11, &v12, a1, WindowDpiLastNotify, 0);
  }
  return 0LL;
}
