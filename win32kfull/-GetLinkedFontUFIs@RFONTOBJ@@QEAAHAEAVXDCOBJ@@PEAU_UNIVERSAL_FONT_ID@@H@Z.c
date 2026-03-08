/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C02B6748
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C027ADF0 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C01502CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C02B5DC4 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C02B6680 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02B6BA0 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  struct _UNIVERSAL_FONT_ID *v5; // rdi
  int v7; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  BOOL v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // r15
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Blink; // r12
  struct PFE *Flink; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BOOL8 v19; // r12
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // r13
  struct _LIST_ENTRY *i; // rdi
  struct PFE *v23; // rsi
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rax
  struct PFE *EUDCDefaultFontPFE; // rax
  BOOL v28; // [rsp+30h] [rbp-20h]
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+48h] [rbp-8h] BYREF
  struct _UNIVERSAL_FONT_ID *v32; // [rsp+A0h] [rbp+50h] BYREF
  int v33; // [rsp+A8h] [rbp+58h] BYREF

  v32 = a3;
  v33 = 0;
  v5 = a3;
  v7 = 0;
  if ( a4 && !a3 )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 720LL) && !RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x100u;
  }
  v9 = *(_QWORD *)(*(_QWORD *)this + 720LL);
  if ( v9 )
  {
    v7 = 1;
    v33 = 1;
    if ( a4 > 0 )
    {
      v10 = *(_QWORD *)(v9 + 120);
      v30 = 0LL;
      *(_QWORD *)v5 = *(_QWORD *)(v10 + 84);
      v5 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
      v32 = v5;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
    }
  }
  v11 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
  v28 = v11;
  Gre::Base::Globals(this);
  v13 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v13 + 13272));
  ++*(_DWORD *)(v13 + 13300);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v13 + 13272));
  v29 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v29);
  v30 = 0LL;
  Blink = LinkedFontList->Blink;
  if ( Blink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v29) )
  {
    Flink = (struct PFE *)*((_QWORD *)&Blink[2].Flink + v11);
    if ( !Flink )
      Flink = (struct PFE *)Blink[2].Flink;
    if ( (*(_DWORD *)(*(_QWORD *)Flink + 52LL) & 0xA) == 8 )
    {
      RFONTOBJ::AddUFIToBuffer(this, Flink, &v32, &v33, a4);
      v5 = v32;
      v7 = v33;
      v30 = 1LL;
    }
    else
    {
      v30 = 0LL;
    }
  }
  v17 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v17 )
  {
    v33 = v7 + 1;
    if ( v7 < a4 )
    {
      v18 = *(_QWORD *)(v17 + 120);
      v31 = 0LL;
      *(_QWORD *)v5 = *(_QWORD *)(v18 + 84);
      v32 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
    }
    v19 = v11;
  }
  else
  {
    v19 = v11;
    RFONTOBJ::AddUFIToBuffer(this, *(struct PFE **)(v13 + 8LL * v11 + 13320), &v32, &v33, a4);
  }
  v20 = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v29);
  v21 = v30;
  for ( i = v20->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v29); i = i->Flink )
  {
    v23 = (struct PFE *)*((_QWORD *)&i[2].Flink + v19);
    if ( !v23 )
      v23 = (struct PFE *)i[2].Flink;
    if ( i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v29)->Blink || !v21 )
      RFONTOBJ::AddUFIToBuffer(this, v23, &v32, &v33, a4);
  }
  GreAcquireSemaphore(*(_QWORD *)(v13 + 13272));
  --*(_DWORD *)(v13 + 13300);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v13 + 13272));
  v24 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v24 )
  {
    v25 = v33 + 1;
    if ( v33 < a4 )
    {
      v26 = *(_QWORD *)(v24 + 120);
      v31 = 0LL;
      *(_QWORD *)v32 = *(_QWORD *)(v26 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v28);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v32, &v33, a4);
    return (unsigned int)v33;
  }
  return v25;
}
