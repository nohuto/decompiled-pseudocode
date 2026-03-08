/*
 * XREFs of _GetUserObjectInformation @ 0x1C00C7720
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x1C00C7550 (EditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C00D1900 (CheckHandleFlag.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _QWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // eax
  PVOID v11; // r15
  POBJECT_TYPE *ObjectType; // r13
  ACCESS_MASK v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID v17; // r15
  int v18; // r14d
  int v19; // r14d
  const void **v20; // r14
  size_t v21; // r8
  int v22; // ecx
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  int v26; // r14d
  __int64 CurrentProcess; // rax
  PVOID v28; // r14
  void *v29; // rcx
  ULONG v30; // eax
  ULONG v32; // ecx
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v34; // [rsp+50h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-50h] BYREF
  PVOID v36; // [rsp+68h] [rbp-40h]

  v7 = 1;
  v8 = 0;
  v9 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v11 = Object;
  if ( v10 < 0 )
    goto LABEL_49;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(v11);
  if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v13 = 2;
    goto LABEL_5;
  }
  if ( ObjectType == ExDesktopObjectType )
  {
    v13 = 1;
LABEL_5:
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_48;
    v34 = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v34, &HandleInformation);
    v17 = v34;
    v36 = v34;
    if ( v10 >= 0 )
    {
      v18 = a2 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( ObQueryNameInfo(v34) )
            v20 = (const void **)(ObQueryNameInfo(v17) + 8);
          else
            v20 = 0LL;
LABEL_11:
          if ( v20 )
          {
            v21 = *(unsigned __int16 *)v20;
            v9 = v21 + 2;
            if ( (int)v21 + 2 <= a4 )
            {
              memmove(a3, v20[1], v21);
              *(_WORD *)((char *)a3 + *(unsigned __int16 *)v20) = 0;
LABEL_45:
              *a5 = v9;
              ObfDereferenceObject(v17);
              return v7;
            }
            goto LABEL_14;
          }
LABEL_42:
          v9 = 0;
          goto LABEL_45;
        }
        v23 = v19 - 1;
        if ( !v23 )
        {
          v20 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 != 2
                || ObjectType != ExDesktopObjectType
                || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16), !(unsigned int)IsProcessDwm(CurrentProcess)) )
              {
                v22 = 87;
                goto LABEL_15;
              }
              v9 = 8;
              if ( a4 >= 8 )
              {
                *a3 = ***((_QWORD ***)v17 + 1);
                goto LABEL_45;
              }
            }
            else
            {
              v9 = 4;
              if ( a4 >= 4 )
              {
                LOBYTE(v8) = v34 == (PVOID)grpdeskRitInput;
                *(_DWORD *)a3 = v8;
                goto LABEL_45;
              }
            }
          }
          else
          {
            v9 = 4;
            if ( a4 >= 4 )
            {
              *(_DWORD *)a3 = *((_DWORD *)v34 + 34) >> 10;
              goto LABEL_45;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
            v28 = v34;
          else
            v28 = (PVOID)*((_QWORD *)v34 + 5);
          v29 = (void *)*((_QWORD *)v28 + 24);
          if ( !v29 )
            goto LABEL_42;
          v30 = RtlLengthSid(v29);
          v9 = v30;
          if ( v30 <= a4 )
          {
            memmove(a3, *((const void **)v28 + 24), v30);
            goto LABEL_45;
          }
        }
      }
      else
      {
        v9 = 12;
        if ( a4 >= 0xC )
        {
          *(_DWORD *)a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)((char *)a3 + 4) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL) )
              *((_DWORD *)a3 + 2) |= 1u;
          }
          else if ( (*((_DWORD *)v17 + 16) & 4) == 0 )
          {
            *((_DWORD *)a3 + 2) = 1;
          }
          goto LABEL_45;
        }
      }
LABEL_14:
      v22 = 122;
LABEL_15:
      UserSetLastError(v22);
      v7 = 0;
      goto LABEL_45;
    }
LABEL_49:
    v32 = RtlNtStatusToDosError(v10);
    goto LABEL_50;
  }
LABEL_48:
  v32 = 1;
LABEL_50:
  UserSetLastError(v32);
  return 0LL;
}
