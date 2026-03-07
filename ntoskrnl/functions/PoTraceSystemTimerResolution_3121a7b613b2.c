char __fastcall PoTraceSystemTimerResolution(char a1, __int64 a2)
{
  int v4; // eax
  char v5; // r8
  REGHANDLE v6; // rbx
  unsigned __int16 *v7; // r8
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *Teb; // rdx
  _KPROCESS *Process; // rcx
  __int16 v11; // ax
  bool v12; // zf
  char v13; // al
  int v14; // eax
  int v15; // ecx
  const EVENT_DESCRIPTOR *v16; // rdx
  int *v17; // r8
  __int16 v19; // [rsp+30h] [rbp-98h] BYREF
  int v20; // [rsp+34h] [rbp-94h] BYREF
  int v21; // [rsp+38h] [rbp-90h] BYREF
  int v22; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v23; // [rsp+40h] [rbp-88h] BYREF
  int v24; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-78h] BYREF
  int *v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int16 *v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  int v31; // [rsp+88h] [rbp-40h]
  int v32; // [rsp+8Ch] [rbp-3Ch]
  int *v33; // [rsp+90h] [rbp-38h]
  __int64 v34; // [rsp+98h] [rbp-30h]
  int *v35; // [rsp+A0h] [rbp-28h]
  __int64 v36; // [rsp+A8h] [rbp-20h]

  if ( a1 )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN);
    if ( (_BYTE)v4
      || (LOBYTE(v4) = EtwEventEnabled(v6, &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN), v5 = 0, (_BYTE)v4) )
    {
      v5 = 1;
    }
  }
  else
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STRS);
    v5 = v4;
  }
  if ( PopDiagHandleRegistered && v5 )
  {
    v7 = *(unsigned __int16 **)(a2 + 1472);
    v19 = *v7 >> 1;
    v22 = *(_DWORD *)(a2 + 2104);
    v20 = 0;
    if ( !a1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
        Teb = 0LL;
      else
        Teb = CurrentThread->Teb;
      if ( Teb )
      {
        if ( !KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[30] )
          goto LABEL_22;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process[1].Affinity.StaticBitmap[30] )
          goto LABEL_22;
        v11 = WORD2(Process[2].Affinity.StaticBitmap[20]);
        if ( v11 == 332 || (v12 = v11 == 452, v13 = 0, v12) )
          v13 = 1;
        if ( v13 )
          v14 = Teb[3032];
        else
LABEL_22:
          v14 = Teb[1480];
        v20 = v14;
      }
    }
    v23 = *(_DWORD *)(a2 + 1088);
    UserData.Ptr = (ULONGLONG)&v22;
    *(_QWORD *)&UserData.Size = 4LL;
    v26 = &v23;
    v27 = 4LL;
    v28 = &v19;
    v29 = 2LL;
    v15 = *v7;
    v30 = *((_QWORD *)v7 + 1);
    v31 = v15;
    v32 = 0;
    v4 = (*(_DWORD *)(a2 + 2172) >> 26) & 1;
    v21 = v4;
    if ( a1 )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 0x1000) != 0 )
      {
        v33 = &v21;
        v34 = 4LL;
        LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN, 0LL, 5u, &UserData);
      }
      v17 = *(int **)(a2 + 2096);
      if ( !v17 || !*v17 )
        return v4;
      v22 = *(_DWORD *)(a2 + 2108);
      v24 = *v17;
      v33 = &v24;
      v35 = v17 + 2;
      v36 = (unsigned int)(8 * v24);
      v16 = &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN;
    }
    else
    {
      v33 = &v20;
      v35 = &v21;
      v36 = 4LL;
      v16 = &POP_ETW_EVENT_STRS;
    }
    v34 = 4LL;
    LOBYTE(v4) = EtwWrite(PopDiagHandle, v16, 0LL, 6u, &UserData);
  }
  return v4;
}
