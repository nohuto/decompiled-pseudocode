/*
 * XREFs of _GetUserObjectInformation @ 0x1C00727B0
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x1C0070380 (EditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     CheckHandleFlag @ 0x1C005DFC4 (CheckHandleFlag.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _QWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // eax
  PVOID v11; // r15
  POBJECT_TYPE *ObjectType; // r13
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // r15
  int v17; // r14d
  int v18; // r14d
  const void **v19; // r14
  size_t v20; // r8
  __int64 v21; // rcx
  int v22; // r14d
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  __int64 CurrentProcess; // rax
  PVOID v27; // r14
  void *v28; // rcx
  ULONG v29; // eax
  __int64 v31; // rcx
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v33; // [rsp+50h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-50h] BYREF
  PVOID v35; // [rsp+68h] [rbp-40h]

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
    v13 = 2LL;
    goto LABEL_5;
  }
  if ( ObjectType == ExDesktopObjectType )
  {
    v13 = 1LL;
LABEL_5:
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_48;
    v33 = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v33, &HandleInformation);
    v16 = (unsigned int *)v33;
    v35 = v33;
    if ( v10 >= 0 )
    {
      v17 = a2 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( ObQueryNameInfo(v33) )
            v19 = (const void **)(ObQueryNameInfo(v16) + 8);
          else
            v19 = 0LL;
LABEL_11:
          if ( v19 )
          {
            v20 = *(unsigned __int16 *)v19;
            v9 = v20 + 2;
            if ( (int)v20 + 2 <= a4 )
            {
              memmove(a3, v19[1], v20);
              *(_WORD *)((char *)a3 + *(unsigned __int16 *)v19) = 0;
LABEL_45:
              *a5 = v9;
              ObfDereferenceObject(v16);
              return v7;
            }
            goto LABEL_14;
          }
LABEL_42:
          v9 = 0;
          goto LABEL_45;
        }
        v22 = v18 - 1;
        if ( !v22 )
        {
          v19 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 2
                || ObjectType != ExDesktopObjectType
                || (CurrentProcess = PsGetCurrentProcess(v15, v14), !(unsigned int)IsProcessDwm(CurrentProcess)) )
              {
                v21 = 87LL;
                goto LABEL_15;
              }
              v9 = 8;
              if ( a4 >= 8 )
              {
                *a3 = ***((_QWORD ***)v16 + 1);
                goto LABEL_45;
              }
            }
            else
            {
              v9 = 4;
              if ( a4 >= 4 )
              {
                LOBYTE(v8) = v33 == (PVOID)grpdeskRitInput;
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
              *(_DWORD *)a3 = *((_DWORD *)v33 + 34) >> 10;
              goto LABEL_45;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
            v27 = v33;
          else
            v27 = (PVOID)*((_QWORD *)v33 + 5);
          v28 = (void *)*((_QWORD *)v27 + 24);
          if ( !v28 )
            goto LABEL_42;
          v29 = RtlLengthSid(v28);
          v9 = v29;
          if ( v29 <= a4 )
          {
            memmove(a3, *((const void **)v27 + 24), v29);
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
            if ( (unsigned int)CheckHandleFlag(0LL, *v16, (__int64)Handle, 0LL) )
              *((_DWORD *)a3 + 2) |= 1u;
          }
          else if ( (v16[16] & 4) == 0 )
          {
            *((_DWORD *)a3 + 2) = 1;
          }
          goto LABEL_45;
        }
      }
LABEL_14:
      v21 = 122LL;
LABEL_15:
      UserSetLastError(v21, v14);
      v7 = 0;
      goto LABEL_45;
    }
LABEL_49:
    v31 = RtlNtStatusToDosError(v10);
    goto LABEL_50;
  }
LABEL_48:
  v31 = 1LL;
LABEL_50:
  UserSetLastError(v31, v13);
  return 0LL;
}
