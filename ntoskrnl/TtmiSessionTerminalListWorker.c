/*
 * XREFs of TtmiSessionTerminalListWorker @ 0x1409A82BC
 * Callers:
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     TtmiEvacuateDevices @ 0x14099FC34 (TtmiEvacuateDevices.c)
 *     TtmiPurgeSessionPowerRequestEntries @ 0x1409A19B0 (TtmiPurgeSessionPowerRequestEntries.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1409A1DF0 (TtmiUpdateActiveTerminalCount.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1409A228C (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogTerminalCleanup @ 0x1409A7078 (TtmiLogTerminalCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1409A8CC8 (TtmpUpdateTerminalState.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x1409A8F04 (TtmpWriteDisplayStateChangedEvent.c)
 */

void __fastcall TtmiSessionTerminalListWorker(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v3; // r15
  _QWORD *v4; // rbx
  char v5; // bp
  char v9; // r10
  unsigned int *v10; // r14
  _DWORD *v11; // rsi
  int v12; // eax
  unsigned int v13; // r8d
  void ***v14; // rax
  bool v15; // zf
  char v16; // dl
  char v17; // al
  _QWORD *v18; // rcx
  void **v19; // rax
  _BYTE *v20; // rdx
  unsigned int v21; // eax
  __int64 *i; // rcx
  char v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+18h]
  void ***v26; // [rsp+88h] [rbp+20h]

  v3 = a1 + 40;
  v24 = 0;
  v4 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  v23 = 0;
  *a2 = 0;
  *a3 = 0;
  if ( v4 != (_QWORD *)(a1 + 40) )
  {
    v9 = 1;
    do
    {
      v10 = (unsigned int *)v4 + 9;
      v11 = v4;
      v12 = *((_DWORD *)v4 + 9);
      if ( ((unsigned __int8)v12 & (unsigned __int8)v9) != 0 )
      {
        v13 = *((_DWORD *)v4 + 7);
        v14 = (void ***)(v4 + 1);
        v4 = (_QWORD *)v4[1];
        v26 = v14;
        v25 = v13;
        TtmiLogTerminalCleanup();
        if ( (*v10 & 0x10) != 0 )
        {
          v15 = TtmiUpdateActiveTerminalCount((_DWORD *)a1, 0, 26) == 0;
          v17 = v16 + 1;
          if ( !v15 )
            *a2 = v17;
        }
        else
        {
          v17 = 1;
        }
        if ( v11[8] )
          v5 = v17;
        if ( TtmiEvacuateDevices(a1, (__int64)v11) )
          *a3 = 1;
        v18 = *(_QWORD **)v11;
        if ( *(_DWORD **)(*(_QWORD *)v11 + 8LL) != v11 || (v19 = *v26, **v26 != v11) )
          __fastfail(3u);
        *v19 = v18;
        v18[1] = v19;
        *((_QWORD *)v11 + 2) = 0LL;
        TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
        v20 = (_BYTE *)(*(_QWORD *)(a1 + 64) + ((unsigned __int64)v25 >> 3));
        *v20 &= ~(1 << (v25 & 7));
        v21 = *v10;
        *((_QWORD *)v11 + 2) = 0LL;
        v11[6] = 1417180244;
        *v10 = v21 & 0xFFFFFFFC | 2;
        ObfDereferenceObject(v11);
        v9 = 1;
      }
      else if ( (v12 & 4) != 0 )
      {
        *v10 = v12 & 0xFFFFFFFB;
        TtmpUpdateTerminalState(a1, v4, &v24, &v23);
        if ( v23 )
        {
          for ( i = *(__int64 **)(a1 + 96); i != (__int64 *)(a1 + 96); i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 149) == *((_DWORD *)v4 + 7) )
              *((_DWORD *)i + 150) |= 0x40u;
          }
          TtmpWriteDisplayStateChangedEvent(a1, v4);
          v9 = 1;
          *a3 = 1;
        }
        else
        {
          v9 = 1;
        }
        if ( v24 && TtmiUpdateActiveTerminalCount((_DWORD *)a1, (*v10 & 0x10) != 0, *((_DWORD *)v4 + 11)) )
          *a2 = v9;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != (_QWORD *)v3 );
    if ( v5 )
      TtmiPurgeSessionPowerRequestEntries(a1);
  }
}
