/*
 * XREFs of ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18002EBE4
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180030920 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180163524 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

__int64 __fastcall CMmcssTask::LoadRuntime(CMmcssTask *this)
{
  signed int v1; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  FARPROC v5; // rax
  FARPROC v6; // rax
  signed int v8; // eax
  unsigned int v9; // ecx
  signed int v10; // eax
  unsigned int v11; // ecx
  signed int v12; // eax
  unsigned int v13; // ecx
  signed int LastError; // eax
  unsigned int v15; // ecx

  v1 = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    SetLastError(0);
    LibraryW = LoadLibraryW(L"avrt.dll");
    *((_QWORD *)this + 6) = LibraryW;
    if ( LibraryW )
    {
      SetLastError(0);
      ProcAddress = GetProcAddress(*((HMODULE *)this + 6), "AvRevertMmThreadCharacteristics");
      *((_QWORD *)this + 8) = ProcAddress;
      if ( ProcAddress )
      {
        SetLastError(0);
        v5 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadCharacteristicsW");
        *((_QWORD *)this + 7) = v5;
        if ( v5 )
        {
          SetLastError(0);
          v6 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadPriority");
          *((_QWORD *)this + 9) = v6;
          if ( v6 )
            return (unsigned int)v1;
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v1, 0x151u, 0LL);
        }
        else
        {
          v12 = GetLastError();
          v1 = v12;
          if ( v12 > 0 )
            v1 = (unsigned __int16)v12 | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v1, 0x14Fu, 0LL);
        }
      }
      else
      {
        v10 = GetLastError();
        v1 = v10;
        if ( v10 > 0 )
          v1 = (unsigned __int16)v10 | 0x80070000;
        if ( v1 >= 0 )
          v1 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v1, 0x14Du, 0LL);
      }
    }
    else
    {
      v8 = GetLastError();
      v1 = v8;
      if ( v8 > 0 )
        v1 = (unsigned __int16)v8 | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v1, 0x14Au, 0LL);
    }
    CMmcssTask::UnloadRuntime(this);
  }
  return (unsigned int)v1;
}
