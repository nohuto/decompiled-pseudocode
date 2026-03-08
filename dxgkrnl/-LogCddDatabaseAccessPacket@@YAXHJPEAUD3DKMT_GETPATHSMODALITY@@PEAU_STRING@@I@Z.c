/*
 * XREFs of ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C01C316C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall LogCddDatabaseAccessPacket(
        int a1,
        int a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        struct _STRING *a4,
        unsigned int a5)
{
  unsigned int v9; // ebp
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int CurrentProcessSessionId; // eax

  v9 = 160 * *((unsigned __int16 *)a3 + 10) + a4->Length + 73;
  v10 = operator new[](v9, 0x63644356u, 256LL);
  v11 = 0;
  v12 = v10;
  if ( v10 )
  {
    *(_DWORD *)v10 = 49;
    *(_DWORD *)(v10 + 4) = v9;
    *(_DWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_OWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_DWORD *)(v10 + 52) = a5;
    *(_DWORD *)(v10 + 48) = a2;
    *(_DWORD *)(v10 + 56) = a1;
    *(_DWORD *)(v10 + 60) = *((unsigned __int16 *)a3 + 10);
    LOWORD(v10) = *((_WORD *)a3 + 10);
    if ( (_WORD)v10 )
    {
      do
      {
        v10 = v11++;
        v13 = 160 * v10;
        *(_QWORD *)(v13 + v12 + 72) = *((_QWORD *)a3 + 37 * v10 + 7);
        *(_QWORD *)(v13 + v12 + 80) = *((_QWORD *)a3 + 37 * v10 + 8);
        *(_QWORD *)(v13 + v12 + 88) = *((_QWORD *)a3 + 37 * v10 + 9);
        *(_DWORD *)(v13 + v12 + 96) = *((_DWORD *)a3 + 74 * v10 + 20);
        *(_DWORD *)(v13 + v12 + 100) = *((_DWORD *)a3 + 74 * v10 + 21);
        *(_QWORD *)(v13 + v12 + 104) = *((_QWORD *)a3 + 37 * v10 + 16);
        *(_QWORD *)(v13 + v12 + 112) = *(_QWORD *)((char *)a3 + 296 * v10 + 92);
        *(_QWORD *)(v13 + v12 + 120) = *(_QWORD *)((char *)a3 + 296 * v10 + 100);
        *(_QWORD *)(v13 + v12 + 128) = *(_QWORD *)((char *)a3 + 296 * v10 + 108);
        *(_QWORD *)(v13 + v12 + 136) = *(_QWORD *)((char *)a3 + 296 * v10 + 116);
        *(_DWORD *)(v13 + v12 + 144) = *((_DWORD *)a3 + 74 * v10 + 22);
        *(_DWORD *)(v13 + v12 + 148) = (int)(*((_DWORD *)a3 + 74 * v10 + 34) << 29) >> 29;
        *(_DWORD *)(v13 + v12 + 152) = *((_DWORD *)a3 + 74 * v10 + 36);
        *(_DWORD *)(v13 + v12 + 156) = *((_DWORD *)a3 + 74 * v10 + 37);
        *(_OWORD *)(v13 + v12 + 160) = *(_OWORD *)((char *)a3 + 296 * v10 + 152);
        *(_OWORD *)(v13 + v12 + 176) = *(_OWORD *)((char *)a3 + 296 * v10 + 168);
        *(_DWORD *)(v13 + v12 + 192) = *((_DWORD *)a3 + 74 * v10 + 47);
        *(_DWORD *)(v13 + v12 + 196) = *((_DWORD *)a3 + 74 * v10 + 48);
        *(_DWORD *)(v13 + v12 + 200) = *((_DWORD *)a3 + 74 * v10 + 49);
        *(_QWORD *)(v13 + v12 + 204) = *((_QWORD *)a3 + 37 * v10 + 25);
        *(_QWORD *)(v13 + v12 + 212) = *((_QWORD *)a3 + 37 * v10 + 35);
        *(_DWORD *)(v13 + v12 + 228) = *((_DWORD *)a3 + 74 * v10 + 74);
        LODWORD(v10) = *((unsigned __int16 *)a3 + 10);
      }
      while ( v11 < (unsigned int)v10 );
    }
    v14 = 160 * (unsigned __int16)v10 + v12 + 72;
    memmove((void *)(160LL * (unsigned __int16)v10 + v12 + 72), a4->Buffer, a4->Length);
    *(_DWORD *)(v12 + 64) = v14 - v12;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15, v17, v18);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, CurrentProcessSessionId);
    operator delete((void *)v12);
  }
}
