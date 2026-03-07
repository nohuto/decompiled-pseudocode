_DWORD *__fastcall xxxMessageEvent(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *result; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 ThreadId; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  result = (_DWORD *)Win32AllocPoolWithQuotaZInit(120LL, 946107221LL);
  v11 = (__int64)result;
  if ( result )
  {
    *result = a5;
    result[1] = 7340033;
    result[2] = 112;
    if ( a1 )
      v12 = *a1;
    else
      v12 = 0LL;
    *(_QWORD *)(v11 + 16) = v12;
    *(_DWORD *)(v11 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ThreadId = HMValidateHandleNoSecure(a3, 1);
    if ( ThreadId )
      ThreadId = (__int64)PsGetThreadId(**(PETHREAD **)(ThreadId + 16));
    *(_QWORD *)(v11 + 32) = ThreadId;
    *(_DWORD *)(v11 + 40) = a2;
    *(_QWORD *)(v11 + 48) = a3;
    *(_QWORD *)(v11 + 56) = a4;
    if ( a6 )
    {
      v14 = *(_OWORD *)(a6 + 16);
      *(_OWORD *)(v11 + 64) = *(_OWORD *)a6;
      v15 = *(_OWORD *)(a6 + 32);
      *(_OWORD *)(v11 + 80) = v14;
      *(_QWORD *)&v14 = *(_QWORD *)(a6 + 48);
      *(_OWORD *)(v11 + 96) = v15;
      *(_QWORD *)(v11 + 112) = v14;
    }
    PushW32ThreadLock(v11, &v16, (__int64)Win32FreePool);
    xxxCsEvent((void *)v11, 0x70u);
    return (_DWORD *)PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  }
  return result;
}
