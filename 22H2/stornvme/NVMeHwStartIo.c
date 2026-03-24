/*
 * XREFs of NVMeHwStartIo @ 0x1C0002DA0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0003830 (ProcessCommandInSpecificQueue.c)
 *     NVMeControllerPowerDown @ 0x1C000E1DC (NVMeControllerPowerDown.c)
 *     NVMeRequestComplete @ 0x1C0010AB0 (NVMeRequestComplete.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rax
  int v7; // ecx
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  char v12; // dl
  char v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int16 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r9
  unsigned int v21; // eax
  int v22; // esi
  unsigned int v23; // r12d
  unsigned __int16 v24; // ax
  int v25; // esi

  v4 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v4 == 40 )
    v5 = *(_DWORD *)(a2 + 20);
  else
    v5 = v4;
  if ( v5 != 37
    || ((_BYTE)v4 != 40
      ? (v7 = *(_DWORD *)(a2 + 8), v8 = *(_DWORD *)(a2 + 64) == 1)
      : (v6 = *(unsigned int *)(a2 + 120), v7 = *(_DWORD *)(v6 + a2 + 12), v8 = *(_DWORD *)(v6 + a2 + 16) == 1),
        !v8) )
  {
    if ( (_BYTE)v4 == 40 )
    {
      v10 = *(unsigned int *)(a2 + 52);
      v11 = *(_BYTE *)(v10 + a2 + 10);
      v12 = *(_BYTE *)(v10 + a2 + 9);
      v13 = *(_BYTE *)(v10 + a2 + 8);
    }
    else
    {
      v11 = *(_BYTE *)(a2 + 7);
      v12 = *(_BYTE *)(a2 + 6);
      v13 = *(_BYTE *)(a2 + 5);
    }
    if ( v13
      || v12
      || (unsigned int)v11 >= *(_DWORD *)(a1 + 208)
      || (v14 = a1 + 8LL * v11, (v15 = *(_QWORD *)(v14 + 1736)) == 0) )
    {
      *(_BYTE *)(a2 + 3) = 8;
      goto LABEL_54;
    }
    if ( v5 )
    {
      switch ( v5 )
      {
        case 2:
        case 9:
          break;
        case 7:
          if ( *(_BYTE *)(a1 + 16) )
          {
            NVMeControllerPowerDown(a1);
            v15 = *(_QWORD *)(v14 + 1736);
          }
          *(_DWORD *)(v15 + 20) |= 2u;
          *(_BYTE *)(a2 + 3) = 1;
          break;
        default:
          *(_BYTE *)(a2 + 3) = 6;
          break;
      }
    }
    if ( *(_BYTE *)(a2 + 3) )
      goto LABEL_54;
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v16 = *(_QWORD *)(a2 + 104);
    else
      v16 = *(_QWORD *)(a2 + 56);
    if ( (v16 & 0xFFF) != 0 )
      v16 = v16 - (v16 & 0xFFF) + 4096;
    v17 = *(unsigned __int16 *)(v16 + 4244);
    if ( (_WORD)v17 )
    {
      v18 = *(_WORD *)(a1 + 286);
      v19 = 136 * v17 + *(_QWORD *)(a1 + 776) - 136LL;
    }
    else
    {
      v18 = *(_WORD *)(a1 + 284);
      v19 = a1 + 296;
    }
    if ( !(unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v19, v18) )
    {
      if ( *(_BYTE *)(a2 + 3) != 5 )
        goto LABEL_51;
      if ( !*(_WORD *)(v19 + 40) )
      {
        v25 = 0;
        while ( 1 )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v20);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 832));
          if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v19, v18) )
            return 1;
          if ( (unsigned int)++v25 >= 4 )
            goto LABEL_51;
        }
      }
      v21 = *(unsigned __int16 *)(a1 + 288);
      v22 = 0;
      *(_BYTE *)(v16 + 4253) |= 0x10u;
      v23 = v21;
      if ( v21 )
      {
        while ( 1 )
        {
          v24 = 1;
          if ( ((unsigned int)*(unsigned __int16 *)(v19 + 40) + 1) % *(unsigned __int16 *)(a1 + 288) )
            v24 = ((unsigned int)*(unsigned __int16 *)(v19 + 40) + 1) % *(unsigned __int16 *)(a1 + 288);
          *(_WORD *)(v16 + 4244) = v24;
          v19 = 136LL * v24 + *(_QWORD *)(a1 + 776) - 136LL;
          if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v19, v18) )
            break;
          if ( *(_BYTE *)(a2 + 3) == 5 && ++v22 < v23 )
            continue;
          goto LABEL_51;
        }
      }
      else
      {
LABEL_51:
        NVMeRequestComplete(a1, a2, 0LL);
      }
    }
    return 1;
  }
  if ( v7 == 2 || v7 == 23 )
  {
    v9 = *(_DWORD *)(a1 + 24) & 0xFFFFFFF6 | 8;
    goto LABEL_15;
  }
  if ( v7 == 4 )
  {
    v9 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFC | 2;
LABEL_15:
    *(_DWORD *)(a1 + 24) = v9;
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_54;
  }
  *(_BYTE *)(a2 + 3) = 6;
LABEL_54:
  StorPortNotification(0LL, a1, a2);
  return 1;
}
