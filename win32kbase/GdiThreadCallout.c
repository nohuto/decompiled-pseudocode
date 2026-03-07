__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r15
  void (__fastcall *v17)(__int64); // rbp

  v2 = 0;
  if ( qword_1C02D5BF8 && (int)qword_1C02D5BF8() >= 0 && qword_1C02D5C00 && (unsigned int)qword_1C02D5C00() )
  {
    if ( a2 )
    {
      if ( a2 == 1 && qword_1C02D5C18 && (int)qword_1C02D5C18() >= 0 && qword_1C02D5C20 )
        qword_1C02D5C20();
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
      if ( qword_1C02D5F58 && (int)qword_1C02D5F58() >= 0 && qword_1C02D5F60 )
        qword_1C02D5F60();
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 )
        HmgFreeDcAttr(v11);
      vUMPDThreadCleanup((struct _W32THREAD *)v9);
      v12 = (_QWORD *)(v9 + 88);
      while ( 1 )
      {
        v13 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 == v12 )
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
        if ( qword_1C02D5F98 )
        {
          if ( (int)qword_1C02D5F98() >= 0 && qword_1C02D5FA0 )
            qword_1C02D5FA0(v14);
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
