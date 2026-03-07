struct UMPDOBJ *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1)
{
  void *v2; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  struct _FD_GLYPHSET *v8; // rsi
  unsigned int v9; // ebp
  char *v10; // rax
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    v6 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)result, a1);
    v7 = v6;
    if ( v6 )
    {
      v2 = (void *)*((_QWORD *)v5 + 41);
      if ( !v2 )
      {
        v11 = v6;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v11, v5, 0, 0, 0LL);
        v8 = *(struct _FD_GLYPHSET **)(v7 + 472);
        if ( v8 )
        {
          if ( v8 < MmSystemRangeStart )
          {
            v2 = v8;
            *((_QWORD *)v5 + 41) = v8;
          }
          else
          {
            v9 = 4 * (v8->cGlyphsSupported + 4 * (v8->cRuns + 1));
            if ( v9 )
            {
              v10 = UMPDOBJ::_AllocUserMem(v5, v9, 0);
              v2 = v10;
              if ( v10 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v10, v8, v9) )
                  *((_QWORD *)v5 + 41) = v2;
                else
                  v2 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v11, v5, 0LL, 0LL, 0LL);
        v11 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
      }
    }
    --*((_DWORD *)v5 + 105);
    return (struct UMPDOBJ *)v2;
  }
  return result;
}
