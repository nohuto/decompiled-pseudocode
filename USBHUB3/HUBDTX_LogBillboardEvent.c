int __fastcall HUBDTX_LogBillboardEvent(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  _UNKNOWN **v6; // rax
  __int64 v8; // [rsp+20h] [rbp-148h]
  __int64 v9; // [rsp+28h] [rbp-140h]
  int v10; // [rsp+28h] [rbp-140h]
  __int64 v11; // [rsp+30h] [rbp-138h]
  int v12; // [rsp+30h] [rbp-138h]
  _BYTE v13[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = **(_QWORD **)(a1 + 2648);
  if ( a2 )
  {
    v5 = (unsigned __int8)(*a2 - 2);
    memset(v13, 0, v5 + 2);
    memmove(v13, a2 + 2, (unsigned int)v5);
  }
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)(v4 + 5);
    v10 = *(unsigned __int8 *)(v4 + 4);
    LODWORD(v6) = WPP_RECORDER_SF_DD(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    4u,
                    5u,
                    0x59u,
                    (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                    v10,
                    v12);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
  {
    LOWORD(v11) = *(_WORD *)(v4 + 6);
    LOBYTE(v9) = *(_BYTE *)(v4 + 5);
    LOBYTE(v8) = *(_BYTE *)(v4 + 4);
    LODWORD(v6) = McTemplateK0puuhz_EtwWriteTransfer(
                    (__int64)v13,
                    (__int64)a2,
                    (const GUID *)(a1 + 1516),
                    *(_QWORD *)(a1 + 24),
                    v8,
                    v9,
                    v11,
                    (unsigned __int64)v13 & -(__int64)(a2 != 0LL));
  }
  return (int)v6;
}
