/*
 * XREFs of _SetUserObjectInformation @ 0x1C01D0684
 * Callers:
 *     NtUserSetObjectInformation @ 0x1C01FDC00 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  PVOID v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  POBJECT_TYPE *ObjectType; // rdi
  ACCESS_MASK v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v24; // [rsp+58h] [rbp-30h] BYREF

  v8 = 1;
  v21 = 1;
  HandleInformation = 0LL;
  v20 = 0;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v10 = Object;
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(v10);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v14 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v12 = 1LL;
        goto LABEL_18;
      }
      v14 = 128;
    }
    v24 = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, v14, (POBJECT_TYPE)ObjectType, 1, &v24, &HandleInformation);
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          LOBYTE(v20) = *a3 != 0;
          HIBYTE(v20) = HandleInformation.HandleAttributes & 1;
          LOBYTE(v16) = 1;
          ObSetHandleAttributes(Handle, &v20, v16);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL, a3[2] & 1);
            v21 = v8;
            if ( !v8 )
              UserSetLastError(8LL, v18);
          }
          goto LABEL_16;
        }
        v17 = 13LL;
      }
      else
      {
        v17 = 87LL;
      }
      UserSetLastError(v17, v15);
      v8 = 0;
      v21 = 0;
LABEL_16:
      ObfDereferenceObject(v24);
      return v8;
    }
  }
  v12 = RtlNtStatusToDosError(v9);
LABEL_18:
  UserSetLastError(v12, v11);
  return 0LL;
}
