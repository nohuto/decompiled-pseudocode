__int64 __fastcall KeConnectInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // r15
  char IsInterruptTypeSecondary; // bl
  char v7; // r12
  unsigned __int8 v8; // si
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int16 v14; // r12
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  int v22; // eax
  __int64 v23; // rax
  _DWORD v24[6]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+48h] [rbp-28h]
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF
  char v27; // [rsp+B8h] [rbp+48h] BYREF
  char v28; // [rsp+C8h] [rbp+58h]

  v24[0] = 0;
  v4 = a2;
  v27 = 0;
  v26 = 0LL;
  v25 = 0LL;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v28 = IsInterruptTypeSecondary;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread());
  v7 = 0;
  v8 = 0;
  if ( (_BYTE)v4 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a1[v8] + 104) |= 1u;
      v9 = IsInterruptTypeSecondary ? KiConnectSecondaryInterrupt() : KiConnectInterrupt();
      v10 = v9;
      if ( v9 < 0 )
        break;
      IsInterruptTypeSecondary = v28;
      if ( v9 == 295 )
        v7 = 1;
      if ( ++v8 >= (unsigned __int8)v4 )
        goto LABEL_8;
    }
    v24[2] = 31;
    KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
    goto LABEL_34;
  }
LABEL_8:
  v24[4] = 31;
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
  v10 = KiIntSteerConnect((_DWORD)a1, v4, (int)a3 + 8, (unsigned int)&v27, (__int64)&v26);
  if ( (v10 & 0x80000000) != 0 )
    goto LABEL_34;
  v8 = 0;
  if ( (_BYTE)v4 )
  {
    v12 = a1;
    v8 = v4;
    v13 = v4;
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(*v12++ + 104), 0xFFFFFFFE);
      --v13;
    }
    while ( v13 );
  }
  if ( v7 )
  {
    if ( ((int (__fastcall *)(__int64, _DWORD *))off_140C01CF0[0])(a3 + 8, v24) < 0 )
      return 295;
    v22 = v28
        ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), v24[0])
        : ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B88[0])(v24[0], 0LL);
    v10 = v22;
    if ( v22 >= 0 )
      return 295;
    goto LABEL_34;
  }
  if ( v27 )
  {
    v14 = *(_WORD *)(a3 + 40);
    v15 = *(_QWORD *)(a3 + 32);
    *(_WORD *)(a3 + 40) = WORD4(v26);
    *(_QWORD *)(a3 + 32) = v26;
    WORD4(v25) = v14;
    *(_QWORD *)&v25 = v15;
  }
  else
  {
    v14 = WORD4(v25);
    v15 = v25;
  }
  v16 = HalEnableInterrupt(a3);
  v10 = v16;
  if ( v27 )
  {
    *(_WORD *)(a3 + 40) = v14;
    *(_QWORD *)(a3 + 32) = v15;
  }
  if ( v16 < 0 )
  {
LABEL_34:
    if ( v8 )
    {
      LOBYTE(v11) = v8;
      KeDisconnectInterrupt(a1, v11, a3);
    }
    return v10;
  }
  v17 = *(_QWORD *)(*a1 + 168);
  if ( v17 && *(_BYTE *)(v17 + 56) )
  {
    v18 = *(_QWORD *)(v17 + 16);
    v19 = *(_DWORD *)(v18 + 128);
    if ( v19 == 2 )
    {
      if ( !(_BYTE)v4 || (v23 = *(_QWORD *)(*a1 + 272)) == 0 )
        __fastfail(5u);
      *(_BYTE *)(v23 + 16) = 1;
    }
    else if ( v19 != 1 )
    {
      return v10;
    }
    *(_BYTE *)(v18 + 132) = 1;
    _InterlockedExchange(&KiIntTrackRootEnabled, 1);
    if ( (_BYTE)v4 )
    {
      v20 = v4;
      do
      {
        _InterlockedOr((volatile signed __int32 *)(*a1++ + 104), 4u);
        --v20;
      }
      while ( v20 );
    }
  }
  return v10;
}
