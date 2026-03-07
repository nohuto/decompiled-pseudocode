__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  char v2; // di
  signed int v3; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  PRTL_CRITICAL_SECTION_DEBUG v7; // rax
  PRTL_CRITICAL_SECTION_DEBUG v9; // rax
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  signed int LastError; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v15 = this;
  v3 = 0;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
      DebugInfo[2].EntryCount = 0;
    v9 = this[1].DebugInfo;
    if ( v9->Type )
    {
      if ( !*(_QWORD *)&v9[2].Flags )
      {
        SetLastError(0);
        v10 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))this[1].OwningThread)(
                this[1].DebugInfo,
                &this[1].DebugInfo[2].EntryCount);
        *(_QWORD *)&this[1].DebugInfo[2].Flags = v10;
        if ( v10 )
        {
          SetLastError(0);
          if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[1].SpinCount)(
                 *(_QWORD *)&this[1].DebugInfo[2].Flags,
                 this[1].DebugInfo[2].ContentionCount) )
          {
            goto LABEL_2;
          }
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          v14 = 269;
        }
        else
        {
          v11 = GetLastError();
          v3 = v11;
          if ( v11 > 0 )
            v3 = (unsigned __int16)v11 | 0x80070000;
          v14 = 265;
        }
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, v14, 0LL);
      }
    }
  }
LABEL_2:
  v7 = this[1].DebugInfo;
  if ( v7 && *(_QWORD *)&v7[2].Flags )
    v2 = 1;
  LOBYTE(this[2].DebugInfo) = v2;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return (unsigned int)v3;
}
