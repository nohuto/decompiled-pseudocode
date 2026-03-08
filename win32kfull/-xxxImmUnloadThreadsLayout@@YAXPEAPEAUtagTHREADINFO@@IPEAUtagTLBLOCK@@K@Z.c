/*
 * XREFs of ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C00E9D08
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C00E9CA0 (EditionFreeIMEKeyboardLayouts.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C00E9D08 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C00E9D08 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B939C (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall xxxImmUnloadThreadsLayout(struct tagTHREADINFO **a1, int a2, struct tagTLBLOCK *a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // esi
  int v10; // ebx
  __int64 *v11; // r15
  __int64 *v12; // r14
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // esi
  int v17; // r12d
  bool v18; // r14
  __int64 v19; // rax
  int v20; // edi
  struct tagTLBLOCK **v21; // rbx
  __int64 v22; // rdx
  struct tagTHREADINFO **v23; // r15
  __int64 v24; // rbp
  struct tagTLBLOCK *v25; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v26[648]; // [rsp+38h] [rbp-2E0h] BYREF

  memset_0(v26, 0, 0x280uLL);
  PtiCurrentShared(v8);
  v25 = a3;
  v9 = 0;
  v10 = 0;
  if ( a2 > 0 )
  {
    v11 = (__int64 *)v26;
    v12 = (__int64 *)a1;
    do
    {
      if ( v10 >= 16 )
        break;
      v13 = *v12;
      if ( (*(_DWORD *)(*v12 + 488) & 1) == 0 )
      {
        if ( *(_QWORD *)(v13 + 784) )
        {
          v22 = *(_QWORD *)(v13 + 440);
          if ( v22 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v22 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v12, &v26[40 * v10++ + 8]);
              *v11 = *v12;
              v11 += 5;
            }
          }
        }
      }
      ++v9;
      ++v12;
    }
    while ( v9 < a2 );
  }
  v14 = v9 + 1;
  if ( v10 != 16 )
    v14 = v9;
  if ( v14 >= a2 )
  {
    v15 = v10;
    v16 = 1;
    v17 = v10 - 1;
    v18 = a4 != 2;
    if ( a4 != 2 )
      v16 = a4;
    while ( 1 )
    {
      v19 = v15 - 1;
      v20 = v17;
      v21 = &v25;
      if ( v17 >= 0 )
      {
LABEL_23:
        v23 = &v21[5 * v19 + 1];
        v24 = (__int64)(&v21[4 * (unsigned int)v20 + 2] + (unsigned int)v20);
        do
        {
          if ( (*((_DWORD *)*v23 + 122) & 1) == 0 )
            xxxImmUnloadLayout(*v23, v16);
          if ( v18 )
            PopAndFreeW32ThreadLock(v24);
          v24 -= 40LL;
          v23 -= 5;
          --v20;
        }
        while ( v20 >= 0 );
      }
      v21 = (struct tagTLBLOCK **)*v21;
      v20 = 15;
      v19 = 15LL;
      if ( v21 )
        goto LABEL_23;
      if ( v18 )
        return;
      v18 = 1;
      v16 = 2;
    }
  }
  xxxImmUnloadThreadsLayout(&a1[v14], a2 - v14, (struct tagTLBLOCK *)&v25, a4);
}
