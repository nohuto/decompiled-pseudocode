/*
 * XREFs of _GetUserObjectInformation @ 0x1C0069DA4
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x1C00681B0 (EditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     CheckHandleFlag @ 0x1C0066758 (CheckHandleFlag.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  POBJECT_TYPE *ObjectType; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  size_t v16; // r8
  int v17; // r14d
  int v18; // r14d
  const void **v19; // r14
  __int64 v20; // rcx
  int v21; // r14d
  int v22; // r14d
  int v23; // r14d
  const void **v24; // r14
  void *v25; // rcx
  ULONG v26; // eax
  __int64 v28; // rcx
  PVOID v29; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const void **v31; // [rsp+50h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-50h] BYREF
  const void **v33; // [rsp+68h] [rbp-40h]

  v8 = 1;
  v9 = 0;
  v10 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_45;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(Object);
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
      goto LABEL_44;
    v29 = 0LL;
    v11 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v29, &HandleInformation);
    if ( v11 >= 0 )
    {
      v17 = a2 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( !ObQueryNameInfo(v29) )
          {
            v19 = 0LL;
            v31 = 0LL;
LABEL_12:
            if ( v19 )
            {
              v16 = *(unsigned __int16 *)v19;
              v10 = v16 + 2;
              if ( (int)v16 + 2 <= a4 )
              {
                memmove(a3, v19[1], v16);
                *(_WORD *)((char *)a3 + *(unsigned __int16 *)v19) = 0;
LABEL_41:
                *a5 = v10;
                ObfDereferenceObject(v29);
                return v8;
              }
              goto LABEL_15;
            }
LABEL_38:
            v10 = 0;
            goto LABEL_41;
          }
          v19 = (const void **)(ObQueryNameInfo(v29) + 8);
LABEL_11:
          v31 = v19;
          goto LABEL_12;
        }
        v21 = v18 - 1;
        if ( !v21 )
        {
          v19 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
            {
              v20 = 87LL;
              goto LABEL_16;
            }
            v10 = 4;
            if ( a4 >= 4 )
            {
              LOBYTE(v9) = v29 == (PVOID)grpdeskRitInput;
              *a3 = v9;
              goto LABEL_41;
            }
          }
          else
          {
            v10 = 4;
            if ( a4 >= 4 )
            {
              *a3 = *((_DWORD *)v29 + 34) >> 10;
              goto LABEL_41;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
            v24 = (const void **)v29;
          else
            v24 = (const void **)*((_QWORD *)v29 + 5);
          v33 = v24;
          v25 = (void *)v24[24];
          if ( !v25 )
            goto LABEL_38;
          v26 = RtlLengthSid(v25);
          v10 = v26;
          if ( v26 <= a4 )
          {
            memmove(a3, v24[24], v26);
            goto LABEL_41;
          }
        }
      }
      else
      {
        v10 = 12;
        if ( a4 >= 0xC )
        {
          *a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)(a3 + 1) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL, *(unsigned int *)v29, (__int64)Handle, 0LL) )
              a3[2] |= 1u;
          }
          else if ( (*((_DWORD *)v29 + 16) & 4) == 0 )
          {
            a3[2] = 1;
          }
          goto LABEL_41;
        }
      }
LABEL_15:
      v20 = 122LL;
LABEL_16:
      UserSetLastError(v20, v15, v16);
      v8 = 0;
      goto LABEL_41;
    }
LABEL_45:
    v28 = RtlNtStatusToDosError(v11);
    goto LABEL_46;
  }
LABEL_44:
  v28 = 1LL;
LABEL_46:
  UserSetLastError(v28, v13, v14);
  return 0LL;
}
