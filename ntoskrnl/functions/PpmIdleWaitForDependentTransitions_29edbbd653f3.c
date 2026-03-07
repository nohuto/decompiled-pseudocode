__int64 __fastcall PpmIdleWaitForDependentTransitions(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 Prcb; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+32h] [rbp-2Eh]
  __int16 v10; // [rsp+36h] [rbp-2Ah]
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h]
  unsigned int v13; // [rsp+70h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v9 = 0;
  v10 = 0;
  v13 = 0;
  v8 = 0;
  v7[1] = v1;
  v7[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v7) )
  {
    Prcb = KeGetPrcb(v13);
    v12 = 0LL;
    BYTE12(v12) = 1;
    v5 = Prcb;
    v6 = *(_QWORD *)(Prcb + 33600);
    v11[0] = 0LL;
    *(_QWORD *)&v12 = Prcb;
    v11[1] = PopIdleTransitionTimeout;
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(v6 + 672))(*(_QWORD *)(v6 + 688)) )
    {
      if ( (*(_DWORD *)(v5 + 33672) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      PpmIdleTransitionStall(v11);
    }
  }
  return v2;
}
