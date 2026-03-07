__int64 __fastcall NVMeCompletionQueueInit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  unsigned int v8; // edi
  int v9; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 result; // rax
  _QWORD *v19; // rbx
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = (unsigned __int16)a3;
  v20 = 0;
  *(_QWORD *)a2 = a4;
  if ( v7 )
    *(_QWORD *)(a2 + 8) = v7;
  else
    *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v20);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 208) * (2 * v9 + 1));
  v13 = *(_QWORD *)(a1 + 184) + 4096LL;
  v14 = a6;
  *(_WORD *)(a2 + 168) = v9;
  *(_DWORD *)(a2 + 170) = 0;
  *(_DWORD *)(a2 + 176) = 0;
  *(_QWORD *)(a2 + 16) = v13 + v12;
  NVMeCompletionQueuesSubmissionQueuesInit(a1, a2, a3, v14);
  NVMeCompletionQueuesDedicatedSubmissionQueuesInit(a1, a2, v15, a7);
  if ( (_WORD)v9 && (unsigned __int16)v9 <= *(_WORD *)(a1 + 340) )
  {
    v16 = a2 + 336;
    *(_BYTE *)(a2 + 248) = 1;
    *(_QWORD *)(a2 + 336) = a1;
    *(_DWORD *)(a2 + 252) = 0;
    *(_QWORD *)(a2 + 344) = a2;
    if ( (*(_DWORD *)(a1 + 4044) & 2) != 0 )
      v17 = 4105LL;
    else
      v17 = 4106LL;
    result = StorPortNotification(v17, a1, a2 + 264);
    if ( *(_DWORD *)(a2 + 252) )
    {
      v19 = (_QWORD *)(a2 + 256);
      if ( !*v19 )
      {
        result = StorPortExtendedFunction(0LL, a1, 8 * (unsigned int)*(unsigned __int16 *)(a1 + 242), 1701672526LL);
        if ( *v19 )
        {
          if ( *(_WORD *)(a1 + 242) )
          {
            do
            {
              a5 = *(_QWORD *)(*v19 + 8LL * v8);
              StorPortExtendedFunction(88LL, a1, NVMeIoPollingTimerExCallback, v16);
              result = *(unsigned __int16 *)(a1 + 242);
              ++v8;
            }
            while ( v8 < (unsigned int)result );
          }
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a2 + 248) = 0;
    return StorPortNotification(4097LL, a1, a2 + 24);
  }
  return result;
}
