void __fastcall TdrCompleteRecoveryContext(char *P, struct _LUID *a2, bool a3)
{
  __int64 v4; // rcx
  char v6; // r15
  __int64 v7; // rcx
  DXGADAPTER *v8; // rcx
  int v9; // ebx
  unsigned int v10; // esi
  int v11; // edi
  __int64 v12; // r11
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( P )
  {
    v4 = *((_QWORD *)P + 6);
    v6 = (char)a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 2928LL) + 736LL)
                                                          + 8LL)
                                              + 472LL))(
        v4,
        0LL);
    if ( *((_DWORD *)P + 4) != 6 )
    {
      a2 = (struct _LUID *)&g_TdrHistory;
      v7 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_1C013C1A4, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v7 + 3) = *((_QWORD *)P + 15);
      *((_DWORD *)&g_TdrHistory + 2 * v7 + 8) = *((_DWORD *)P + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v7 + 40) = *(UUID *)(P + 56);
      *((_QWORD *)&g_TdrHistory + v7 + 7) = *((_QWORD *)P + 9);
    }
    v8 = (DXGADAPTER *)*((_QWORD *)P + 4);
    v9 = *((_DWORD *)P + 20);
    v10 = *((_DWORD *)P + 4);
    v13 = 0LL;
    v11 = *((_DWORD *)v8 + 60);
    DXGADAPTER::IsAdapterSessionized(v8, a2, 0LL, &v13);
    DxgkLogCodePointPacketForSession(0x18u, v13, v10, v11, v9, v12);
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)P);
    if ( v6 )
    {
      *((_DWORD *)P + 29) &= ~1u;
      TdrUpdateDbgReport((struct _TDR_RECOVERY_CONTEXT *)P, 0);
    }
    TdrDereferenceRecoveryContext(P, a3);
  }
}
