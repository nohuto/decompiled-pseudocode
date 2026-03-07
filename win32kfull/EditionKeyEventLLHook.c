__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 *a12)
{
  int v14; // r12d
  unsigned int v15; // r15d
  struct tagHOOK *v16; // r8
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rdi
  __int64 v23; // r12
  unsigned int v24; // r14d
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int *v28; // rcx
  __int64 *v29; // r8
  unsigned int v30; // [rsp+34h] [rbp-3Ch] BYREF
  int v31; // [rsp+38h] [rbp-38h] BYREF
  struct tagHOOK *Valid; // [rsp+40h] [rbp-30h]
  __int64 *v33; // [rsp+48h] [rbp-28h]
  _DWORD v34[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v35; // [rsp+60h] [rbp-10h]

  v33 = a12;
  v30 = a4;
  v14 = a3;
  v15 = 0;
  Valid = (struct tagHOOK *)PhkFirstValid(a1, 13);
  v16 = Valid;
  if ( !Valid )
    return 0LL;
  v31 = 0;
  if ( gpqForeground )
  {
    v18 = PtiKbdFromQ(gpqForeground);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 424);
      if ( v19 == *(_QWORD *)(*((_QWORD *)v16 + 2) + 424LL) && (PVOID)grpdeskRitInput != grpdeskLogon )
      {
        if ( (unsigned int)HasHidTable(v18) && (*(_DWORD *)(*(_QWORD *)(v19 + 824) + 100LL) & 0x10) != 0 )
          return 0LL;
        v16 = Valid;
      }
    }
  }
  v20 = *(_QWORD *)(a1 + 1400);
  v34[1] = a6;
  v21 = a2 | 0x2000;
  v34[0] = a5;
  v22 = v30;
  if ( v14 == v30 )
    v21 = a2;
  v34[3] = a9;
  v35 = a10;
  v34[2] = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | HIBYTE(v21);
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1400) = -1;
    *(_DWORD *)(a1 + 1404) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1400) = *a12;
  }
  v23 = *(_QWORD *)(a1 + 1416);
  *(_QWORD *)(a1 + 1416) = v34;
  v24 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 424LL) + 56LL);
  v25 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  InputTraceLogging::Keyboard::CallLowLevelHooks(v24);
  v26 = xxxCallHook2(Valid, 0, v22, (__int64)v34, &v31, 0);
  InputTraceLogging::Keyboard::HandleLowLevelHooks(v24, v25);
  if ( !v26 || (LOBYTE(v27) = a5, *(_QWORD *)(a1 + 1400) = v20, IsSAS(v27, &v30)) || IsUninterceptable(v28, a5) )
  {
    v29 = v33;
    *(_QWORD *)(a1 + 1400) = v20;
    *(_QWORD *)(a1 + 1416) = v23;
    LOBYTE(v15) = (unsigned int)IsGpqForegroundAccessibleExplicit(a8, (const struct tagTHREADINFO *)a1, *v29, a11) == 0;
    return v15;
  }
  else
  {
    *(_QWORD *)(a1 + 1416) = v23;
    return 1LL;
  }
}
