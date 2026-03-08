/*
 * XREFs of PiControlQueryDeviceRelations @ 0x14084B7B0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140244BB4 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     PiQueryDeviceRelations @ 0x14084B8CC (PiQueryDeviceRelations.c)
 */

__int64 __fastcall PiControlQueryDeviceRelations(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  __int64 *v7; // rdi
  int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // r9
  int BufferForUserModeCaller; // esi
  int UserModeCallersCopy; // eax
  void *v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v15 = 0LL;
  WORD1(v15) = v4;
  LOWORD(v15) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v14 = 0LL;
  v7 = (__int64 *)(a2 + 12);
  *((_QWORD *)&v15 + 1) = 0LL;
  v8 = *((_DWORD *)a2 + 5);
  if ( v8 && *v7 )
    v9 = 2 * v8;
  else
    v9 = 0;
  v10 = *v7;
  v16 = v9;
  BufferForUserModeCaller = PiControlAllocateBufferForUserModeCaller((__int64 *)&v14, v9, a4, v10);
  if ( BufferForUserModeCaller >= 0 )
  {
    BufferForUserModeCaller = PiControlMakeUserModeCallersCopy(
                                (void **)&v15 + 1,
                                *((void **)a2 + 1),
                                (unsigned __int16)v15,
                                2u,
                                a4,
                                1);
    if ( BufferForUserModeCaller >= 0 )
    {
      BufferForUserModeCaller = PiQueryDeviceRelations(&v15, *((unsigned int *)a2 + 4), &v16, v14);
      if ( v14 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v14, 2 * *((_DWORD *)a2 + 5), 2u, a4, 0);
        if ( UserModeCallersCopy < 0 )
          BufferForUserModeCaller = UserModeCallersCopy;
      }
      *((_DWORD *)a2 + 5) = v16 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v14);
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v15 + 1));
  return (unsigned int)BufferForUserModeCaller;
}
