__int64 __fastcall HalpRegisterDeviceInUse(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v3; // rbp
  unsigned int v4; // esi
  ULONG_PTR v5; // r14
  _QWORD *Memory; // rax
  _QWORD *v7; // rbx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  _QWORD *v11; // rax

  v1 = *(_DWORD *)(a1 + 220);
  if ( v1 == 3 )
    return 0LL;
  if ( v1 > 1 )
    return 3221225485LL;
  if ( HalpFindDevice(a1) )
    return 0LL;
  v3 = 2LL;
  v4 = *(_DWORD *)(a1 + 232) + 2;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 232) + 298);
  if ( HalpMmLoaderBlock )
    Memory = (_QWORD *)HalpMmAllocateMemory((unsigned int)(*(_DWORD *)(a1 + 232) + 298));
  else
    Memory = (_QWORD *)ExAllocatePool2(256LL, v5, 0x646C6148u);
  v7 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, v5);
    v8 = v7 + 3;
    v9 = (_OWORD *)a1;
    v7[2] = v7 + 3;
    do
    {
      *v8 = *v9;
      v8[1] = v9[1];
      v8[2] = v9[2];
      v8[3] = v9[3];
      v8[4] = v9[4];
      v8[5] = v9[5];
      v8[6] = v9[6];
      v8 += 8;
      v10 = v9[7];
      v9 += 8;
      *(v8 - 1) = v10;
      --v3;
    }
    while ( v3 );
    *v8 = *v9;
    if ( *(_DWORD *)(a1 + 220) == 1 && *(_QWORD *)(a1 + 224) )
    {
      v7[31] = v7 + 37;
      wcscpy_s(*(wchar_t **)(v7[2] + 224LL), (unsigned __int64)v4 >> 1, *(const wchar_t **)(a1 + 224));
    }
    v11 = (_QWORD *)qword_140C5FDF0;
    if ( *(__int64 **)qword_140C5FDF0 != &qword_140C5FDE8 )
      __fastfail(3u);
    *v7 = &qword_140C5FDE8;
    v7[1] = v11;
    *v11 = v7;
    ++DevicesList;
    qword_140C5FDF0 = (__int64)v7;
    return 0LL;
  }
  return 3221225626LL;
}
