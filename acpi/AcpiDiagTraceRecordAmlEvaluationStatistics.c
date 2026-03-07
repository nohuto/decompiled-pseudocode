__int64 __fastcall AcpiDiagTraceRecordAmlEvaluationStatistics(__int64 a1)
{
  unsigned __int128 v1; // rax
  int v2; // r8d
  __int64 v3; // r9
  int v4; // r10d
  int v6; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  _DWORD v11[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  *(_QWORD *)&v1 = *(_QWORD *)(a1 + 456);
  if ( (_QWORD)v1 )
  {
    v1 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v1) * (unsigned __int128)0x346DC5D63886594BuLL;
    if ( (unsigned int)(*((_QWORD *)&v1 + 1) >> 11) >= 0x3E8 && (unsigned int)dword_1C006DCE0 > 5 )
    {
      *(_QWORD *)&v1 = tlgKeywordOn(&dword_1C006DCE0, *((_QWORD *)&v1 + 1), *((_QWORD *)&v1 + 1) >> 11, a1);
      if ( (_BYTE)v1 )
      {
        v9 = 2LL;
        v8 = v11;
        v10 = *(_QWORD *)(v3 + 448);
        v11[0] = *(unsigned __int16 *)(v3 + 440);
        v12 = &v6;
        v11[1] = v4;
        v6 = v2;
        v13 = 4LL;
        *(_QWORD *)&v1 = tlgWriteTransfer_EtwWriteTransfer(
                           (int)&dword_1C006DCE0,
                           (int)&dword_1C0062960,
                           v2,
                           v3,
                           5u,
                           &v7);
      }
    }
  }
  return v1;
}
