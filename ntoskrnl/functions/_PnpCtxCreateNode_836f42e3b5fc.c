__int64 __fastcall PnpCtxCreateNode(
        int *a1,
        const WCHAR *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        HANDLE SourceHandle,
        UNICODE_STRING **a9)
{
  wchar_t *v12; // rsi
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // ebp
  int v20; // ebp
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF

  v12 = 0LL;
  v21 = 0LL;
  *a9 = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 152LL, 1380994640LL);
  v15 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( RtlCreateUnicodeString(Pool2 + 2, a2) )
  {
    *(_DWORD *)&v15[3].Length = a3;
    v16 = SysCtxOpenMachine(a4, a5, a6, a7, SourceHandle, *a1, (__int64)&v21);
    v12 = (wchar_t *)v21;
    v17 = v16;
    if ( v16 >= 0 )
    {
      if ( *(_DWORD *)v21 >= 0xA000000u )
      {
        *(_QWORD *)&v15[4].Length = 0LL;
        v15[4].Buffer = 0LL;
        *(_QWORD *)&v15[5].Length = 0LL;
        v15[5].Buffer = 0LL;
        *(_QWORD *)&v15[6].Length = 0LL;
        v15[6].Buffer = 0LL;
        *(_QWORD *)&v15[7].Length = 0LL;
        *(_QWORD *)&v15[8].Length = 0LL;
        v15[8].Buffer = 0LL;
        *(_QWORD *)&v15[9].Length = 0LL;
        v18 = a3 - 1;
        if ( v18 )
        {
          v20 = v18 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              v17 = -1073741811;
              goto LABEL_12;
            }
            *(_QWORD *)&v15[4].Length = -1LL;
            *(_QWORD *)&v15[6].Length = -1LL;
            v15[6].Buffer = (wchar_t *)-1LL;
            *(_QWORD *)&v15[7].Length = -1LL;
            *(_QWORD *)&v15[8].Length = -1LL;
            v15[8].Buffer = (wchar_t *)-1LL;
            *(_QWORD *)&v15[9].Length = -1LL;
          }
        }
        v15[3].Buffer = v12;
        v12 = 0LL;
        *a9 = v15;
        goto LABEL_7;
      }
      v17 = -1073741637;
    }
  }
  else
  {
    v17 = -1073741801;
  }
LABEL_12:
  ExFreePoolWithTag(v15, 0);
LABEL_7:
  if ( v12 )
    SysCtxCloseMachine(v12);
  return v17;
}
