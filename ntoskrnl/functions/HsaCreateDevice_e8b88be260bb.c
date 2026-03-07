__int64 __fastcall HsaCreateDevice(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int16 *v5; // rsi
  int Memory; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v5 = a2;
  v15 = 0LL;
  v16 = 0LL;
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)-1073741275;
    Memory = HsaQueryAcpiDeviceMapping(a1, a2, &v15);
    if ( Memory < 0 )
      return (unsigned int)Memory;
    v5 = (unsigned __int16 *)&v15;
  }
  if ( *(_DWORD *)(a1 + 160) != v5[4] )
    return (unsigned int)-1073741275;
  v8 = v5[6];
  LOBYTE(v8) = v8 & 7;
  if ( ((*(char *)(((unsigned __int64)v5[6] >> 3) + *(_QWORD *)(a1 + 192)) >> v8) & 1) == 0 )
    return (unsigned int)-1073741275;
  v9 = ExtEnvAllocateMemory(v8, 0x30u, &v17);
  v11 = v17;
  Memory = v9;
  if ( v9 < 0 || (v12 = v17 + 40, Memory = ExtEnvAllocateMemory(v10, 8u, (_QWORD *)(v17 + 40)), Memory < 0) )
  {
    if ( v11 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( v13 )
        ExtEnvFreeMemory(v10, v13);
      ExtEnvFreeMemory(v10, v11);
    }
  }
  else
  {
    **(_DWORD **)v12 = v5[6];
    Memory = 0;
    *(_DWORD *)(*(_QWORD *)v12 + 4LL) = v5[5] & 3;
    *a5 = v11;
  }
  return (unsigned int)Memory;
}
