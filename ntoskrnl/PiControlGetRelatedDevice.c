/*
 * XREFs of PiControlGetRelatedDevice @ 0x1406C7ED0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140244BB4 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     PiGetRelatedDevice @ 0x1406C8018 (PiGetRelatedDevice.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  unsigned int *v7; // rbx
  __int64 v8; // r9
  unsigned int v9; // edx
  int BufferForUserModeCaller; // esi
  int UserModeCallersCopy; // eax
  char v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-30h]
  void *v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v16 = 0LL;
  WORD1(v16) = v4;
  LOWORD(v16) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v15 = 0LL;
  v7 = (unsigned int *)(a2 + 16);
  *((_QWORD *)&v16 + 1) = 0LL;
  v8 = *((_QWORD *)a2 + 3);
  if ( v8 && *v7 )
    v9 = 2 * *v7;
  else
    v9 = 0;
  v17 = v9;
  BufferForUserModeCaller = PiControlAllocateBufferForUserModeCaller((__int64 *)&v15, v9, a4, v8);
  if ( BufferForUserModeCaller >= 0 )
  {
    v13 = a4;
    BufferForUserModeCaller = PiControlMakeUserModeCallersCopy(
                                (char *)&v16 + 8,
                                *((_QWORD *)a2 + 1),
                                (unsigned __int16)v16,
                                2LL,
                                v13,
                                1);
    if ( BufferForUserModeCaller >= 0 )
    {
      BufferForUserModeCaller = PiGetRelatedDevice(&v16, v15, &v17, *((unsigned int *)a2 + 4));
      if ( v15 )
      {
        LOBYTE(v14) = a4;
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a2 + 12, v15, 2 * *v7, 2LL, v14, 0);
        if ( UserModeCallersCopy < 0 )
          BufferForUserModeCaller = UserModeCallersCopy;
      }
      *v7 = v17 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v16 + 1));
  PiControlFreeUserModeCallersBuffer(a4, v15);
  return (unsigned int)BufferForUserModeCaller;
}
