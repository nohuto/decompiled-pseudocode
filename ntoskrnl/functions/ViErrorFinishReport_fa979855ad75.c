__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // rsi
  unsigned int v8; // ebx
  _DWORD *v9; // rdi
  __int64 result; // rax
  _DWORD *i; // r10
  int v12; // eax
  CHAR Response[2]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  v8 = 0;
  v9 = &ViErrorDescriptions;
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      v12 = VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
      if ( v12 )
        _InterlockedExchange(&VfErrorBugcheckDataReady, 0);
      while ( 1 )
      {
        DbgPrompt("How would you like to proceed: Resume execution, Disable break, or Bugcheck (rdb)? ", Response, 2u);
        result = *(unsigned __int16 *)Response;
        if ( Response[0] == 66 )
          break;
        switch ( Response[0] )
        {
          case 'D':
            goto LABEL_17;
          case 'R':
            return result;
          case 'b':
            goto LABEL_21;
          case 'd':
LABEL_17:
            while ( *v9 != (_DWORD)v4 )
            {
              ++v8;
              v9 += 4;
              if ( v8 >= 0x3F )
                return result;
            }
            result = 2LL * v8;
            _InterlockedOr((volatile signed __int32 *)&unk_140D67D94 + 4 * v8, 1u);
            return result;
          case 'r':
            return result;
        }
      }
    }
LABEL_21:
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
