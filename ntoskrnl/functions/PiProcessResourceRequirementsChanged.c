__int64 __fastcall PiProcessResourceRequirementsChanged(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  v8 = 0LL;
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = 0LL;
  ObfReferenceObjectWithTag(v2, 0x65706E50u);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 789) <= 1 )
  {
    v6 = -1073741738;
    v4 = (_DWORD *)(v3 + 704);
  }
  else
  {
    PoFxActivateDevice(*(_QWORD *)(a1 + 16));
    v4 = (_DWORD *)(v3 + 704);
    *(_DWORD *)(v3 + 704) |= 0x40u;
    PipClearDevNodeFlags(v3, 256);
    PipSetDevNodeFlags(v3, 1024);
    PipClearDevNodeProblem(v3);
    if ( *(_DWORD *)(v3 + 300) == 778 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags(v3, 2048);
      else
        PipSetDevNodeFlags(v3, 2048);
      PnpReallocateResources(v3);
      v5 = *(_QWORD *)(a1 + 40);
      LODWORD(v8) = 3;
      BYTE4(v8) = PnPBootDriversInitialized;
      ObfReferenceObject(*((PVOID *)IopRootDeviceNode + 4));
      v6 = PipProcessDevNodeTree((__int64)IopRootDeviceNode, a1, (__int64)&v8, 0, 0, v5 != 0, 0);
      if ( v6 < 0 )
        v6 = 0;
    }
    else
    {
      v6 = -1073741823;
    }
  }
  if ( (*v4 & 0x40) != 0 )
  {
    PoFxIdleDevice(*(_QWORD *)(v3 + 32));
    *v4 &= ~0x40u;
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x65706E50u);
  return (unsigned int)v6;
}
