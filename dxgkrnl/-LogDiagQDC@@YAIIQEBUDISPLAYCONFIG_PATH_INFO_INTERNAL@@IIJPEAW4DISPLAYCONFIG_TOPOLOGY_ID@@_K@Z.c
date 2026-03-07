__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6,
        unsigned __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v19; // ebx
  unsigned int v21; // eax
  __int64 *v22; // rcx

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v21 = 0;
    if ( a1 )
    {
      v22 = (__int64 *)a2;
      do
      {
        if ( *v22 >= 0 )
          break;
        ++v21;
        v22 += 27;
      }
      while ( v21 < v10 );
    }
    v10 = v21;
  }
  v11 = 200 * v10 + 88;
  v12 = operator new[](v11, 0x43434451u, 256LL);
  v14 = v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_DWORD *)v12 = 48;
    *(_DWORD *)(v12 + 4) = v11;
    *(_OWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_DWORD *)(v12 + 56) = 0;
    *(_DWORD *)(v12 + 52) = v10;
    *(_DWORD *)(v12 + 60) = a5;
    *(_DWORD *)(v12 + 64) = a4 | a3;
    if ( a6 )
      *(_DWORD *)(v12 + 68) = *(_DWORD *)a6;
    *(_DWORD *)(v12 + 72) = 200;
    v15 = -(__int64)a6;
    v16 = (a6 != 0LL ? 4 : 0) | (a2 == 0LL) | 2u;
    *(_QWORD *)(v12 + 80) = a7;
    *(_DWORD *)(v12 + 48) = v16;
    if ( a2 && v10 )
    {
      v16 = v12 + 104;
      v13 = v10;
      v15 = (__int64)a2 + 16;
      do
      {
        *(_QWORD *)(v16 - 16) = *(_QWORD *)(v15 - 16);
        *(_QWORD *)(v16 - 8) = *(_QWORD *)(v15 - 8);
        v17 = *(_QWORD *)v15;
        v15 += 216LL;
        *(_QWORD *)v16 = v17;
        *(_DWORD *)(v16 + 8) = *(_DWORD *)(v15 - 208);
        *(_DWORD *)(v16 + 12) = *(_DWORD *)(v15 - 204);
        *(_OWORD *)(v16 + 16) = *(_OWORD *)(v15 - 200);
        *(_OWORD *)(v16 + 32) = *(_OWORD *)(v15 - 184);
        *(_OWORD *)(v16 + 48) = *(_OWORD *)(v15 - 168);
        *(_DWORD *)(v16 + 64) = *(_DWORD *)(v15 - 152);
        *(_DWORD *)(v16 + 68) = *(_DWORD *)(v15 - 148);
        *(_QWORD *)(v16 + 72) = *(_QWORD *)(v15 - 144);
        *(_DWORD *)(v16 + 80) = *(_DWORD *)(v15 - 136);
        *(_BYTE *)(v16 + 84) = *(_BYTE *)(v15 - 132);
        *(_BYTE *)(v16 + 85) = *(_BYTE *)(v15 - 131);
        *(_DWORD *)(v16 + 88) = *(_DWORD *)(v15 - 128);
        *(_DWORD *)(v16 + 92) = *(_DWORD *)(v15 - 124);
        *(_DWORD *)(v16 + 96) = *(_DWORD *)(v15 - 120);
        *(_QWORD *)(v16 + 100) = *(_QWORD *)(v15 - 116);
        *(_QWORD *)(v16 + 108) = *(_QWORD *)(v15 - 108);
        *(_QWORD *)(v16 + 116) = *(_QWORD *)(v15 - 100);
        *(_OWORD *)(v16 + 124) = *(_OWORD *)(v15 - 92);
        *(_DWORD *)(v16 + 140) = *(_DWORD *)(v15 - 76);
        *(_DWORD *)(v16 + 144) = *(_DWORD *)(v15 - 72);
        *(_DWORD *)(v16 + 148) = *(_DWORD *)(v15 - 68);
        *(_QWORD *)(v16 + 152) = *(_QWORD *)(v15 - 64);
        *(_QWORD *)(v16 + 160) = *(_QWORD *)(v15 - 56);
        *(_DWORD *)(v16 + 168) = *(_DWORD *)(v15 - 48);
        *(_QWORD *)(v16 + 172) = *(_QWORD *)(v15 - 36);
        *(_DWORD *)(v16 + 180) = *(_DWORD *)(v15 - 20);
        v16 += 200LL;
        --v13;
      }
      while ( v13 );
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15, v13, 200LL);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, CurrentProcessSessionId);
    v19 = *(_DWORD *)(v14 + 40);
    operator delete((void *)v14);
  }
  else
  {
    WdLogSingleEntry1(6LL, 200 * v10 + 88);
    v19 = -1;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Unable to allocate QDC diagnostics packet (SizeOfQDCPacket = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
  }
  return v19;
}
