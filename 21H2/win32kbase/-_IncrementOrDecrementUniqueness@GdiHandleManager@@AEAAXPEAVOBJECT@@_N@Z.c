/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0015EF8
 * Callers:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0034CB0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 * Callees:
 *     EtwTraceGdiTransformHandle @ 0x1C001616C (EtwTraceGdiTransformHandle.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002E990 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0032170 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(GdiHandleManager *this, struct OBJECT *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  struct _ENTRY *EntryFromObject; // r10
  char v10; // cl
  char v11; // dl
  char v12; // cl
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned int EtwGdiHandleType; // eax
  __int64 v17; // rdx

  v3 = *(_QWORD *)a2;
  v7 = GdiHandleManager::DecodeIndex(
         this,
         (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(this, a2);
  if ( (unsigned int)v7 >= 0x10000 || *(_DWORD *)this > 0x10000u )
  {
    LOBYTE(v8) = *((_BYTE *)EntryFromObject + 14);
    EtwGdiHandleType = GetEtwGdiHandleType(v8);
    v17 = v3;
  }
  else
  {
    v10 = *((_BYTE *)EntryFromObject + 13);
    v11 = v10 - 1;
    v12 = v10 + 1;
    if ( !a3 )
      v12 = v11;
    *((_BYTE *)EntryFromObject + 13) = v12;
    v13 = v7 | ((unsigned __int64)*((unsigned __int16 *)EntryFromObject + 6) << 16);
    *(_QWORD *)a2 = v13;
    v14 = *(_QWORD *)EntryFromObject & 0xFFFFFFFFFF000000uLL | ((unsigned int)v13 >> 8) & 0xFF0000;
    v15 = (unsigned __int16)v13;
    LOBYTE(v13) = *((_BYTE *)EntryFromObject + 14);
    *(_QWORD *)EntryFromObject = v15 | v14;
    EtwGdiHandleType = GetEtwGdiHandleType(v13);
    v17 = *(_QWORD *)a2;
  }
  EtwTraceGdiTransformHandle(v3, v17, EtwGdiHandleType);
}
