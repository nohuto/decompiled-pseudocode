/*
 * XREFs of ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00DAE30
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall AsyncWindowPos(struct tagSMWP *a1)
{
  _QWORD *v1; // rdi
  int v2; // esi
  struct tagQ **v3; // r14
  int v4; // ebx
  int v5; // r8d
  struct tagQ **v6; // r15
  _QWORD *i; // rdx
  unsigned __int64 v8; // rax
  void *v9; // rbp
  _QWORD *v10; // rdx
  _OWORD *v11; // r8
  _OWORD *v12; // rcx

  v1 = (_QWORD *)*((_QWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  while ( v2 )
  {
    while ( 1 )
    {
      if ( *v1 )
      {
        v3 = (struct tagQ **)v1[13];
        if ( v3[54] != *(struct tagQ **)(gptiCurrent + 432LL) )
          break;
      }
      v1 += 21;
      if ( !--v2 )
        return;
    }
    v4 = 0;
    v5 = v2 - 1;
    v6 = v3 + 54;
    for ( i = v1; v5 >= 0; --v5 )
    {
      if ( *i && *(struct tagQ **)(i[13] + 432LL) == *v6 )
        ++v4;
      i += 21;
    }
    v8 = Win32AllocPoolZInit(168LL * v4 + 48, 2004054869LL);
    v9 = (void *)v8;
    v10 = v1;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 28) = v4;
      v11 = (_OWORD *)(v8 + 48);
      for ( *(_QWORD *)(v8 + 40) = v8 + 48; v4; v10 += 21 )
      {
        if ( *v10 && *(struct tagQ **)(v10[13] + 432LL) == *v6 )
        {
          --v4;
          *v11 = *(_OWORD *)v10;
          v12 = v11 + 8;
          v11[1] = *((_OWORD *)v10 + 1);
          v11[2] = *((_OWORD *)v10 + 2);
          v11[3] = *((_OWORD *)v10 + 3);
          v11[4] = *((_OWORD *)v10 + 4);
          v11[5] = *((_OWORD *)v10 + 5);
          v11[6] = *((_OWORD *)v10 + 6);
          v11 = (_OWORD *)((char *)v11 + 168);
          *(v12 - 1) = *((_OWORD *)v10 + 7);
          *v12 = *((_OWORD *)v10 + 8);
          v12[1] = *((_OWORD *)v10 + 9);
          *((_QWORD *)v12 + 4) = v10[20];
          *v10 = 0LL;
        }
      }
      if ( !(unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v3, *v6, 3u, 0LL, 0, v8, (__int64)v3, 0LL) )
        Win32FreePool(v9);
    }
    else
    {
      while ( v4 )
      {
        if ( *(struct tagQ **)(v10[13] + 432LL) == *v6 )
        {
          *v10 = 0LL;
          --v4;
        }
        v10 += 21;
      }
    }
  }
}
