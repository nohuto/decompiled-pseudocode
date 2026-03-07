__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  const char *v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  DWORD v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v8 = 149LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  if ( v4 && v4 != 258 )
  {
    v7 = 150LL;
    goto LABEL_25;
  }
  PreviousCount = 0;
  if ( v4 )
  {
    v13 = 0;
    if ( ReleaseSemaphore(hHandle, 1, &v13) )
    {
      if ( v13 )
      {
        v7 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 177LL;
        goto LABEL_25;
      }
      v9 = WaitForSingleObject(hHandle, 0);
      if ( v9 != -1 )
      {
        if ( v9 )
        {
          v7 = 181LL;
          goto LABEL_25;
        }
LABEL_7:
        *a2 = PreviousCount;
        return 0LL;
      }
      v8 = 180LL;
    }
    else
    {
      v8 = 173LL;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
  {
    v8 = 158LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  ++PreviousCount;
  if ( !ReleaseSemaphore(hHandle, 1, 0LL) && GetLastError() == 298 )
    goto LABEL_7;
  v7 = 163LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v7, (unsigned int)"wil", (const char *)0x8000FFFFLL, v10);
  return 2147549183LL;
}
