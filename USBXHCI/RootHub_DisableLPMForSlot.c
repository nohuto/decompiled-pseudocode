char __fastcall RootHub_DisableLPMForSlot(_QWORD *a1, int a2, int a3)
{
  unsigned int v3; // r15d
  __int64 v5; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int *v9; // rbp
  __int64 v10; // r12
  int v11; // edx
  int Ulong; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ebx
  unsigned int v17; // ebx

  v3 = a2 - 1;
  v5 = 16LL * (unsigned int)(a2 - 1);
  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = a1[5];
  v9 = (unsigned int *)(v5 + v8 + 4);
  v10 = v5 + v8;
  RootHub_AcquireReadModifyWriteLock((__int64)a1, v3);
  if ( *(_BYTE *)(a1[6] + 120LL * v3 + 20) )
  {
    Ulong = XilRegister_ReadUlong(v7, v9);
    if ( BYTE1(Ulong) == a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(a1[1] + 72LL),
          v11,
          11,
          258,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          Ulong);
      }
      v13 = Ulong & 0xFFFE0007;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(a1[1] + 72LL),
          v11,
          11,
          259,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v13);
      }
      XilRegister_WriteUlong(v7, v9, v13);
      v14 = XilRegister_ReadUlong(v7, (unsigned int *)(v10 + 12));
      v16 = v14;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(a1[1] + 72LL),
          v15,
          11,
          260,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v14);
      }
      v17 = v16 & 0xFFFFC000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(a1[1] + 72LL),
          v15,
          11,
          261,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v17);
      }
      XilRegister_WriteUlong(v7, (_DWORD *)(v10 + 12), v17);
      XilRegister_ReadUlong(v7, v9);
      *(_BYTE *)(a1[6] + 120LL * v3 + 20) = 0;
    }
  }
  return RootHub_ReleaseReadModifyWriteLock((__int64)a1, v3);
}
