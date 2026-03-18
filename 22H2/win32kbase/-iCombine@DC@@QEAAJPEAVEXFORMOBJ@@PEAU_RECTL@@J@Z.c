/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90
 * Callers:
 *     GreIntersectClipRect @ 0x1C003ADF0 (GreIntersectClipRect.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C005FDB0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0152CD0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0153770 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0153828 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015394C (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0154170 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0157530 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
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
  PVOID Entry; // [rsp+20h] [rbp-B9h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-B1h] BYREF
  PVOID v29; // [rsp+30h] [rbp-A9h] BYREF
  PVOID v30; // [rsp+38h] [rbp-A1h] BYREF
  struct _RECTL v31; // [rsp+40h] [rbp-99h] BYREF
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
  v29 = 0LL;
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
    Entry = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    if ( Entry )
    {
      *(_QWORD *)&v31.left = v13;
      v10 = RGNOBJ::iCombine((RGNOBJ *)&Entry, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        v16 = *(_QWORD *)&v31.left;
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
      *(_QWORD *)&v31.left = ((unsigned __int64)v18 + 24) & -(__int64)(v18 != 0LL);
      v10 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v31);
      goto LABEL_4;
    }
    Entry = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    *(_QWORD *)&v31.left = 0LL;
    if ( Entry )
    {
      v30 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
      if ( !v30 )
        goto LABEL_27;
      DC::vGet_sizlWindow(this, (struct tagSIZE *)&v31);
      v19 = v31.left;
      v20 = 0;
      v21 = v31.top;
      v22 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v28);
        if ( (v22[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v20 = v22[640];
          v19 += v20;
          v9 = v22[641];
          v21 += v9;
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v28);
      }
      v23 = *((_DWORD *)this + 10) & 1;
      v24 = *((_DWORD *)this + 2 * v23 + 254);
      v25 = v19 - v24;
      v31.left = v20 - v24;
      v26 = *((_DWORD *)this + 2 * v23 + 255);
      v31.top = v9 - v26;
      v31.bottom = v21 - v26;
      v31.right = v25;
      RGNOBJ::vSet((RGNOBJ *)&v30, &v31);
      v10 = RGNOBJ::iCombine((RGNOBJ *)&Entry, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v29, a4);
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
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v30);
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
