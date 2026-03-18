/*
 * XREFs of GdiThreadCallout @ 0x1C008AB80
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C008AD98 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C008AE88 (HmgFreeDcAttr.c)
 *     bDeletePalette @ 0x1C008B2F0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  _QWORD **v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r15
  void (__fastcall *v17)(__int64); // rbp

  v2 = 0;
  if ( qword_1C0294A88 && (int)qword_1C0294A88() >= 0 && qword_1C0294A90 && (unsigned int)qword_1C0294A90() )
  {
    if ( a2 )
    {
      if ( a2 == 1 && qword_1C0294AA8 && (int)qword_1C0294AA8() >= 0 && qword_1C0294AB0 )
        qword_1C0294AB0();
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 96) = ThreadWin32Thread + 88;
        *(_QWORD *)(ThreadWin32Thread + 88) = ThreadWin32Thread + 88;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      v9 = 0LL;
      v10 = (__int64 *)PsGetThreadWin32Thread(a1);
      if ( v10 )
        v9 = *v10;
      if ( qword_1C0294DE8 && (int)qword_1C0294DE8() >= 0 && qword_1C0294DF0 )
        qword_1C0294DF0();
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 )
        HmgFreeDcAttr(v11);
      vUMPDThreadCleanup((struct _W32THREAD *)v9);
      v12 = (_QWORD **)(v9 + 88);
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == v12 )
          break;
        if ( v13 )
        {
          KeEnterCriticalRegion();
          v16 = v13[2];
          v17 = (void (__fastcall *)(__int64))v13[3];
          PopThreadGuardedObject(v13);
          if ( v17 )
            v17(v16);
          KeLeaveCriticalRegion();
        }
      }
      v14 = *(_QWORD **)(v9 + 288);
      if ( v14 )
      {
        *(_QWORD *)(v9 + 288) = 0LL;
        bDeletePalette(*v14);
        if ( qword_1C0294E28 )
        {
          if ( (int)qword_1C0294E28() >= 0 && qword_1C0294E30 )
            qword_1C0294E30(v14);
        }
      }
      if ( *(_QWORD *)(v9 + 80) )
        DxDdThreadCallout(v9 + 80, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
    v6 = (_QWORD *)PsGetThreadWin32Thread(a1);
    if ( v6 )
      v5 = (_QWORD *)*v6;
    LOBYTE(v7) = 1;
    v5[6] = v5 + 5;
    v5[5] = v5 + 5;
    v5[12] = v5 + 11;
    v5[11] = v5 + 11;
    v5[35] = v5 + 14;
    v5[10] = 0LL;
    return (unsigned int)DxDdThreadCallout(v5 + 10, v7);
  }
  return v2;
}
