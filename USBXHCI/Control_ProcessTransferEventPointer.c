/*
 * XREFs of Control_ProcessTransferEventPointer @ 0x1C00427B4
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042974 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     Control_FindTrbMatch @ 0x1C00425F4 (Control_FindTrbMatch.c)
 */

bool __fastcall Control_ProcessTransferEventPointer(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int *a5)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  bool TrbMatch; // si
  __int64 v13; // rcx
  int v14; // edx
  int v15; // edx
  unsigned int v16; // r14d
  unsigned int v17; // edi
  unsigned int v18; // r9d
  __int64 v19; // rbp
  int v20; // eax
  int *v21; // rcx
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *a3;
  v10 = 16LL * *(unsigned int *)(a1 + 192);
  v23 = 0;
  TrbMatch = 0;
  v24 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + v10;
  if ( v8 )
  {
    if ( v8 == v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v15,
          14,
          16,
          (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      v6 = *(_DWORD *)(a2 + 128);
      TrbMatch = 1;
    }
    else
    {
      v16 = *(_DWORD *)(a2 + 144);
      v17 = *(_DWORD *)(a2 + 160);
      if ( v16 <= v17 )
        v18 = *(_DWORD *)(a2 + 160);
      else
        v18 = *(_DWORD *)(a1 + 196);
      v19 = *(_QWORD *)(a2 + 136);
      TrbMatch = Control_FindTrbMatch((__int64)a3, v19, v16, v18, &v23, &v24);
      if ( !TrbMatch && v16 > v17 )
        TrbMatch = Control_FindTrbMatch((__int64)a3, v19, 0, v17, &v23, &v24);
      v6 = v23;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v14,
      14,
      15,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  v20 = v24;
  v21 = a5;
  *a4 = v6;
  *v21 = v20;
  return TrbMatch;
}
