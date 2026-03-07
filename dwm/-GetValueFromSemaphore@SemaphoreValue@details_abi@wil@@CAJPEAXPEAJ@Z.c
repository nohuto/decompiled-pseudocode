__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  unsigned int v5; // r8d
  const char *v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  DWORD v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v9 = 149LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v9, v5, v6);
  }
  if ( v4 && v4 != 258 )
  {
    v8 = 150LL;
    goto LABEL_25;
  }
  PreviousCount = 0;
  if ( v4 )
  {
    v14 = 0;
    if ( ReleaseSemaphore(hHandle, 1, &v14) )
    {
      if ( v14 )
      {
        v8 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 177LL;
        goto LABEL_25;
      }
      v10 = WaitForSingleObject(hHandle, 0);
      if ( v10 != -1 )
      {
        if ( v10 )
        {
          v8 = 181LL;
          goto LABEL_25;
        }
LABEL_7:
        *a2 = PreviousCount;
        return 0LL;
      }
      v9 = 180LL;
    }
    else
    {
      v9 = 173LL;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v9, v5, v6);
  }
  if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
  {
    v9 = 158LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v9, v5, v6);
  }
  ++PreviousCount;
  if ( !ReleaseSemaphore(hHandle, 1, 0LL) && GetLastError() == 298 )
    goto LABEL_7;
  v8 = 163LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v8, (unsigned int)"wil", (const char *)0x8000FFFFLL, v11);
  return 2147549183LL;
}
