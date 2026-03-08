/*
 * XREFs of ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B8CF4
 * Callers:
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B8CF4 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01E9D50 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C00F5318 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B8CF4 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B939C (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall xxxImmActivateAndUnloadThreadsLayout(
        struct tagTHREADINFO **a1,
        int a2,
        struct tagTLBLOCK *a3,
        struct tagKL *a4,
        unsigned int a5)
{
  struct tagTHREADINFO **v7; // r12
  __int64 v8; // rcx
  int v9; // edi
  int v10; // r13d
  int v11; // r14d
  __int64 *v12; // r12
  __int64 v13; // rcx
  char v14; // bl
  PRKPROCESS *v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  struct tagTLBLOCK **v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  _DWORD *v22; // r14
  struct tagTHREADINFO *v23; // rcx
  struct tagTLBLOCK **v24; // rbx
  int v25; // edi
  struct tagTLBLOCK **v26; // r14
  struct tagTHREADINFO *v30; // [rsp+60h] [rbp-318h]
  _QWORD v31[4]; // [rsp+80h] [rbp-2F8h] BYREF
  struct tagTLBLOCK *v32; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v33[81]; // [rsp+A8h] [rbp-2D0h] BYREF

  v7 = a1;
  memset_0(v33, 0, 0x280uLL);
  v30 = PtiCurrentShared(v8);
  v32 = a3;
  v9 = 0;
  v10 = 0;
  while ( v9 < a2 )
  {
    v11 = 0;
    v12 = (__int64 *)&v7[v9];
    v13 = *v12;
    if ( (*(_DWORD *)(*v12 + 488) & 1) != 0 )
    {
      v11 = -65536;
    }
    else if ( *(struct tagKL **)(v13 + 440) != a4 )
    {
      if ( *(_QWORD *)(v13 + 784) )
      {
        v11 = 1;
      }
      else
      {
        v14 = 0;
        v31[0] = v13 + 440;
        v31[1] = a4;
        HMAssignmentLock(v31, 0LL);
        if ( *(_QWORD *)(*v12 + 480) != *((_QWORD *)v30 + 60) )
        {
          v15 = *(PRKPROCESS **)(*v12 + 424);
          if ( v15 != *((PRKPROCESS **)v30 + 53) )
          {
            KeAttachProcess(*v15);
            v14 = 1;
          }
        }
        *(_WORD *)(*(_QWORD *)(*v12 + 480) + 152LL) = *((_WORD *)a4 + 36);
        *(_QWORD *)(*(_QWORD *)(*v12 + 480) + 144LL) = *((_QWORD *)a4 + 5);
        if ( v14 )
          KeDetachProcess();
      }
    }
    if ( *(_QWORD *)(*v12 + 784) )
    {
      v16 = *(_QWORD *)(*v12 + 440);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v11 != -65536 )
          v11 |= 2u;
      }
    }
    if ( ((v11 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      LockW32Thread(*v12, &v33[5 * v10 + 1]);
      v33[5 * v10] = *v12;
      LODWORD(v33[5 * v10++ + 4]) = v11;
      if ( v10 == 16 )
      {
        v17 = v9 + 1;
        if ( v17 < a2 )
        {
          xxxImmActivateAndUnloadThreadsLayout(&a1[v17], a2 - v17, (struct tagTLBLOCK *)&v32, a4, a5);
          return;
        }
        break;
      }
    }
    ++v9;
    v7 = a1;
  }
  v18 = v10 - 1;
  v19 = &v32;
  v20 = v10 - 1;
  v21 = v20;
  while ( v19 )
  {
    v22 = &v19[5 * v20 + 5];
    while ( v18 >= 0 )
    {
      if ( (*v22 & 1) != 0 )
      {
        v23 = (struct tagTHREADINFO *)*((_QWORD *)v22 - 4);
        if ( (*((_DWORD *)v23 + 122) & 1) == 0 )
          xxxImmActivateLayout(v23, a4);
      }
      if ( (*v22 & 3) == 1 )
        PopAndFreeW32ThreadLock((__int64)(&v19[4 * v18 + 2] + v18));
      --v18;
      v22 -= 10;
    }
    v18 = 15;
    v20 = 15LL;
    v19 = (struct tagTLBLOCK **)*v19;
  }
  v24 = &v32;
  v25 = v10 - 1;
  while ( v24 )
  {
    v26 = &v24[4 * v21 + 1] + v21;
    while ( v25 >= 0 )
    {
      if ( ((_DWORD)v26[4] & 2) != 0 )
      {
        if ( (*((_DWORD *)*v26 + 122) & 1) == 0 )
          xxxImmUnloadLayout(*v26, a5);
        PopAndFreeW32ThreadLock((__int64)(&v24[4 * v25 + 2] + v25));
      }
      --v25;
      v26 -= 5;
    }
    v25 = 15;
    v21 = 15LL;
    v24 = (struct tagTLBLOCK **)*v24;
  }
}
