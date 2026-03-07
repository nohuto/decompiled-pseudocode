__int64 __fastcall PspQueryLastCallThread(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v5; // r11d
  __int64 v6; // rbx
  __int16 v7; // di
  unsigned __int64 v8; // r11
  int v9; // eax
  signed __int32 v10[4]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]

  if ( ((a3 - 16) & 0xFFFFFFF7) != 0 )
    return 3221225476LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 340);
  _InterlockedOr(v10, 0);
  if ( *(_BYTE *)(a1 + 388) != 5 )
    return 3221225473LL;
  if ( *(_BYTE *)(a1 + 562) != 1 )
    return 3221225473LL;
  v6 = *(_QWORD *)(a1 + 136);
  v7 = *(_WORD *)(a1 + 128);
  v11 = *(unsigned int *)(a1 + 436);
  _InterlockedOr(v10, 0);
  if ( v5 != *(_DWORD *)(a1 + 340) )
    return 3221225473LL;
  v8 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v11) * (unsigned __int64)(unsigned int)KeMaximumIncrement;
  *(_QWORD *)a2 = v6;
  *(_WORD *)(a2 + 8) = v7;
  v9 = 16;
  if ( a3 != 16 )
    *(_QWORD *)(a2 + 16) = v8;
  if ( a4 )
  {
    if ( a3 != 16 )
      v9 = 24;
    *a4 = v9;
  }
  return 0LL;
}
