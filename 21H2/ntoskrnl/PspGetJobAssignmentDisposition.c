/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x1406F6B28
 * Callers:
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 *     PsAssignProcessToJobObject @ 0x1406F6D10 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PspIsProcessInJob @ 0x1405FD380 (PspIsProcessInJob.c)
 *     PsIsJobParentImmutable @ 0x14061C25C (PsIsJobParentImmutable.c)
 *     PspIsJobMovable @ 0x1409090E4 (PspIsJobMovable.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v8; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9

  v4 = 0;
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 1112);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1112)) )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 8) != 0 )
      {
        v4 = -1073741558;
      }
      else if ( *(_QWORD *)(a2 + 1296) )
      {
        if ( (unsigned int)PspIsProcessInJob(a2, a1) == 292 )
        {
          *a4 = 2;
        }
        else
        {
          v10 = a1;
          if ( a1 )
          {
            while ( v10 != *(_QWORD *)(a2 + 1296) )
            {
              v10 = *(_QWORD *)(v10 + 1072);
              if ( !v10 )
                goto LABEL_11;
            }
            *a4 = 3;
          }
          else
          {
LABEL_11:
            if ( PsIsJobParentImmutable(a1) || *(_DWORD *)(a1 + 212) )
            {
              if ( (unsigned __int8)PspIsJobMovable(v11) )
                *a4 = 5;
              else
                v4 = -1073741637;
            }
            else
            {
              *a4 = 4;
            }
          }
        }
      }
      else
      {
        *a4 = 1;
      }
      ExReleaseRundownProtection(v8);
      return v4;
    }
    else
    {
      return 3221225738LL;
    }
  }
  else if ( PsIsJobParentImmutable(a1) || *(_DWORD *)(v12 + 212) || *(_QWORD *)(v12 + 1560) == -1LL )
  {
    return 3221225659LL;
  }
  else
  {
    *v14 = (v13 != 0) + 6;
    return 0LL;
  }
}
