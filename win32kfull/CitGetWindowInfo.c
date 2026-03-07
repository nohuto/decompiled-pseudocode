__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  const struct tagWND *v4; // rdi
  __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r9
  __int16 v8; // r10
  char v9; // al
  const struct tagWND *v10; // rcx
  const struct tagWND *v11; // rcx
  __int16 v12; // r8
  __int16 v13; // dx
  __int16 v14; // dx
  unsigned __int16 v15; // ax
  __int128 *Prop; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = (const struct tagWND *)result;
  if ( result )
  {
    v5 = 32;
    v17 = *(_OWORD *)(*(_QWORD *)(result + 40) + 88LL);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 31LL) & 0x20) != 0 )
    {
      Prop = (__int128 *)GetProp(result, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
      if ( Prop )
        v17 = *Prop;
    }
    LogicalToPhysicalDPIRect(&v17, &v17, *(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL), 0LL);
    *a2 = WORD4(v17) - v17;
    a2[1] = WORD6(v17) - WORD2(v17);
    v6 = MonitorFromRect((__int64)&v17, 1u, 0x12u);
    if ( v6 )
      CitGetMonitorInfo(v6, a2);
    v7 = *((_QWORD *)v4 + 5);
    v8 = 2;
    v9 = *(_BYTE *)(v7 + 31);
    if ( (v9 & 0x20) != 0 )
    {
      v12 = 1;
    }
    else if ( (v9 & 1) != 0 )
    {
      v12 = 2;
    }
    else if ( IsVerticallyMaximized(v4) )
    {
      v12 = 5;
    }
    else if ( IsLeftSemiMaximized(v10) )
    {
      v12 = 3;
    }
    else if ( IsRightSemiMaximized(v11) )
    {
      v12 = 4;
    }
    v13 = 0;
    if ( (*(_DWORD *)(v7 + 288) & 0xF) == 1 )
    {
      v13 = 1;
    }
    else if ( (*(_DWORD *)(v7 + 288) & 0xF) == 2 )
    {
      v13 = v8;
    }
    v14 = v12 | (8 * v13);
    a2[4] = v14;
    v15 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 424LL) + 284LL);
    if ( v15 > 0x60u )
    {
      if ( v15 > 0x78u )
      {
        if ( v15 > 0x90u )
        {
          if ( v15 > 0xA8u )
          {
            v5 = 192;
            if ( v15 > 0xC0u )
            {
              if ( v15 > 0xF0u )
              {
                if ( v15 > 0x120u )
                  v5 = 224;
              }
              else
              {
                v5 = 160;
              }
            }
            else
            {
              v5 = 128;
            }
          }
          else
          {
            v5 = 96;
          }
        }
        else
        {
          v5 = 64;
        }
      }
    }
    else
    {
      v5 = 0;
    }
    a2[4] = v5 | v14;
    result = GetProp((__int64)v4, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1u);
    if ( result )
    {
      if ( (*(_DWORD *)result & 0x2000) != 0 )
      {
        result = 256LL;
        a2[4] |= 0x100u;
      }
    }
  }
  return result;
}
