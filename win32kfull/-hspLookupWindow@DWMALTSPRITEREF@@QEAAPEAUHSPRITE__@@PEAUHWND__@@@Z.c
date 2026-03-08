/*
 * XREFs of ?hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C000A680
 * Callers:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C000A514 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C000A650 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall DWMALTSPRITEREF::hspLookupWindow(DWMALTSPRITEREF *this, HWND a2)
{
  __int64 v2; // rsi
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  _QWORD *v4; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF
  DWMALTSPRITEREF *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  v2 = 0LL;
  Buffer[1] = 0LL;
  Buffer[0] = a2;
  v3 = Gre::Base::Globals(this);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v7, (struct _EX_PUSH_LOCK *)(*((_QWORD *)v3 + 38) + 72LL));
  v4 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v3 + 38), Buffer);
  if ( v4 )
    v2 = v4[1];
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  return v2;
}
