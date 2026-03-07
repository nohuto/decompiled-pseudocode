NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx
  _DWORD *v8; // rax
  NTSTATUS result; // eax
  ULONG v10; // eax
  _OWORD v11[3]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 456LL);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v7 = v5;
    if ( v5 < 0 )
    {
      v10 = RtlNtStatusToDosError(v5);
      UserSetLastError(v10);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v8 = *(_DWORD **)(gptiCurrent + 456LL);
      if ( Object != v8 )
      {
        if ( v8 )
        {
          memset(v11, 0, sizeof(v11));
          while ( (unsigned int)xxxInternalGetMessage(v11, 0LL, 0, 0, 3, 0) )
            xxxDispatchMessage((__int64 *)v11);
        }
        v7 = xxxSetThreadDesktop(0LL, (__int64)Object, v6);
        if ( v7 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(a2[1], 0);
        }
      }
    }
    return v7;
  }
  return result;
}
