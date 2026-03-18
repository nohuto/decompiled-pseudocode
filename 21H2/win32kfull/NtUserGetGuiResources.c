/*
 * XREFs of NtUserGetGuiResources @ 0x1C011FE50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  PVOID v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int *v14; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v5 = 0LL;
  EnterSharedCrit(Handle, a2, a3);
  v8 = 0;
  if ( v3 > 4 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-2LL )
  {
    if ( v3 )
    {
      v12 = v3 - 1;
      if ( !v12 )
      {
        v14 = (unsigned int *)giheCount;
        goto LABEL_18;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 2 )
          goto LABEL_10;
        v14 = (unsigned int *)giheCountPeak;
LABEL_18:
        v8 = *v14;
        goto LABEL_10;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v8 = PeakHandleCount;
    goto LABEL_10;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process(v7);
    goto LABEL_5;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v5 = Object;
  if ( v16 < 0 )
  {
LABEL_11:
    UserSetLastError(87LL, v6);
    goto LABEL_10;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    goto LABEL_25;
  CurrentProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(v5);
LABEL_5:
  if ( CurrentProcessWin32Process )
  {
    if ( v3 )
    {
      v17 = v3 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 2 )
            v8 = CurrentProcessWin32Process[18];
        }
        else
        {
          v8 = CurrentProcessWin32Process[16];
        }
      }
      else
      {
        v8 = CurrentProcessWin32Process[17];
      }
    }
    else
    {
      v8 = CurrentProcessWin32Process[15];
    }
    goto LABEL_8;
  }
LABEL_25:
  UserSetLastError(87LL, v10);
LABEL_8:
  if ( v5 )
    ObfDereferenceObject(v5);
LABEL_10:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
