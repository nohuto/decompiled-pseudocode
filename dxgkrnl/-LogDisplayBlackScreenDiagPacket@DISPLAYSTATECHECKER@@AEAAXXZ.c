void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(DISPLAYSTATECHECKER *this)
{
  unsigned int BlackScreenDiagDataSize; // esi
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v3; // rax
  struct _DXGK_DIAG_HEADER *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+50h] [rbp-10h]

  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v3 = (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, 256LL);
  v4 = v3;
  if ( v3 )
  {
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(this, v3, BlackScreenDiagDataSize);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
    DxgkWriteDiagEntry(v4, CurrentProcessSessionId);
    v15 = 0x3800000033LL;
    v18 = 0LL;
    DWORD2(v18) = 0;
    *(_QWORD *)&v18 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v19 = 0LL;
    if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
      LODWORD(v19) = v19 | 1;
    v14 = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v15, v14);
    operator delete(v4);
  }
  else
  {
    WdLogSingleEntry1(3LL, 494LL);
  }
}
