/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30
 * Callers:
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 * Callees:
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C001A8B0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0180450 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0180EF0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0180FA8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C01810CC (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0181920 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  int v9; // r15d
  unsigned int v10; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  struct _ENTRY *EntryFromObject; // rax
  unsigned __int64 v16; // rcx
  PVOID v18; // rax
  LONG v19; // edi
  int v20; // r14d
  LONG v21; // r12d
  _DWORD *v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  LONG v25; // edi
  int v26; // eax
  _BYTE v27[8]; // [rsp+20h] [rbp-B9h] BYREF
  PVOID Entry; // [rsp+28h] [rbp-B1h] BYREF
  PVOID v29; // [rsp+30h] [rbp-A9h] BYREF
  struct _RECTL v30; // [rsp+38h] [rbp-A1h] BYREF
  PVOID v31; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v32[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v33; // [rsp+58h] [rbp-81h]
  _QWORD v34[4]; // [rsp+A0h] [rbp-39h] BYREF
  int v35; // [rsp+C0h] [rbp-19h]
  struct _POINTL v36; // [rsp+D0h] [rbp-9h] BYREF
  struct _POINTL v37; // [rsp+D8h] [rbp-1h] BYREF
  LONG x; // [rsp+E0h] [rbp+7h]
  LONG bottom; // [rsp+E4h] [rbp+Bh]
  LONG v40; // [rsp+E8h] [rbp+Fh]
  LONG v41; // [rsp+ECh] [rbp+13h]

  left = a3->left;
  top = a3->top;
  v37.x = a3->right;
  x = v37.x;
  bottom = a3->bottom;
  v41 = bottom;
  v36.x = left;
  v36.y = top;
  v37.y = top;
  v40 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v32);
  v9 = 0;
  if ( !v33 )
    goto LABEL_2;
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v32, a2, &v36)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v32, a2, &v37, 3u)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v32) )
  {
    goto LABEL_3;
  }
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v29, (struct EPATHOBJ *)v32, 1, 0LL);
  if ( !v29 )
  {
LABEL_2:
    EngSetLastError(8u);
LABEL_3:
    v10 = 0;
    goto LABEL_4;
  }
  v13 = *((_QWORD *)this + 20);
  v10 = 0;
  *((_DWORD *)this + 9) |= 0x10u;
  v14 = SGDGetSessionState(v12);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v14 + 24) + 8008LL),
                      this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v13 )
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    if ( Entry )
    {
      *(_QWORD *)&v30.left = v13;
      v10 = RGNOBJ::iCombine((RGNOBJ *)&Entry, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        v16 = *(_QWORD *)&v30.left;
        ++*((_DWORD *)Entry + 19);
        *((_QWORD *)this + 20) = Entry;
        if ( (*(_DWORD *)(v16 + 76))-- == 1 )
          REGION::vDeleteREGION(v16);
      }
      else
      {
        REGION::vDeleteREGION((unsigned __int64)Entry);
        Entry = 0LL;
      }
    }
  }
  else
  {
    if ( a4 == 1 )
    {
      ++*((_DWORD *)v29 + 19);
      v18 = v29;
      *((_QWORD *)this + 20) = v29;
      *(_QWORD *)&v30.left = ((unsigned __int64)v18 + 24) & -(__int64)(v18 != 0LL);
      v10 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v30);
      goto LABEL_4;
    }
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    *(_QWORD *)&v30.left = 0LL;
    if ( Entry )
    {
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
      if ( !v31 )
        goto LABEL_27;
      DC::vGet_sizlWindow(this, (struct tagSIZE *)&v30);
      v19 = v30.left;
      v20 = 0;
      v21 = v30.top;
      v22 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v27);
        if ( (v22[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v20 = v22[640];
          v19 += v20;
          v9 = v22[641];
          v21 += v9;
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v27);
      }
      v23 = *((_DWORD *)this + 10) & 1;
      v24 = *((_DWORD *)this + 2 * v23 + 254);
      v25 = v19 - v24;
      v30.left = v20 - v24;
      v26 = *((_DWORD *)this + 2 * v23 + 255);
      v30.top = v9 - v26;
      v30.bottom = v21 - v26;
      v30.right = v25;
      RGNOBJ::vSet((RGNOBJ *)&v31, &v30);
      v10 = RGNOBJ::iCombine((RGNOBJ *)&Entry, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        ++*((_DWORD *)Entry + 19);
        *((_QWORD *)this + 20) = Entry;
      }
      else
      {
LABEL_27:
        REGION::vDeleteREGION((unsigned __int64)Entry);
        Entry = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v31);
    }
  }
  REGION::vDeleteREGION((unsigned __int64)v29);
  v29 = 0LL;
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v32);
  if ( v35 )
    PopThreadGuardedObject(v34);
  return v10;
}
