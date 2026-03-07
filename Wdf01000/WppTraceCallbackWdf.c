__int64 __fastcall WppTraceCallbackWdf(
        unsigned __int8 minorFunction,
        void *DataPath,
        unsigned int BufferLength,
        char *Buffer,
        _BYTE *Context,
        unsigned int *Size)
{
  unsigned int *v6; // r14
  unsigned int TraceInformation; // ebx
  _BYTE *v9; // rdi
  __int128 v10; // xmm0
  _BYTE *v11; // rdi
  unsigned int Level; // [rsp+40h] [rbp+8h] BYREF

  v6 = Size;
  TraceInformation = 0;
  *Size = 0;
  if ( minorFunction == 4 || minorFunction == 5 )
  {
    v11 = Context;
    Level = 0;
    LODWORD(Size) = 0;
    if ( Context )
    {
      if ( BufferLength < 0x30 )
      {
        return (unsigned int)-1073741811;
      }
      else if ( minorFunction == 5 )
      {
        Context[49] = 0;
        *((_DWORD *)v11 + 13) = 0;
        *((_QWORD *)v11 + 4) = 0LL;
      }
      else
      {
        *((_QWORD *)Context + 4) = *((_QWORD *)Buffer + 1);
        if ( WmiQueryTraceInformation(TraceEnableLevelClass, &Level, 4u, (PULONG)&Size, Buffer) >= 0 )
          v11[49] = Level;
        TraceInformation = WmiQueryTraceInformation(TraceEnableFlagsClass, v11 + 52, 4u, (PULONG)&Size, Buffer);
        if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x200000) != 0 )
          FxIFRReplay(*((_QWORD *)v11 + 4));
      }
    }
    else
    {
      return (unsigned int)-1073741163;
    }
  }
  else if ( minorFunction != 6 && minorFunction != 7 )
  {
    if ( minorFunction == 8 )
    {
      v9 = Context;
      if ( BufferLength < 0x38 )
      {
        TraceInformation = -1073741789;
        if ( BufferLength >= 4 )
        {
          *(_DWORD *)Buffer = 56;
          *v6 = 4;
        }
      }
      else
      {
        memset(Buffer, 0, BufferLength);
        *(_DWORD *)Buffer = 56;
        *((_DWORD *)Buffer + 2) = 0;
        *((_DWORD *)Buffer + 4) = 1;
        v10 = *(_OWORD *)*((_QWORD *)v9 + 1);
        *((_DWORD *)Buffer + 10) = 528384;
        *(_OWORD *)(Buffer + 24) = v10;
        *v6 = 56;
      }
      WppInitGlobalLoggerWdf(
        L"GlobalLogger",
        *((const _GUID **)v9 + 1),
        (unsigned __int64 *)v9 + 4,
        (unsigned int *)v9 + 13,
        v9 + 49);
    }
    else
    {
      return (unsigned int)-1073741808;
    }
  }
  return TraceInformation;
}
