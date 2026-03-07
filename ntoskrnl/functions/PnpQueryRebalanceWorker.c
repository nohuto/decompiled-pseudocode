__int64 __fastcall PnpQueryRebalanceWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int *a3,
        _QWORD *a4,
        _DWORD *a5,
        unsigned int a6)
{
  int v6; // r14d
  int v7; // eax
  int StopDeviceNode; // eax
  int v13; // edi
  __int64 v14; // rbx
  _DWORD *v15; // rsi
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // ecx
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(BugCheckParameter2 + 300);
  if ( v7 != 778 )
  {
    v17 = v7 - 769;
    if ( v17 <= 0x13 )
    {
      v18 = 787487;
      if ( _bittest(&v18, v17) )
      {
LABEL_22:
        if ( a5 )
          *a5 = 4;
        return (unsigned int)v6;
      }
    }
LABEL_17:
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000) == 0 )
    {
      v6 = -1073741823;
      if ( a5 )
        *a5 = 3;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
    goto LABEL_17;
  StopDeviceNode = PnpQueryStopDeviceNode(BugCheckParameter2, a6);
  v6 = StopDeviceNode;
  if ( StopDeviceNode < 0 )
  {
    PnpCancelStopDeviceNode(BugCheckParameter2);
    if ( a5 )
      *a5 = 1;
  }
  else
  {
    if ( StopDeviceNode == 281 )
      PipSetDevNodeFlags(BugCheckParameter2, 1024);
    v13 = *a3;
    v14 = *(_QWORD *)(BugCheckParameter2 + 32);
    v15 = (_DWORD *)(a2 + ((unsigned __int64)*a3 << 6));
    memset(v15, 0, 0x40uLL);
    *(_QWORD *)v15 = v14;
    v15[3] = 4;
    PnpGetResourceRequirementsForAssignTable(
      (unsigned __int64)v15,
      a2 + ((unsigned __int64)(unsigned int)(v13 + 1) << 6),
      &v20);
    v16 = (unsigned __int64)*a3 << 6;
    if ( *(int *)(v16 + a2 + 56) < 0 )
    {
      v6 = *(_DWORD *)(v16 + a2 + 56);
      PnpCancelStopDeviceNode(BugCheckParameter2);
      if ( a5 )
        *a5 = 2;
    }
    else if ( (*(_DWORD *)(v16 + a2 + 8) & 0x20) == 0 )
    {
      ++*a3;
    }
  }
  if ( v6 < 0 )
  {
LABEL_20:
    if ( a4 )
      *a4 = BugCheckParameter2;
  }
  return (unsigned int)v6;
}
