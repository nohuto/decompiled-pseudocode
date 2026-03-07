void __fastcall xxxImmUnloadLayout(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int128 *v3; // rdi
  __int64 v4; // r8
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  v10[2] = 0LL;
  v2 = a1;
  v11 = 0LL;
  v3 = (__int128 *)a2;
  if ( *(_QWORD *)(a1 + 784) )
  {
    v4 = *(_QWORD *)(a1 + 440);
    if ( v4 )
    {
      if ( a2 != 1 || (a1 = gpsi, (*gpsi & 4) != 0) || (a1 = 57344LL, (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000) )
      {
        v5 = PtiCurrentShared(a1);
        v6 = *(_QWORD *)(v2 + 784);
        v10[0] = *((_QWORD *)v5 + 52);
        *((_QWORD *)v5 + 52) = v10;
        v10[1] = v6;
        HMLockObject(v6);
        xxxSendTransformableMessageTimeout(
          *(struct tagWND **)(v2 + 784),
          0x287u,
          0x11uLL,
          v3,
          8u,
          gdwHungAppTimeout,
          (unsigned __int64 *)&v11,
          1,
          0);
        ThreadUnlock1(v8, v7, v9);
      }
    }
  }
}
