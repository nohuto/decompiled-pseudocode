/*
 * XREFs of ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01DDA38
 * Callers:
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01DDA38 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C0209200 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C0121D98 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01DDA38 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DE0F0 (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall xxxImmActivateAndUnloadThreadsLayout(
        struct tagTHREADINFO **a1,
        int a2,
        struct tagTLBLOCK *a3,
        struct tagKL *a4,
        unsigned int a5)
{
  int v8; // edi
  int v9; // edx
  int v10; // r14d
  struct tagTHREADINFO *v11; // rcx
  char v12; // bl
  struct tagTHREADINFO *v13; // rcx
  PRKPROCESS *v14; // rcx
  struct tagTHREADINFO *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  int v19; // ebx
  struct tagTLBLOCK **v20; // r14
  __int64 v21; // rax
  __int64 v22; // r12
  _DWORD *v23; // r15
  int v24; // edx
  struct tagTHREADINFO *v25; // rcx
  struct tagTLBLOCK **v26; // rbx
  int v27; // edi
  struct tagTLBLOCK **v28; // r14
  int v29; // [rsp+34h] [rbp-344h]
  int v30; // [rsp+38h] [rbp-340h]
  __int64 ThreadWin32Thread; // [rsp+58h] [rbp-320h]
  _QWORD v34[4]; // [rsp+80h] [rbp-2F8h] BYREF
  struct tagTLBLOCK *v35; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v36[81]; // [rsp+A8h] [rbp-2D0h] BYREF

  memset(v36, 0, 0x280uLL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35 = a3;
  v8 = 0;
  v9 = 0;
  v29 = 0;
  while ( v8 < a2 )
  {
    v10 = 0;
    v11 = a1[v8];
    if ( (*((_DWORD *)v11 + 122) & 1) != 0 )
    {
      v10 = -65536;
    }
    else if ( *((struct tagKL **)v11 + 55) != a4 )
    {
      if ( *((_QWORD *)v11 + 98) )
      {
        v10 = 1;
      }
      else
      {
        v12 = 0;
        v34[0] = (char *)v11 + 440;
        v34[1] = a4;
        HMAssignmentLock(v34, 0LL);
        v13 = a1[v8];
        if ( *((_QWORD *)v13 + 60) != *(_QWORD *)(ThreadWin32Thread + 480) )
        {
          v14 = (PRKPROCESS *)*((_QWORD *)v13 + 53);
          if ( v14 != *(PRKPROCESS **)(ThreadWin32Thread + 424) )
          {
            KeAttachProcess(*v14);
            v12 = 1;
          }
        }
        *(_WORD *)(*((_QWORD *)a1[v8] + 60) + 152LL) = *((_WORD *)a4 + 36);
        *(_QWORD *)(*((_QWORD *)a1[v8] + 60) + 144LL) = *((_QWORD *)a4 + 5);
        if ( v12 )
          KeDetachProcess();
        v9 = v29;
      }
    }
    v15 = a1[v8];
    if ( *((_QWORD *)v15 + 98) )
    {
      v16 = *((_QWORD *)v15 + 55);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v10 != -65536 )
          v10 |= 2u;
      }
    }
    if ( ((v10 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 5LL * v9;
      LockW32Thread((__int64)a1[v8], (__int64)&v36[5 * v9 + 1]);
      v36[v17] = a1[v8];
      LODWORD(v36[v17 + 4]) = v10;
      v9 = v29 + 1;
      v29 = v9;
      if ( v9 == 16 )
      {
        v18 = v8 + 1;
        if ( v18 < a2 )
        {
          xxxImmActivateAndUnloadThreadsLayout(&a1[v18], a2 - v18, (struct tagTLBLOCK *)&v35, a4, a5);
          return;
        }
        break;
      }
    }
    ++v8;
  }
  v30 = v9 - 1;
  v19 = v9 - 1;
  v20 = &v35;
  v21 = v9 - 1;
  v22 = v21;
  while ( v20 )
  {
    v23 = &v20[5 * v21 + 5];
    while ( v19 >= 0 )
    {
      v24 = *v23;
      if ( (*v23 & 1) != 0 )
      {
        v25 = (struct tagTHREADINFO *)*((_QWORD *)v23 - 4);
        if ( (*((_DWORD *)v25 + 122) & 1) == 0 )
        {
          xxxImmActivateLayout(v25, a4);
          v24 = *v23;
        }
      }
      if ( (v24 & 3) == 1 )
        PopAndFreeW32ThreadLock((__int64)(&v20[4 * v19 + 2] + v19));
      --v19;
      v23 -= 10;
    }
    v19 = 15;
    v21 = 15LL;
    v20 = (struct tagTLBLOCK **)*v20;
  }
  v26 = &v35;
  v27 = v30;
  while ( v26 )
  {
    v28 = &v26[4 * v22 + 1] + v22;
    while ( v27 >= 0 )
    {
      if ( ((_DWORD)v28[4] & 2) != 0 )
      {
        if ( (*((_DWORD *)*v28 + 122) & 1) == 0 )
          xxxImmUnloadLayout(*v28, a5);
        PopAndFreeW32ThreadLock((__int64)(&v26[4 * v27 + 2] + v27));
      }
      --v27;
      v28 -= 5;
    }
    v27 = 15;
    v22 = 15LL;
    v26 = (struct tagTLBLOCK **)*v26;
  }
}
