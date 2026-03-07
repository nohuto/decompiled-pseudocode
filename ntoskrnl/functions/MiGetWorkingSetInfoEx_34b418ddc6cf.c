__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v8; // rbx
  int v9; // r12d
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __m128i v20[11]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF

  v19 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v17 = 0LL;
  v18 = 0LL;
  memset(v20, 0, sizeof(v20));
  v8 = 0LL;
  v9 = 0;
  if ( a2 < 0 )
  {
    v10 = 1;
    if ( (a2 & 0x40000000) != 0 )
      v10 = 3;
    LODWORD(v17) = v10;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
LABEL_9:
    v20[2].m128i_i64[1] = -1LL;
    v20[9].m128i_i64[1] = (__int64)MiQueryLeafPte;
    v20[0].m128i_i32[0] = 32774;
    v20[10].m128i_i64[1] = (__int64)&v17;
    v20[0].m128i_i8[7] = MiLockWorkingSetShared(a1);
    if ( v8 && (*(_DWORD *)(v8 + 1124) & 0x20) != 0 )
    {
      v15 = -1073741558;
      goto LABEL_18;
    }
    v11 = *(_QWORD *)(a1 + 128);
    if ( a2 >= 0 )
    {
      v11 -= *(_QWORD *)(a1 + 136);
      if ( !v11 )
        goto LABEL_36;
      if ( a4 < 0x30 )
      {
LABEL_16:
        v14 = *(_QWORD *)(a1 + 128);
        v15 = -1073741820;
        if ( a2 >= 0 )
          a3[1] = v14 - *(_QWORD *)(a1 + 136);
        else
          *a3 = v14;
LABEL_18:
        MiUnlockWorkingSetShared(a1, v20[0].m128i_u8[7]);
        if ( v9 )
          KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        return v15;
      }
      v12 = 2LL;
      v13 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v11 )
      {
LABEL_25:
        *a3 = v18;
LABEL_26:
        v15 = 0;
        goto LABEL_18;
      }
      if ( a4 < 0x10 )
        goto LABEL_16;
      v12 = 1LL;
      v13 = (a4 - 16) >> 3;
    }
    if ( v11 <= v13 + 1 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v20[0].m128i_i32[0] |= 1u;
      v20[1].m128i_i64[1] = a1;
      *((_QWORD *)&v18 + 1) = v13 + 1;
      *((_QWORD *)&v17 + 1) = &a3[v12];
      v19 = v8;
      if ( (unsigned int)MiWalkPageTables(v20) != 5 )
      {
        if ( a2 < 0 )
          goto LABEL_25;
LABEL_36:
        a3[1] = v18;
        goto LABEL_26;
      }
    }
    goto LABEL_16;
  }
  v8 = a1 - 1664;
  if ( (PVOID)(a1 - 1664) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v8 )
    {
      KeStackAttachProcess((PRKPROCESS)(a1 - 1664), &ApcState);
      v9 = 1;
    }
    goto LABEL_9;
  }
  if ( a2 >= 0 )
    a3[1] = 0LL;
  else
    *a3 = 0LL;
  return 0LL;
}
