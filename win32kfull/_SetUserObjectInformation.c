/*
 * XREFs of _SetUserObjectInformation @ 0x1C01AA334
 * Callers:
 *     NtUserSetObjectInformation @ 0x1C01DD570 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  PVOID v10; // r15
  ULONG v11; // ecx
  POBJECT_TYPE *ObjectType; // rdi
  ACCESS_MASK v13; // edx
  __int64 v14; // r8
  int v15; // ecx
  __int16 v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v21; // [rsp+58h] [rbp-30h] BYREF

  v8 = 1;
  v18 = 1;
  HandleInformation = 0LL;
  v17 = 0;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v10 = Object;
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(v10);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v13 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v11 = 1;
        goto LABEL_18;
      }
      v13 = 128;
    }
    v21 = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v21, &HandleInformation);
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          LOBYTE(v17) = *a3 != 0;
          HIBYTE(v17) = HandleInformation.HandleAttributes & 1;
          LOBYTE(v14) = 1;
          ObSetHandleAttributes(Handle, &v17, v14);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL, a3[2] & 1);
            v18 = v8;
            if ( !v8 )
              UserSetLastError(8);
          }
          goto LABEL_16;
        }
        v15 = 13;
      }
      else
      {
        v15 = 87;
      }
      UserSetLastError(v15);
      v8 = 0;
      v18 = 0;
LABEL_16:
      ObfDereferenceObject(v21);
      return v8;
    }
  }
  v11 = RtlNtStatusToDosError(v9);
LABEL_18:
  UserSetLastError(v11);
  return 0LL;
}
