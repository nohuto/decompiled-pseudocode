char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // rsi
  char result; // al
  char *v6; // [rsp+60h] [rbp+20h]
  char *v7; // [rsp+68h] [rbp+28h]

  v1 = *(unsigned __int16 *)(a1 + 332);
  v2 = a1 + 344;
  v3 = a1 + 480;
  if ( *(_BYTE *)(a1 + 20) )
  {
    v7 = (char *)(16 * v1 + *(_QWORD *)v3);
    v6 = &v7[16 * v1];
    NVMeZeroMemory(v7, 16 * *(unsigned __int16 *)(a1 + 332));
    NVMeZeroMemory(v6, 16 * *(unsigned __int16 *)(a1 + 332));
    NVMeSubmissionQueueInit(a1, v2, 0, *(_QWORD *)v2, 0LL, (__int64)v7, (__int64)v6);
    NVMeCompletionQueueInit(a1, v3, 0, *(_QWORD *)v3, 0LL, 0LL, 0LL);
    NVMeZeroMemory(*(void **)v2, *(unsigned __int16 *)(a1 + 332) << 6);
    NVMeZeroMemory(*(void **)v3, 16 * *(unsigned __int16 *)(a1 + 332));
    *(_WORD *)(v2 + 50) = 0;
    result = 1;
    *(_DWORD *)(v3 + 180) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v1), 1701672526LL);
    return 0;
  }
  return result;
}
