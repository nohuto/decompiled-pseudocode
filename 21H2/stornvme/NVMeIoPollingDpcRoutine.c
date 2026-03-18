/*
 * XREFs of NVMeIoPollingDpcRoutine @ 0x1C00235E0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeIoPollingDpcRoutine(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h]
  _QWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v20; // [rsp+70h] [rbp-10h]

  v17[1] = 0LL;
  v4 = 4LL;
  v19[1] = 0LL;
  v17[0] = 4LL;
  v6 = *a2;
  v18 = 0LL;
  v19[0] = 5LL;
  v20 = 0LL;
  v8 = *(_DWORD *)(v6 + 3844);
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
    ~*(_BYTE *)(*a2 + 3844) & 2 | (unsigned __int64)(((unsigned int)~*(_DWORD *)(*a2 + 3844) >> 3) & 1));
  result = *(unsigned int *)(*a2 + 3844);
  if ( (result & 0x20) == 0 )
  {
    v11 = v17;
    if ( (result & 2) != 0 )
      v11 = v19;
    result = StorPortNotification(4100LL, *a2, v11, v9);
  }
  v12 = a2[1];
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 180);
  if ( v14 )
  {
    while ( 1 )
    {
      result = v13;
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 192) + 8LL * v13) + 128LL) )
        break;
      if ( ++v13 >= v14 )
        return result;
    }
    v15 = *a2;
    result = *(unsigned int *)(*a2 + 32);
    if ( (result & 0x10) == 0 )
    {
      v16 = *(_QWORD *)(v12 + 208);
      if ( v16 )
        return StorPortExtendedFunction(89LL, v15, *(_QWORD *)(v16 + 8LL * a3), -10LL * *(unsigned int *)(v12 + 204));
      else
        return StorPortNotification(4098LL, v15, v12 + 216, a3);
    }
  }
  return result;
}
