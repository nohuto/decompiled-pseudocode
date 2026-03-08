/*
 * XREFs of UsbhDerefPdo @ 0x1C00019F0
 * Callers:
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhBusResume_Action @ 0x1C0012650 (UsbhBusResume_Action.c)
 *     UsbhBusPause_Action @ 0x1C0012DC0 (UsbhBusPause_Action.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C9E8 (UsbhBusUnlatchPdo.c)
 *     UsbhResetPortData @ 0x1C0057774 (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDerefPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rdx
  __int64 **v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1348891236;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_QWORD *)(a2 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v9 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v10 = (__int64 *)(v9 + 1272);
  v11 = *(__int64 **)(v9 + 1272);
  if ( v11 == (__int64 *)(v9 + 1272) )
  {
LABEL_26:
    v16 = (_DWORD *)(v9 + 1288);
    v17 = *(_DWORD *)(v9 + 1288);
    if ( v17 )
      *v16 = v17 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v12 = *(_QWORD *)(a1 + 64);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
            *(_DWORD *)v13 = 1064591724;
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)(v13 + 16) = v9;
            *(_QWORD *)(v13 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v11 + 4) == (_DWORD)v4 && v11[4] == a3 )
        break;
      v11 = (__int64 *)*v11;
      if ( v11 == v10 )
        goto LABEL_26;
    }
    v14 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 || (v15 = (__int64 **)v11[1], *v15 != v11) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (__int64)v15;
    ExFreePoolWithTag(v11 - 1, 0);
    v16 = (_DWORD *)(v9 + 1288);
  }
  if ( (__int64 *)*v10 == v10 && !*v16 )
    KeSetEvent((PRKEVENT)(v9 + 1296), 0, 0);
}
