/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0248
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiDrainSystemAccessLog @ 0x14025B3E0 (MiDrainSystemAccessLog.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-D0h]
  _QWORD v13[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[24]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v15[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v14, 0, 0xB8uLL);
  v12 = 0LL;
  v11 = 0LL;
  memset(v13, 0, sizeof(v13));
  memset(v15, 0, 0x108uLL);
  v13[5] = -1LL;
  LOWORD(v13[0]) = 6;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v13[19] = MiResetAccessBitPte;
  v13[20] = MiResetAccessBitsTail;
  v13[3] = a1;
  BYTE6(v13[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 624) )
  {
    v15[1] = 32;
    v12 = v15;
  }
  if ( (a3 & 0x10) != 0 )
  {
    *((_QWORD *)&v11 + 1) = v14;
    LODWORD(v14[0]) = MiTbFlushType(a1);
    WORD2(v14[0]) = v7;
    v14[2] = v7;
    LODWORD(v14[1]) = 20;
    v14[3] = v7;
  }
  LODWORD(v11) = dword_140C4E828;
  v13[21] = &v11;
  MiWalkPageTables((__int64)v13);
  return MiDrainSystemAccessLog(a1, v8, v9);
}
