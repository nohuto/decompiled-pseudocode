__int64 __fastcall NVMeIoPollingDpcRoutine(int a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  int v8; // eax
  __int64 result; // rax
  _QWORD *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h]
  _QWORD v20[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+70h] [rbp-10h]

  v18[1] = 0LL;
  v4 = 4LL;
  v20[1] = 0LL;
  v18[0] = 4LL;
  v6 = *a2;
  v19 = 0LL;
  v20[0] = 5LL;
  v21 = 0LL;
  v8 = *(_DWORD *)(v6 + 4044);
  if ( (v8 & 0x20) == 0 )
  {
    if ( (v8 & 2) != 0 )
      v4 = 5LL;
    StorPortExtendedFunction(93LL, v6, v4, a2[1] + 96);
  }
  NVMeCompletionDpcRoutine(
    a1,
    *a2,
    a2[1],
    ~*(_BYTE *)(*a2 + 4044) & 2 | (unsigned __int64)(((unsigned int)~*(_DWORD *)(*a2 + 4044) >> 3) & 1));
  result = *(unsigned int *)(*a2 + 4044);
  if ( (result & 0x20) == 0 )
  {
    v10 = v18;
    if ( (result & 2) != 0 )
      v10 = v20;
    result = StorPortNotification(4100LL, *a2, v10);
  }
  v11 = a2[1];
  v12 = 0;
  v13 = *(_DWORD *)(v11 + 180);
  if ( v13 )
  {
    while ( 1 )
    {
      result = v12;
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 8LL * v12) + 128LL) )
        break;
      if ( ++v12 >= v13 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v14 = *(_DWORD *)(v11 + 212);
    v15 = 0;
    if ( !v14 )
      return result;
    while ( 1 )
    {
      result = v15;
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 224) + 8LL * v15) + 128LL) )
        break;
      if ( ++v15 >= v14 )
        return result;
    }
  }
  v16 = *a2;
  result = *(unsigned int *)(*a2 + 32);
  if ( (result & 0x10) == 0 )
  {
    v17 = *(_QWORD *)(v11 + 256);
    if ( v17 )
      return StorPortExtendedFunction(89LL, v16, *(_QWORD *)(v17 + 8LL * a3), -10LL * *(unsigned int *)(v11 + 252));
    else
      return StorPortNotification(4098LL, v16, v11 + 264);
  }
  return result;
}
