/*
 * XREFs of ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C000D118
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C000D8E4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BA244 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r9
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  __int64 v7; // rax

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = gcfsCharSetTable + 140;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = (*(_DWORD *)(*(_QWORD *)this + 212LL) + 7) & 0xFFFFFFF8;
  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 212LL);
  if ( a2 > 0xFFFFFFFF / v5 )
  {
    *(_QWORD *)(v4 + 216) = 0LL;
  }
  else
  {
    v6 = a2 * v5;
    if ( v6 )
    {
      v7 = Win32AllocPoolZInit(v6, 1701212231LL);
      v4 = *(_QWORD *)this;
    }
    else
    {
      v7 = 0LL;
    }
    *(_QWORD *)(v4 + 216) = v7;
  }
  LOBYTE(v2) = *(_QWORD *)(*(_QWORD *)this + 216LL) != 0LL;
  return v2;
}
