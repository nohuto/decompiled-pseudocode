char __fastcall RootHub_Update20HardwareLpmParameters(_QWORD *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v4; // r12d
  __int64 v7; // r14
  __int64 v8; // r15
  int Ulong; // edi
  void *v10; // rdx
  unsigned int v11; // edi
  int v12; // edx
  int v13; // edi
  unsigned int v14; // ebx
  __int64 v15; // rdi

  v4 = a2 - 1;
  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  RootHub_AcquireReadModifyWriteLock((__int64)a1, a2 - 1);
  Ulong = XilRegister_ReadUlong(v7, (unsigned int *)(v8 + 12));
  v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(a1[1] + 72LL),
      (_DWORD)v10,
      11,
      254,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      Ulong);
    v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
  }
  v11 = Ulong & 0xFFFFC000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(a1[1] + 72LL),
      (_DWORD)v10,
      11,
      255,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v11 | (8 * (a3 & 0x80)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2));
  }
  XilRegister_WriteUlong(v7, (_DWORD *)(v8 + 12), v11 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2));
  v13 = XilRegister_ReadUlong(v7, (unsigned int *)(v8 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(a1[1] + 72LL),
      v12,
      11,
      256,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v13);
  }
  v14 = v13 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  v15 = 120LL * v4;
  *(_BYTE *)(v15 + a1[6] + 23) = a3 & 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(a1[1] + 72LL),
      v12,
      11,
      257,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v14);
  }
  XilRegister_WriteUlong(v7, (_DWORD *)(v8 + 4), v14);
  *(_BYTE *)(v15 + a1[6] + 20) = 1;
  return RootHub_ReleaseReadModifyWriteLock((__int64)a1, v4);
}
