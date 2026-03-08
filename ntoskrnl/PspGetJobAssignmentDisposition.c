/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x1406FFFD0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x1406FF9A0 (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PspIsProcessInJob @ 0x140788EDC (PspIsProcessInJob.c)
 *     PsIsJobParentImmutable @ 0x140799510 (PsIsJobParentImmutable.c)
 *     PspIsJobMovable @ 0x1409AF5C4 (PspIsJobMovable.c)
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
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112)) )
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
              v10 = *(_QWORD *)(v10 + 1288);
              if ( !v10 )
                goto LABEL_11;
            }
            *a4 = 3;
          }
          else
          {
LABEL_11:
            if ( (unsigned __int8)PsIsJobParentImmutable(a1) || *(_DWORD *)(a1 + 212) )
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
      ExReleaseRundownProtection_0(v8);
      return v4;
    }
    else
    {
      return 3221225738LL;
    }
  }
  else if ( (unsigned __int8)((__int64 (*)(void))PsIsJobParentImmutable)()
         || *(_DWORD *)(v12 + 212)
         || *(_QWORD *)(v12 + 1776) == -1LL )
  {
    return 3221225659LL;
  }
  else
  {
    *v14 = (v13 != 0) + 6;
    return 0LL;
  }
}
