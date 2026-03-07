__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r14d
  struct _LIST_ENTRY *Flink; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  unsigned int v13; // esi
  char *v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  int j; // edx
  unsigned int v19; // ecx
  char *v20; // rax
  char *v21; // r14
  __int64 v22; // r9
  int i; // esi
  char *v24; // rdx
  size_t v25; // rcx
  size_t v26; // rbx
  unsigned __int64 v27; // rcx
  _OWORD *v28; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v30[4]; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-1C4h]
  char v32; // [rsp+38h] [rbp-1C0h]
  size_t v33; // [rsp+40h] [rbp-1B8h]
  unsigned int v34; // [rsp+48h] [rbp-1B0h]
  int v35; // [rsp+4Ch] [rbp-1ACh]
  int v36; // [rsp+50h] [rbp-1A8h]
  int v37; // [rsp+54h] [rbp-1A4h]
  struct _LIST_ENTRY *v38; // [rsp+58h] [rbp-1A0h]
  char *v39; // [rsp+60h] [rbp-198h]
  int v40; // [rsp+68h] [rbp-190h]
  int v41; // [rsp+6Ch] [rbp-18Ch]
  void *v42; // [rsp+70h] [rbp-188h]
  struct _LIST_ENTRY *v43; // [rsp+78h] [rbp-180h]
  __int64 v44[2]; // [rsp+80h] [rbp-178h] BYREF
  _DWORD *v45; // [rsp+90h] [rbp-168h]
  __int128 v46; // [rsp+98h] [rbp-160h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-150h]
  void *Src[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  LODWORD(v39) = a3;
  v32 = a5;
  v46 = 0LL;
  v47 = 0LL;
  v35 = 0;
  v30[0] = 0;
  v33 = 0LL;
  v31 = 0;
  v44[0] = 0LL;
  v7 = a1;
  v34 = a1;
  if ( a5 )
    Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  else
    Flink = (struct _LIST_ENTRY *)EtwpHostSiloState;
  v43 = Flink;
  v38 = Flink;
  if ( v7 >= LODWORD(Flink[1].Flink) )
    return 3221225480LL;
  v10 = EtwpOpenLogger(v7, (__int64)Flink, a5, v30);
  v11 = v10;
  v44[1] = v10;
  if ( !v10 )
    return 3221225480LL;
  v45 = (_DWORD *)(v10 + 12);
  v12 = *(_DWORD *)(v10 + 12);
  if ( (v12 & 0x80u) != 0 )
  {
    result = 3221225506LL;
LABEL_9:
    v31 = result;
    goto LABEL_72;
  }
  if ( !a5 && (v12 & 0x1000000) != 0 )
  {
    result = 3221225659LL;
    goto LABEL_9;
  }
  if ( a5 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  LODWORD(v33) = *a2;
  if ( (unsigned int)v33 < (unsigned int)v5 )
  {
    result = 3221225485LL;
    v31 = -1073741811;
    goto LABEL_72;
  }
  v35 = *((_DWORD *)a2 + 11);
  v41 = v35;
  v40 = v35 & 0x100000;
  v13 = v33;
  if ( (v35 & 0x100000) == 0 )
  {
LABEL_37:
    v20 = (char *)EtwpReserveTraceBuffer(v11, v13, (__int64)&v46, v44, 0);
    v21 = v20;
    v39 = v20;
    if ( v20 )
    {
      if ( v40 )
      {
        v37 = 0;
        v42 = &v20[(unsigned int)v5];
        memmove(v20, a2, (unsigned int)v5);
        for ( i = 0; ; ++i )
        {
          v37 = i;
          if ( i >= SHIDWORD(v33) )
            break;
          v24 = (char *)Src[2 * i];
          v25 = LODWORD(Src[2 * i + 1]);
          if ( v24 && (_DWORD)v25 )
          {
            if ( a5 && ((unsigned __int64)&v24[v25] > 0x7FFFFFFF0000LL || &v24[v25] < v24) )
              MEMORY[0x7FFFFFFF0000] = 0;
            v26 = v25;
            memmove(v42, v24, v25);
            v42 = (char *)v42 + v26;
          }
        }
      }
      else
      {
        if ( a5 && v13 )
        {
          if ( ((unsigned __int8)a2 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v27 = (unsigned __int64)a2 + v13;
          if ( v27 > 0x7FFFFFFF0000LL || v27 < (unsigned __int64)a2 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(v20, a2, v13);
      }
      if ( (v41 & 0x80000) != 0 )
      {
        v28 = (_OWORD *)*((_QWORD *)a2 + 3);
        if ( a5 && ((unsigned __int8)v28 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(_OWORD *)(v21 + 24) = *v28;
      }
      Flink = v38;
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)v21 = a4 | v33;
      *((_QWORD *)v21 + 2) = v44[0];
      *((_DWORD *)v21 + 10) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v21 + 11) = CurrentThread->UserTime;
      *((_DWORD *)v21 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v21 + 3) = CurrentThread[1].CycleTime;
      if ( (*v45 & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        EtwpSendTraceEvent(v11, (__int64)&v46);
      if ( *(_QWORD *)(v11 + 1288) )
      {
        LOBYTE(v22) = a5;
        EtwpInvokeEventCallback(v11, &v46, v21 + 24, v22);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)&v46);
      result = v31;
    }
    else
    {
      result = EtwpGetReserveTraceBufferStatus(v11, v13);
      v31 = result;
      Flink = v38;
    }
    v7 = v34;
    goto LABEL_72;
  }
  v36 = 0;
  v14 = (char *)a2 + v5;
  v15 = v33 - v5;
  if ( (unsigned int)(v33 - v5) <= 0x100 )
  {
    if ( v15 )
    {
      if ( a5 )
      {
        if ( ((unsigned __int8)v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)&v14[v15];
        if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v17 = v15;
      memmove(Src, v14, v15);
      v13 = (unsigned int)v39;
      LODWORD(v33) = (_DWORD)v39;
      HIDWORD(v33) = v17 >> 4;
      for ( j = 0; ; ++j )
      {
        v36 = j;
        if ( j >= SHIDWORD(v33) )
          break;
        v19 = (unsigned int)Src[2 * j + 1];
        v13 += v19;
        LODWORD(v33) = v13;
        if ( v13 < v19 )
        {
          result = 2147483653LL;
          v31 = -2147483643;
          Flink = v38;
          goto LABEL_72;
        }
      }
      LODWORD(v5) = (_DWORD)v39;
    }
    goto LABEL_37;
  }
  result = 3221225612LL;
  v31 = -1073741684;
  Flink = v38;
LABEL_72:
  if ( v30[0] )
  {
    ExReleaseRundownProtectionCacheAwareEx(*((PEX_RUNDOWN_REF_CACHE_AWARE *)&Flink[28].Flink->Flink + v7), 1u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v31;
  }
  return result;
}
