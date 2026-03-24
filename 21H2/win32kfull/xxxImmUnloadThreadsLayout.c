/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C012A5B8
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C012A550 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C012A5B8 (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C012A5B8 (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     xxxImmUnloadLayout @ 0x1C01E3BB0 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  int v8; // esi
  int v9; // ebx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r13
  unsigned int v15; // esi
  int v16; // r12d
  bool v17; // r14
  int v18; // ebx
  __int64 result; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // r15
  __int64 v23; // rbp
  __int64 v24; // [rsp+20h] [rbp-2E8h] BYREF
  _QWORD v25[81]; // [rsp+28h] [rbp-2E0h] BYREF

  memset(v25, 0, 0x280uLL);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v24 = a3;
  v8 = 0;
  v9 = 0;
  if ( a2 > 0 )
  {
    v10 = v25;
    v11 = a1;
    do
    {
      if ( v9 >= 16 )
        break;
      v12 = *v11;
      if ( (*(_DWORD *)(*v11 + 488) & 1) == 0 )
      {
        if ( *(_QWORD *)(v12 + 784) )
        {
          v21 = *(_QWORD *)(v12 + 440);
          if ( v21 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v21 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v11, (__int64)&v25[5 * v9++ + 1]);
              *v10 = *v11;
              v10 += 5;
            }
          }
        }
      }
      ++v8;
      ++v11;
    }
    while ( v8 < a2 );
  }
  v13 = v8 + 1;
  if ( v9 != 16 )
    v13 = v8;
  if ( v13 < a2 )
    return ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *, _QWORD))xxxImmUnloadThreadsLayout)(
             &a1[v13],
             (unsigned int)(a2 - v13),
             &v24,
             a4);
  v14 = v9;
  v15 = 1;
  v16 = v9 - 1;
  v17 = a4 != 2;
  if ( a4 != 2 )
    v15 = a4;
  while ( 1 )
  {
    v18 = v16;
    result = v14 - 1;
    v20 = &v24;
    do
    {
      if ( v18 >= 0 )
      {
        v22 = &v20[5 * result + 1];
        v23 = (__int64)&v20[4 * v18 + 2 + v18];
        do
        {
          if ( (*(_DWORD *)(*v22 + 488) & 1) == 0 )
            xxxImmUnloadLayout(*v22, v15);
          if ( v17 )
            PopAndFreeW32ThreadLock(v23);
          v23 -= 40LL;
          v22 -= 5;
          --v18;
        }
        while ( v18 >= 0 );
      }
      v20 = (__int64 *)*v20;
      v18 = 15;
      result = 15LL;
    }
    while ( v20 );
    if ( v17 )
      break;
    v17 = 1;
    v15 = 2;
  }
  return result;
}
