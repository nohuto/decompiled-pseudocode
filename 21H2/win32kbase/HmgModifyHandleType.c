/*
 * XREFs of HmgModifyHandleType @ 0x1C0016060
 * Callers:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0015DD0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C0015FF0 (HmgLockAndModifyHandleType.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00C7F84 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1C02982A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     EtwTraceGdiTransformHandle @ 0x1C001616C (EtwTraceGdiTransformHandle.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0032170 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  GdiHandleManager *v1; // rbx
  unsigned int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // r14
  struct _ENTRY *Entry; // rbp
  unsigned int v7; // eax
  _QWORD *v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int EtwGdiHandleType; // eax
  __int64 result; // rax

  v1 = gpHandleManager;
  v3 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, v3);
  v5 = *((_QWORD *)v1 + 2);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v4, 0);
  v7 = GdiHandleManager::DecodeIndex(v1, v3);
  v8 = 0LL;
  v9 = *(_DWORD *)(v5 + 2056);
  v10 = v7;
  v11 = v9 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
  if ( v7 < (unsigned int)v11 )
  {
    if ( v7 >= v9 )
      v11 = ((v7 - v9) >> 16) + 1;
    else
      v11 = 0LL;
    v12 = *(_QWORD *)(v5 + 8LL * (unsigned int)v11 + 8);
    if ( (_DWORD)v11 )
      v10 += ((1 - (_DWORD)v11) << 16) - v9;
    if ( v10 < *(_DWORD *)(v12 + 20) )
    {
      v11 = 2LL * (unsigned __int8)v10;
      v8 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                      + 16LL * (unsigned __int8)v10
                      + 8);
    }
  }
  LOBYTE(v11) = *((_BYTE *)Entry + 14);
  EtwGdiHandleType = GetEtwGdiHandleType(v11);
  EtwTraceGdiTransformHandle(*v8, a1, EtwGdiHandleType);
  *((_WORD *)Entry + 6) = WORD1(a1);
  result = a1;
  *v8 = a1;
  return result;
}
