void *__fastcall NtGdiFONTOBJ_pifi(__int64 a1)
{
  void *v2; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rdi
  _DWORD *v6; // rbx
  void *result; // rax
  struct PFT *v8; // rax
  FONTOBJ *v9; // r14
  IFIMETRICS *v10; // rax
  IFIMETRICS *v11; // r14
  char *v12; // rax
  char v13; // [rsp+58h] [rbp+10h] BYREF
  struct UMPDOBJ *v14; // [rsp+60h] [rbp+18h]
  char *v15; // [rsp+68h] [rbp+20h]

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  v14 = ThreadCurrentObj;
  v6 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v6;
  v15 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  v8 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v9 = (FONTOBJ *)v8;
  if ( v8 )
  {
    v2 = (void *)*((_QWORD *)v5 + 40);
    if ( !v2 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v13, v8);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v13, v5, 0, 0, 0LL);
      v10 = FONTOBJ_pifi(v9);
      v2 = v10;
      if ( v10 && v10 >= MmSystemRangeStart )
      {
        v11 = v10;
        v12 = UMPDOBJ::_AllocUserMem(v5, v10->cjThis, 0);
        v2 = v12;
        if ( v12 )
        {
          memmove(v12, v11, v11->cjThis);
          *((_QWORD *)v5 + 40) = v2;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v13, v5, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v13);
    }
  }
  result = v2;
  --*v6;
  return result;
}
