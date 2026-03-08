/*
 * XREFs of HmgReplaceObject @ 0x1C0045470
 * Callers:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0045420 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0048AE0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgReplaceObject(struct OBJECT *a1, __int128 *a2)
{
  unsigned int v4; // esi
  __int16 v6; // dx
  __int128 v7; // xmm0
  __int16 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  GdiHandleEntryDirectory *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct GdiHandleEntryTable *v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  _BYTE v19[8]; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]
  unsigned int v21; // [rsp+A8h] [rbp+38h] BYREF

  v4 = 1;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)v19, a1, 1, 0, 0);
  if ( v20 )
  {
    v6 = *((_WORD *)a1 + 7);
    v7 = *a2;
    v8 = *((_WORD *)a2 + 7);
    v18 = *((_QWORD *)a2 + 2);
    v9 = v8 & 0x8000 | v6 & 0x4000u;
    *((_WORD *)a2 + 7) = v9;
    v10 = *(_QWORD *)a1;
    *((_WORD *)a1 + 7) = v6 & 0x8000 | v8 & 0x4000;
    *(_QWORD *)a2 = v10;
    *((_WORD *)a2 + 6) = *((_WORD *)a1 + 6);
    *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 2);
    *((_QWORD *)a2 + 2) = *((_QWORD *)a1 + 2);
    v17 = v7;
    v11 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 8008LL);
    v12 = GdiHandleManager::DecodeIndex(v11, (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000);
    v13 = (GdiHandleEntryDirectory *)*((_QWORD *)v11 + 2);
    v16 = 0LL;
    v21 = 0;
    if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v13, v12, &v16, &v21) && v21 < *((_DWORD *)v16 + 5) )
      *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v16 + 3) + 8 * ((unsigned __int64)v21 >> 8))
                + 16LL * (unsigned __int8)v21
                + 8) = a2;
    v14 = v17;
    *((_DWORD *)a1 + 2) = DWORD2(v17);
    v15 = v18;
    *(_QWORD *)a1 = v14;
    LOWORD(v14) = WORD6(v17);
    *((_QWORD *)a1 + 2) = v15;
    *((_WORD *)a1 + 6) = v14;
    HANDLELOCK::vUnlock((HANDLELOCK *)v19);
    if ( v20 )
      HANDLELOCK::vUnlock((HANDLELOCK *)v19);
  }
  else
  {
    return 0;
  }
  return v4;
}
