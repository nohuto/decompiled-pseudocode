/*
 * XREFs of SmpWaitForSubSysStartup @ 0x140003928
 * Callers:
 *     wmain @ 0x140001850 (wmain.c)
 *     SmpHandleConnectionRequest @ 0x140003030 (SmpHandleConnectionRequest.c)
 *     SmpTerminateCSR @ 0x1400058C4 (SmpTerminateCSR.c)
 *     SmpLoadSubSystem @ 0x1400172BC (SmpLoadSubSystem.c)
 * Callees:
 *     SmpLockKnownSubSysList @ 0x140003A4C (SmpLockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x140003A94 (SmpDereferenceKnownSubSys.c)
 *     SmpCheckSubSysStatus @ 0x140003B7C (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x140018608 (SmpWaitForStatusChange.c)
 */

_QWORD *__fastcall SmpWaitForSubSysStartup(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  int v8; // r15d
  _QWORD *result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  volatile signed __int32 *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx

  v6 = a2 & 2;
  v8 = a1;
  result = (_QWORD *)SmpLockKnownSubSysList(a1, v6 != 0, a4);
  v10 = *(_QWORD **)(a4 + 8);
  if ( v6 )
  {
    while ( (_QWORD *)*v10 == v10 )
      result = (_QWORD *)RtlSleepConditionVariableSRW(&SmpSubSysReadyCondition, v10 + 2, 0LL, 1LL);
  }
  else
  {
LABEL_2:
    for ( result = (_QWORD *)*v10; result != v10; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result - 2) == v8 )
      {
        v11 = result - 9;
        if ( result != (_QWORD *)72 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) == 0 || (v11[1] & 1) != 0 )
            {
              v12 = (volatile signed __int32 *)(v11 + 1);
              if ( !(unsigned int)SmpCheckSubSysStatus(v11) )
              {
                _InterlockedIncrement((volatile signed __int32 *)v11);
                SmpWaitForStatusChange(v13, 0LL, a4);
                if ( (*(_BYTE *)v12 & 4) != 0 )
                {
                  SmpDereferenceKnownSubSys(v11);
                  goto LABEL_2;
                }
                SmpDereferenceKnownSubSys(v11);
              }
              v14 = v11 + 9;
              result = (_QWORD *)*v14;
              if ( a3 )
              {
                _InterlockedOr(v12, 4u);
                v15 = (_QWORD *)*v14;
                if ( *(_QWORD **)(*v14 + 8LL) != v14
                  || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14)
                  || (*v16 = v15, v15[1] = v16, v17 = *(_QWORD **)(a3 + 8), *v17 != a3) )
                {
                  __fastfail(3u);
                }
                *v14 = a3;
                v14[1] = v17;
                *v17 = v14;
                *(_QWORD *)(a3 + 8) = v14;
              }
            }
            else
            {
              result = (_QWORD *)*result;
            }
            if ( result != v10 )
            {
              v11 = result - 9;
              if ( *((_DWORD *)result - 2) == v8 )
                continue;
            }
            return result;
          }
        }
        return result;
      }
    }
  }
  return result;
}
