/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C0145148
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0144F50 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

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
  unsigned int v11; // esi
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  __int64 v18; // rdx
  char *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v23; // ebx
  unsigned int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rax

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v25 = 0;
    if ( a1 )
    {
      v26 = (__int64 *)a2;
      do
      {
        if ( *v26 >= 0 )
          break;
        ++v25;
        v26 += 25;
      }
      while ( v25 < v10 );
    }
    v10 = v25;
  }
  v11 = 192 * v10 + 88;
  v12 = (char *)operator new[](v11, 0x43434451u, PagedPool);
  v17 = v12;
  if ( v12 )
  {
    memset(v12, 0, v11);
    *((_DWORD *)v17 + 10) = 0;
    *((_QWORD *)v17 + 4) = 0LL;
    *(_DWORD *)v17 = 39;
    *((_DWORD *)v17 + 1) = v11;
    *(_OWORD *)(v17 + 8) = 0LL;
    *((_QWORD *)v17 + 3) = 0LL;
    *((_DWORD *)v17 + 14) = 0;
    *((_DWORD *)v17 + 13) = v10;
    *((_DWORD *)v17 + 15) = a5;
    *((_DWORD *)v17 + 16) = a4 | a3;
    if ( a6 )
      *((_DWORD *)v17 + 17) = *(_DWORD *)a6;
    *((_DWORD *)v17 + 18) = 192;
    v18 = -(__int64)a6;
    v19 = (char *)((a6 != 0LL ? 4 : 0) | (a2 == 0LL) | 2u);
    *((_QWORD *)v17 + 10) = a7;
    *((_DWORD *)v17 + 12) = (_DWORD)v19;
    if ( a2 && v10 )
    {
      v19 = v17 + 104;
      v20 = v10;
      v18 = (__int64)a2 + 16;
      do
      {
        *((_QWORD *)v19 - 2) = *(_QWORD *)(v18 - 16);
        *((_QWORD *)v19 - 1) = *(_QWORD *)(v18 - 8);
        v21 = *(_QWORD *)v18;
        v18 += 200LL;
        *(_QWORD *)v19 = v21;
        *((_DWORD *)v19 + 2) = *(_DWORD *)(v18 - 192);
        *((_DWORD *)v19 + 3) = *(_DWORD *)(v18 - 188);
        *((_OWORD *)v19 + 1) = *(_OWORD *)(v18 - 184);
        *((_OWORD *)v19 + 2) = *(_OWORD *)(v18 - 168);
        *((_OWORD *)v19 + 3) = *(_OWORD *)(v18 - 152);
        *((_DWORD *)v19 + 16) = *(_DWORD *)(v18 - 136);
        *((_DWORD *)v19 + 17) = *(_DWORD *)(v18 - 132);
        *((_QWORD *)v19 + 9) = *(_QWORD *)(v18 - 128);
        *((_DWORD *)v19 + 20) = *(_DWORD *)(v18 - 120);
        v19[84] = *(_BYTE *)(v18 - 116);
        v19[85] = *(_BYTE *)(v18 - 115);
        *((_DWORD *)v19 + 22) = *(_DWORD *)(v18 - 112);
        *((_DWORD *)v19 + 23) = *(_DWORD *)(v18 - 108);
        *((_DWORD *)v19 + 24) = *(_DWORD *)(v18 - 104);
        *(_QWORD *)(v19 + 100) = *(_QWORD *)(v18 - 100);
        *(_QWORD *)(v19 + 108) = *(_QWORD *)(v18 - 92);
        *(_QWORD *)(v19 + 116) = *(_QWORD *)(v18 - 84);
        *(_OWORD *)(v19 + 124) = *(_OWORD *)(v18 - 76);
        *((_DWORD *)v19 + 35) = *(_DWORD *)(v18 - 60);
        *((_DWORD *)v19 + 36) = *(_DWORD *)(v18 - 56);
        *((_DWORD *)v19 + 37) = *(_DWORD *)(v18 - 52);
        *((_QWORD *)v19 + 19) = *(_QWORD *)(v18 - 48);
        *((_QWORD *)v19 + 20) = *(_QWORD *)(v18 - 40);
        *((_DWORD *)v19 + 42) = *(_DWORD *)(v18 - 32);
        v19 += 192;
        --v20;
      }
      while ( v20 );
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, CurrentProcessSessionId);
    v23 = *((_DWORD *)v17 + 10);
    operator delete[](v17);
    return v23;
  }
  else
  {
    v27 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v27 + 24) = v11;
    WdLogEvent5_WdLowResource(v27);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
    return 0xFFFFFFFFLL;
  }
}
