/*
 * XREFs of xxxRegisterUserHungAppHandlers @ 0x1C023EC98
 * Callers:
 *     NtUserRegisterUserHungAppHandlers @ 0x1C01FBCD0 (NtUserRegisterUserHungAppHandlers.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterUserHungAppHandlers(__int64 a1, void *a2)
{
  __int64 CurrentProcessWin32Process; // rsi
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  NTSTATUS v7; // eax
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  ProcessInformation = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 360) )
    return 0LL;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessWx86Information, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  if ( !ProcessInformation )
    return 0LL;
  v5 = (_QWORD *)Win32AllocPoolWithQuotaZInit(72LL, 1886876501LL);
  if ( !v5 )
    return 0LL;
  v6 = 1;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a2, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v5[4] = Object;
  if ( v7 < 0 )
  {
    v6 = 0;
    Win32FreePool(v5);
  }
  else
  {
    v5[5] = a2;
    v5[3] = a1;
    *(_QWORD *)(CurrentProcessWin32Process + 360) = v5;
    *v5 = gpwpiFirstWow;
    gpwpiFirstWow = v5;
  }
  return v6;
}
