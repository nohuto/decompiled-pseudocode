/*
 * XREFs of ValidateHdesk @ 0x1C00A5830
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall ValidateHdesk(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // ebx
  _DWORD *v6; // rax
  ULONG v8; // eax
  __int64 v9; // rdx
  ULONG v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a3, (POBJECT_TYPE)ExDesktopObjectType, a2, (PVOID *)&v12, 0LL);
  v6 = v12;
  *a4 = v12;
  if ( v5 < 0 )
  {
    v10 = RtlNtStatusToDosError(v5);
    UserSetLastError(v10, v11);
    return (unsigned int)v5;
  }
  if ( *v6 == gSessionId && (v6[12] & 0xE) == 0 )
    return (unsigned int)v5;
  v8 = RtlNtStatusToDosError(-1073741816);
  UserSetLastError(v8, v9);
  ObfDereferenceObject(*a4);
  return 3221225480LL;
}
