/*
 * XREFs of UsbhDerefPdo @ 0x1C00108A0
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhBusResume_Action @ 0x1C0013AB0 (UsbhBusResume_Action.c)
 *     UsbhBusPause_Action @ 0x1C0014220 (UsbhBusPause_Action.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C104 (UsbhBusUnlatchPdo.c)
 *     UsbhResetPortData @ 0x1C0056EB0 (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDerefPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 **v14; // rdx
  int v15; // eax

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1348891236;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v8 = *(_QWORD *)(a2 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v8 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v9 = (__int64 *)(v8 + 1272);
  v10 = *(__int64 **)(v8 + 1272);
  if ( v10 == (__int64 *)(v8 + 1272) )
  {
LABEL_26:
    v15 = *(_DWORD *)(v8 + 1288);
    if ( v15 )
      *(_DWORD *)(v8 + 1288) = v15 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v11 = *(_QWORD *)(a1 + 64);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
            *(_DWORD *)v12 = 1064591724;
            *(_QWORD *)(v12 + 8) = 0LL;
            *(_QWORD *)(v12 + 16) = v8;
            *(_QWORD *)(v12 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v10 + 4) == (_DWORD)v4 && v10[4] == a3 )
        break;
      v10 = (__int64 *)*v10;
      if ( v10 == v9 )
        goto LABEL_26;
    }
    v13 = (__int64 *)*v10;
    if ( *(__int64 **)(*v10 + 8) != v10 || (v14 = (__int64 **)v10[1], *v14 != v10) )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (__int64)v14;
    ExFreePoolWithTag(v10 - 1, 0);
  }
  if ( (__int64 *)*v9 == v9 && !*(_DWORD *)(v8 + 1288) )
    KeSetEvent((PRKEVENT)(v8 + 1296), 0, 0);
}
