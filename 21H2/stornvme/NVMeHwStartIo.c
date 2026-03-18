/*
 * XREFs of NVMeHwStartIo @ 0x1C0003A70
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0003C20 (ProcessCommandInSpecificQueue.c)
 *     GetSrbScsiAddress @ 0x1C00051F4 (GetSrbScsiAddress.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     NVMeControllerPowerDown @ 0x1C0018BDC (NVMeControllerPowerDown.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // r14d
  __int64 v8; // rsi
  int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r9
  __int64 v16; // rax
  bool v17; // cl
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int16 v21; // ax
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF
  char v23; // [rsp+78h] [rbp+10h] BYREF
  char v24; // [rsp+80h] [rbp+18h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v6 == 40 )
  {
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 56);
    v7 = v6;
  }
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v9 = 0;
  if ( v7 )
  {
    a3 = 0x1C0000000uLL;
    switch ( v7 )
    {
      case 2:
      case 9:
      case 10:
        goto LABEL_6;
      case 7:
        v22 = 0;
        if ( *(_BYTE *)(a1 + 20) )
          NVMeControllerPowerDown(a1);
        GetSrbScsiAddress(a2, &v24, &v23, &v22);
        if ( v22 < *(_DWORD *)(a1 + 224) )
        {
          v19 = *(_QWORD *)(a1 + 8LL * v22 + 1752);
          if ( v19 )
            *(_DWORD *)(v19 + 20) |= 2u;
        }
        *(_BYTE *)(a2 + 3) = 1;
        break;
      case 37:
        if ( (_BYTE)v6 == 40 )
        {
          v16 = *(unsigned int *)(a2 + 120);
          v17 = *(_DWORD *)(v16 + a2 + 16) == 1;
          v18 = *(_DWORD *)(v16 + a2 + 12);
        }
        else
        {
          v18 = *(_DWORD *)(a2 + 8);
          v17 = *(_DWORD *)(a2 + 64) == 1;
        }
        if ( !v17 )
          goto LABEL_23;
        if ( v18 == 2 || v18 == 23 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDF6 | 8;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else if ( v18 == 4 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDFC | 2;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else
        {
LABEL_23:
          *(_BYTE *)(a2 + 3) = 6;
        }
        break;
      default:
        goto LABEL_23;
    }
  }
  else
  {
LABEL_6:
    if ( (*(_DWORD *)(a1 + 32) & 1) == 0 )
    {
      LOBYTE(a4) = 37;
      LOBYTE(a3) = 5;
      LOBYTE(v6) = 8;
      NVMeSetSenseData(a2, v6, a3, a4);
    }
  }
  if ( *(_BYTE *)(a2 + 3) )
  {
    StorPortNotification(0LL, a1, a2, a4);
    return 1;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_QWORD *)(a2 + 104);
  else
    v10 = *(_QWORD *)(a2 + 56);
  if ( (v10 & 0xFFF) != 0 )
    v10 = v10 - (v10 & 0xFFF) + 4096;
  v11 = *(unsigned __int16 *)(v10 + 4244);
  if ( (_WORD)v11 )
  {
    v12 = *(_WORD *)(a1 + 302);
    v13 = 136 * v11 + *(_QWORD *)(a1 + 792) - 136LL;
  }
  else
  {
    v12 = *(_WORD *)(a1 + 300);
    v13 = a1 + 312;
  }
  if ( !(unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v13, v12) )
  {
    if ( *(_BYTE *)(a2 + 3) != 5 )
      goto LABEL_52;
    if ( !*(_WORD *)(v13 + 40) )
    {
      while ( 1 )
      {
        StorPortExtendedFunction(81LL, a1, 1000LL, v14);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 848));
        if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v13, v12) )
          goto LABEL_16;
        if ( (unsigned int)++v9 >= 4 )
          goto LABEL_52;
      }
    }
    v20 = *(unsigned __int16 *)(a1 + 304);
    *(_BYTE *)(v10 + 4253) |= 0x10u;
    v22 = v20;
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v13 + 40) + 1) % *(unsigned __int16 *)(a1 + 304) )
          v21 = ((unsigned int)*(unsigned __int16 *)(v13 + 40) + 1) % *(unsigned __int16 *)(a1 + 304);
        *(_WORD *)(v10 + 4244) = v21;
        v13 = 136LL * v21 + *(_QWORD *)(a1 + 792) - 136LL;
        if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v13, v12) )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v9 < v22 )
          continue;
        goto LABEL_52;
      }
    }
    else
    {
LABEL_52:
      NVMeRequestComplete(a1, a2, 0LL);
    }
  }
LABEL_16:
  if ( v7 == 10 && (*(_BYTE *)(v8 + 4253) & 1) != 0 )
    WaitForCommandCompleteWithCustomTimeout(a1);
  return 1;
}
