__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  void **v8; // r15
  int v9; // eax
  PVOID Object; // [rsp+60h] [rbp-A0h]
  ULONG BufferLength; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  void *FileHandle; // [rsp+78h] [rbp-88h]
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h]
  _OWORD v19[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v20[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v21; // [rsp+120h] [rbp+20h]
  __int128 v22; // [rsp+128h] [rbp+28h] BYREF
  __int128 v23; // [rsp+138h] [rbp+38h]
  __int128 v24; // [rsp+148h] [rbp+48h]

  v1 = a1[25];
  P[0] = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  v13 = 0LL;
  BufferLength = 0;
  P[1] = a1;
  v3 = a1[95];
  DestinationString = 0LL;
  *(_QWORD *)&v24 = 0LL;
  v22 = 0LL;
  DWORD2(v24) = 0;
  v23 = 0LL;
  v19[1] = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v4 = AMLIGetNamedChild(v3, 1314083935LL);
  v16 = v4;
  if ( v4 )
  {
    v7 = AMLIEvalNameSpaceObject(v4, v20, 0LL, 0LL);
    v8 = (void **)v20;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 128) & 4) == 0 )
    {
      v5 = 0;
      *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)(v1 + 216) = *(_QWORD *)(v1 + 200);
      goto LABEL_15;
    }
    v22 = 0LL;
    v6 = a1[95];
    v23 = 0LL;
    v24 = 0LL;
    v19[0] = THRM_EXTENSIONS_DSM_UUID;
    v7 = ACPIAmliEvaluateDsm(v6, (unsigned int)v19, 0, 2, (__int64)&v22, (__int64)P);
    v8 = (void **)P[0];
  }
  v5 = v7;
  if ( v7 >= 0 )
  {
    if ( *((_WORD *)v8 + 1) == 2 )
    {
      v9 = AMLIGetNameSpaceObject(v8[4]);
      dword_1C006F938 = 0;
      pszDest = 0;
      v5 = v9;
      FreeDataBuffs(v8, 1LL);
      if ( v5 >= 0 )
        v5 = -1073741810;
    }
    else
    {
      dword_1C006F938 = 0;
      pszDest = 0;
      v5 = -1072431095;
      FreeDataBuffs(v8, 1LL);
    }
  }
  if ( v16 )
    AMLIDereferenceHandleEx(v16);
  if ( v13 )
    AMLIDereferenceHandleEx(v13);
LABEL_15:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x52706341u);
  return (unsigned int)v5;
}
