char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v5; // r10
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // edx
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  v3 = (_QWORD *)*((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 9);
  v7 = *(_QWORD *)(v5 + 40);
  LOBYTE(v12) = *(_BYTE *)(v3[5] + 4LL) & 1;
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v3[2] == 1LL && v3[3] == 1LL )
    *((_WORD *)a2 + 32) |= 0x40u;
  v9 = v12;
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
              *(_QWORD *)(v5 + 40),
              v6,
              v8,
              *a2,
              v12,
              0,
              1) < 0
    && (v8 <= 1
     || (int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
               *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
               *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
               v6,
               1LL,
               *a2,
               v9,
               0,
               1) < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        20,
        30,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
        *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL));
    }
    return 0;
  }
  LOBYTE(v12) = 0;
  if ( (int)ProcessorMsiSupported((__int64 *)(v6 + 16), &v12) < 0 || !(_BYTE)v12 )
    return 0;
  return ArbFindSuitableRange(a1, a2);
}
