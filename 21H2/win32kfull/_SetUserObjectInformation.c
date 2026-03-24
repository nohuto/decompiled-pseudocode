/*
 * XREFs of _SetUserObjectInformation @ 0x1C01D49B8
 * Callers:
 *     NtUserSetObjectInformation @ 0x1C0202700 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  POBJECT_TYPE *ObjectType; // rdi
  ACCESS_MASK v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int16 v21; // [rsp+30h] [rbp-58h] BYREF
  int v22; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v25; // [rsp+58h] [rbp-30h] BYREF

  v8 = 1;
  v22 = 1;
  HandleInformation = 0LL;
  v21 = 0;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(Object);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v14 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v11 = 1LL;
        goto LABEL_18;
      }
      v14 = 128;
    }
    v25 = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, v14, (POBJECT_TYPE)ObjectType, 1, &v25, &HandleInformation);
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          LOBYTE(v21) = *a3 != 0;
          HIBYTE(v21) = HandleInformation.HandleAttributes & 1;
          LOBYTE(v16) = 1;
          ObSetHandleAttributes(Handle, &v21, v16);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL, a3[2] & 1);
            v22 = v8;
            if ( !v8 )
              UserSetLastError(8LL, v18, v19);
          }
          goto LABEL_16;
        }
        v17 = 13LL;
      }
      else
      {
        v17 = 87LL;
      }
      UserSetLastError(v17, v15, v16);
      v8 = 0;
      v22 = 0;
LABEL_16:
      ObfDereferenceObject(v25);
      return v8;
    }
  }
  v11 = RtlNtStatusToDosError(v9);
LABEL_18:
  UserSetLastError(v11, v10, v12);
  return 0LL;
}
