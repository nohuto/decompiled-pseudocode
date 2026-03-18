/*
 * XREFs of HmgModifyHandleType @ 0x1C0060BA0
 * Callers:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00609A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C0060B30 (HmgLockAndModifyHandleType.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C01518D8 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x1C0060CBC (EtwTraceGdiTransformHandle.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r14
  struct _ENTRY *Entry; // rbp
  unsigned int v7; // eax
  _QWORD *v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int EtwGdiHandleType; // eax
  __int64 result; // rax

  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v3, v2);
  v5 = *(_QWORD *)(v3 + 16);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v4, 0);
  v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v3, v2);
  v8 = 0LL;
  v9 = *(_DWORD *)(v5 + 2056);
  v10 = v7;
  if ( v7 < v9 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
  {
    if ( v7 >= v9 )
      v11 = ((v7 - v9) >> 16) + 1;
    else
      v11 = 0;
    v12 = *(_QWORD *)(v5 + 8LL * v11 + 8);
    if ( v11 )
      v10 += ((1 - v11) << 16) - v9;
    if ( v10 < *(_DWORD *)(v12 + 20) )
      v8 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                      + 16LL * (unsigned __int8)v10
                      + 8);
  }
  EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)Entry + 14));
  EtwTraceGdiTransformHandle(*v8, a1, EtwGdiHandleType);
  *((_WORD *)Entry + 6) = WORD1(a1);
  result = a1;
  *v8 = a1;
  return result;
}
