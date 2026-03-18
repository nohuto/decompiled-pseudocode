/*
 * XREFs of ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, const struct tagRECT *a2)
{
  int v4; // ecx
  unsigned int v5; // ebx
  int v7; // ecx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  struct _RECTL *v10; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+38h] [rbp-18h]
  struct _RECTL v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)CRegion::InitializeFromRect(this, a2);
  v7 = v4 - 1;
  if ( !v7 )
    return v5;
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v13 = *((_QWORD *)this + 2);
  v11 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v10, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
  v9 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  if ( v10 && v8 )
  {
    v12 = (struct _RECTL)*a2;
    RGNOBJ::vSet(&v10, &v12);
    if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v8, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v10, 0xEu) )
    {
      RGNOBJ::vSwap((RGNOBJ *)&v8, (struct RGNOBJ *)&v13);
      *((_QWORD *)this + 2) = v13;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  return v5;
}
