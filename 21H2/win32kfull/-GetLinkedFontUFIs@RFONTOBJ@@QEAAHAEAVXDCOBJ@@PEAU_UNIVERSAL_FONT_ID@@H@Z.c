/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0124A18
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C0124330 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0124BD4 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0124BF8 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0124C50 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A583C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  int v4; // esi
  struct _UNIVERSAL_FONT_ID *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  struct _LIST_ENTRY *LinkedFontList; // rax
  __int64 v12; // r8
  __int64 v13; // r12
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v15; // rcx
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v17; // rax
  __int64 v18; // rcx
  struct PFE *EUDCDefaultFontPFE; // rax
  unsigned int v20; // ebx
  __int64 v22; // rax
  struct PFE *Flink; // rdx
  __int64 v24; // rax
  struct PFE *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+38h] [rbp-8h] BYREF
  struct _UNIVERSAL_FONT_ID *v29; // [rsp+80h] [rbp+40h] BYREF
  int v30; // [rsp+88h] [rbp+48h] BYREF

  v29 = a3;
  v4 = 0;
  v30 = 0;
  v6 = a3;
  if ( a4 && !a3 )
    return 0LL;
  v8 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 708LL) )
    goto LABEL_3;
  if ( !*(_QWORD *)(v8 + 720) && !RFONTOBJ::bInitSystemTT(this, a2) )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x100u;
  v8 = *(_QWORD *)this;
LABEL_3:
  v9 = *(_QWORD *)(v8 + 720);
  if ( v9 )
  {
    v4 = 1;
    v30 = 1;
    if ( a4 > 0 )
    {
      v22 = *(_QWORD *)(v9 + 120);
      v27 = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v22 + 84);
      v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      v29 = v6;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
      v8 = *(_QWORD *)this;
    }
  }
  v10 = *(_DWORD *)(v8 + 844) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v27 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v27);
  v13 = 0LL;
  Blink = LinkedFontList->Blink;
  if ( Blink != LinkedFontList )
  {
    Flink = (struct PFE *)*((_QWORD *)&Blink[2].Flink + v10);
    if ( !Flink )
      Flink = (struct PFE *)Blink[2].Flink;
    if ( (*(_DWORD *)(*(_QWORD *)Flink + 52LL) & 0xA) == 8 )
    {
      RFONTOBJ::AddUFIToBuffer(this, Flink, &v29, &v30, a4);
      v12 = *(_QWORD *)this;
      v13 = 1LL;
      v6 = v29;
      v4 = v30;
    }
  }
  v15 = *(_QWORD *)(v12 + 728);
  if ( v15 )
  {
    v30 = v4 + 1;
    if ( v4 < a4 )
    {
      v24 = *(_QWORD *)(v15 + 120);
      v28 = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v24 + 84);
      v29 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    }
  }
  else
  {
    RFONTOBJ::AddUFIToBuffer(this, (struct PFE *)(&gappfeSysEUDC)[v10], &v29, &v30, a4);
  }
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v27)->Flink; ; i = i->Flink )
  {
    v17 = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v27);
    if ( i == v17 )
      break;
    v25 = (struct PFE *)*((_QWORD *)&i[2].Flink + v10);
    if ( !v25 )
      v25 = (struct PFE *)i[2].Flink;
    if ( i != v17->Blink || !v13 )
      RFONTOBJ::AddUFIToBuffer(this, v25, &v29, &v30, a4);
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v18 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v18 )
  {
    v20 = v30 + 1;
    if ( v30 < a4 )
    {
      v26 = *(_QWORD *)(v18 + 120);
      v28 = 0LL;
      *(_QWORD *)v29 = *(_QWORD *)(v26 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v10);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v29, &v30, a4);
    return (unsigned int)v30;
  }
  return v20;
}
