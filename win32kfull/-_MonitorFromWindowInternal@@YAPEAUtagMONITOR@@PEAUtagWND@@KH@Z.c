struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r8d
  __int128 *v11; // rcx
  __int128 *Prop; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo(a1) == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    v11 = Prop;
    if ( Prop )
    {
      if ( !a3 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        return (struct tagMONITOR *)MonitorFromRect((__int64)v11, a2, v10);
      }
      v13 = *Prop;
      v14 = *((_QWORD *)a1 + 5);
      v15 = v13;
      v9 = *(unsigned int *)(v14 + 288);
      goto LABEL_8;
    }
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v8 = *((_QWORD *)a1 + 5);
      if ( !a3 )
      {
        v10 = *(_DWORD *)(v8 + 288);
        v11 = (__int128 *)(v8 + 88);
        return (struct tagMONITOR *)MonitorFromRect((__int64)v11, a2, v10);
      }
      v15 = *(_OWORD *)(v8 + 88);
      v9 = *(unsigned int *)(v8 + 288);
LABEL_8:
      LogicalToPhysicalDPIRect(&v15, &v15, v9, 0LL);
      v10 = 18;
      v11 = &v15;
      return (struct tagMONITOR *)MonitorFromRect((__int64)v11, a2, v10);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  }
  if ( a2 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 96);
  return 0LL;
}
