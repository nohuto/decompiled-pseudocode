__int64 __fastcall ValidateHwinsta(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  unsigned int v10; // ebx
  ULONG v12; // eax
  ULONG v13; // eax
  PVOID v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a3, ExWindowStationObjectType, a2, &v14, 0LL);
  v9 = v14;
  v10 = v5;
  *a4 = v14;
  if ( v5 < 0 )
  {
    v12 = RtlNtStatusToDosError(v5);
    UserSetLastError(v12);
  }
  else if ( *(_DWORD *)*a4 != *(_DWORD *)SGDGetUserSessionState(v9, v6, v7, v8) )
  {
    v10 = -1073741816;
    v13 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v13);
    ObfDereferenceObject(*a4);
  }
  return v10;
}
