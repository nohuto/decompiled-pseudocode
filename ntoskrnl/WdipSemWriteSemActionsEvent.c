__int64 __fastcall WdipSemWriteSemActionsEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rdi
  int TraceInformation; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 Buffer; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[255]; // [rsp+48h] [rbp-B8h]
  _QWORD v20[124]; // [rsp+840h] [rbp+740h] BYREF

  memset(v20, 0, sizeof(v20));
  v16 = 0;
  v4 = 0LL;
  if ( a1
    && a2
    && (LODWORD(Buffer) = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
        TraceInformation = 0,
        (_DWORD)Buffer) )
  {
    v6 = WmiQueryTraceInformation(LoggerEventsLostClass, &TraceInformation, 4u, 0LL, &Buffer);
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      v16 = TraceInformation;
      v8 = *(_DWORD *)(v7 + 48);
      v19[1] = v7 + 16;
      v19[3] = &v16;
      v18 = v7;
      v19[0] = 16LL;
      v19[2] = 2LL;
      v19[4] = 4LL;
      v19[5] = v7 + 48;
      v19[6] = 4LL;
      if ( *(_DWORD *)(v7 + 48) )
      {
        while ( 1 )
        {
          Buffer = *(_QWORD *)(v7 + 8 * v4 + 56);
          v9 = WdipSemFastAllocate(4LL, 40LL);
          v10 = v9;
          if ( !v9 )
            break;
          v11 = Buffer;
          v20[v4] = v9;
          *(_OWORD *)v9 = *(_OWORD *)v11;
          *(_BYTE *)(v9 + 16) = *(_BYTE *)(v11 + 18);
          *(_QWORD *)(v9 + 24) = *(_QWORD *)(v11 + 24);
          *(_DWORD *)(v9 + 32) = *(_DWORD *)(v11 + 36);
          v5 = 2LL * (unsigned int)(v4 + 4);
          v12 = *(_DWORD *)(a2 + 4 * v4 + 48);
          v4 = (unsigned int)(v4 + 1);
          *(_DWORD *)(v10 + 36) = v12;
          HIDWORD(v19[v5]) = 0;
          v19[v5 - 1] = v10;
          LODWORD(v19[v5]) = 40;
          if ( (unsigned int)v4 >= *(_DWORD *)(v7 + 48) )
            goto LABEL_8;
        }
        v6 = -1073741670;
      }
      else
      {
LABEL_8:
        v6 = WdipSemWriteEvent(v5, a1, a2 + 16, (unsigned int)(v8 + 4), &v18);
      }
      if ( (_DWORD)v4 )
      {
        v13 = v20;
        do
        {
          WdipSemFastFree(4LL, *v13++);
          --v4;
        }
        while ( v4 );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
