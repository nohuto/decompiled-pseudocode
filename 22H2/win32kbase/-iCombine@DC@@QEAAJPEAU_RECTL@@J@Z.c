/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0034F20
 * Callers:
 *     GreIntersectClipRect @ 0x1C0072520 (GreIntersectClipRect.c)
 * Callees:
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C00219EC (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002C630 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002CBC0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0033EC0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0035D50 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0039944 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A048 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00814E4 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E598 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  int v3; // r12d
  tagSIZE v4; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edi
  __int64 v22; // r14
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  int v29; // r14d
  DC *v30; // rdx
  unsigned int v31; // ebx
  struct REGION *Region; // rax
  REGION *v33; // rdi
  __int64 v34; // rax
  REGION *v35; // rcx
  __int64 v37; // r8
  REGION *v38; // rsi
  LONG cx; // ebx
  int v40; // r12d
  LONG cy; // r13d
  _DWORD *v42; // rdi
  __int64 v43; // rcx
  int v44; // eax
  LONG v45; // ebx
  int v46; // eax
  unsigned int v47; // r8d
  REGION *v48; // rcx
  REGION *v49; // rcx
  REGION *v50; // [rsp+20h] [rbp-50h] BYREF
  int v51; // [rsp+28h] [rbp-48h]
  REGION *v52; // [rsp+30h] [rbp-40h] BYREF
  int v53; // [rsp+38h] [rbp-38h]
  REGION *v54; // [rsp+40h] [rbp-30h] BYREF
  int v55; // [rsp+48h] [rbp-28h]
  struct _RECTL v56; // [rsp+50h] [rbp-20h] BYREF
  tagSIZE v57; // [rsp+A0h] [rbp+30h] BYREF
  int v58; // [rsp+B0h] [rbp+40h]

  v58 = a3;
  v3 = a3;
  v4 = (tagSIZE)*((_QWORD *)this + 20);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != -134217728 && (a2->bottom & 0xF8000000) != 0
    || (a2->right & 0xF8000000) != -134217728 && (a2->right & 0xF8000000) != 0
    || (a2->top & 0xF8000000) != -134217728 && (a2->top & 0xF8000000) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 0LL;
  v55 = 0;
  if ( !gpTypeIsolation[7] )
    goto LABEL_65;
  v11 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  if ( v11 )
  {
    v13 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0256D50 && (int)qword_1C0256D50(v10, v9, v12) >= 0 && qword_1C0256D58 )
    {
      v16 = qword_1C0256D58(v13, v14, v15);
      v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
      v16 = 0LL;
    }
    *(_QWORD *)(v11 + 88) = v16;
    if ( !v16 )
    {
      REGION::vDeleteREGION((REGION *)v11);
LABEL_65:
      v11 = 0LL;
    }
  }
  v54 = (REGION *)v11;
  if ( !v11 )
    return 0;
  v17 = *(_QWORD *)(v11 + 88);
  *(_DWORD *)(v11 + 80) = 16;
  *(_DWORD *)(v11 + 84) = 1;
  *(_QWORD *)(v11 + 96) = 0LL;
  *(_QWORD *)(v11 + 104) = 0LL;
  *(_DWORD *)v17 = 0;
  *(_DWORD *)(v17 + 4) = 0x80000000;
  *(_QWORD *)(v17 + 8) = 0x7FFFFFFFLL;
  *(_QWORD *)(v11 + 40) = v17 + 16;
  *(_QWORD *)(v11 + 24) = 112LL;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 56) = v11 + 48;
  *(_QWORD *)(v11 + 48) = v11 + 48;
  RGNOBJ::vSet((RGNOBJ *)&v54, a2);
  v19 = *(_DWORD *)this;
  v20 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v21 = (unsigned __int16)v19 | (v20 >> 8) & 0xFF0000;
  if ( v21 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v21,
                                  1)
           + 13) == HIWORD(v21) )
        v21 = (unsigned __int16)v21;
    }
    else
    {
      v21 = (unsigned __int16)v21;
    }
    v8 = 0LL;
  }
  v22 = *((_QWORD *)gpHandleManager + 2);
  v23 = *(_DWORD *)(v22 + 2056);
  if ( v21 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
  {
    v24 = ((v21 - v23) >> 16) + 1;
    if ( v21 < v23 )
      v24 = 0LL;
    v25 = *(_QWORD *)(v22 + 8 * v24 + 8);
    if ( (_DWORD)v24 )
      v26 = v21 + ((1 - (_DWORD)v24) << 16) - v23;
    else
      v26 = v21;
    if ( v26 < *(_DWORD *)(v25 + 20) )
    {
      v18 = v26;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v26 >> 8))
                     + 16LL * (unsigned __int8)v26
                     + 8) )
        v8 = *(_QWORD *)v25 + 24LL * v26;
    }
  }
  if ( v21 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v21,
                                  1)
           + 13) == HIWORD(v21) )
        v21 = (unsigned __int16)v21;
    }
    else
    {
      v21 = (unsigned __int16)v21;
    }
    v3 = v58;
  }
  v27 = *(_DWORD *)(v22 + 2056);
  if ( v21 >= v27 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
    goto LABEL_75;
  v28 = ((v21 - v27) >> 16) + 1;
  if ( v21 < v27 )
    v28 = 0LL;
  v18 = *(_QWORD *)(v22 + 8 * v28 + 8);
  if ( (_DWORD)v28 )
    v21 += ((1 - (_DWORD)v28) << 16) - v27;
  if ( v21 >= *(_DWORD *)(v18 + 20) )
  {
LABEL_75:
    v29 = 0;
    v30 = 0LL;
  }
  else
  {
    v29 = 0;
    v30 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                 + 16LL * (unsigned __int8)v21
                 + 8);
  }
  if ( v30 != this )
    v8 = 0LL;
  *(_BYTE *)(v8 + 15) |= 4u;
  if ( v4 )
  {
    v56.right = 0;
    Region = RGNMEMOBJ::AllocateRegion(0x70uLL);
    *(_QWORD *)&v56.left = Region;
    v33 = Region;
    if ( Region )
    {
      *((_DWORD *)Region + 20) = 16;
      *((_DWORD *)Region + 21) = 1;
      *((_QWORD *)Region + 12) = 0LL;
      *((_QWORD *)Region + 13) = 0LL;
      v34 = *((_QWORD *)Region + 11);
      v57 = v4;
      *(_DWORD *)v34 = 0;
      *(_DWORD *)(v34 + 4) = 0x80000000;
      *(_QWORD *)(v34 + 8) = 0x7FFFFFFFLL;
      *((_QWORD *)v33 + 5) = v34 + 16;
      *((_QWORD *)v33 + 3) = 112LL;
      *((_QWORD *)v33 + 4) = 0LL;
      *((_QWORD *)v33 + 7) = (char *)v33 + 48;
      *((_QWORD *)v33 + 6) = (char *)v33 + 48;
      v31 = RGNOBJ::iCombine((RGNOBJ *)&v56, (struct RGNOBJ *)&v57, (struct RGNOBJ *)&v54, v3);
      if ( v31 )
      {
        v33 = *(REGION **)&v56.left;
        v35 = (REGION *)v57;
        ++*(_DWORD *)(*(_QWORD *)&v56.left + 32LL);
        *((_QWORD *)this + 20) = v33;
        if ( (*((_DWORD *)v35 + 8))-- == 1 )
          REGION::vDeleteREGION(v35);
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)&v56.left);
        v33 = 0LL;
      }
    }
    else
    {
      v31 = 0;
    }
    REGION::vDeleteREGION(v54);
    if ( v56.right != 1 )
      goto LABEL_45;
    v48 = v33;
    goto LABEL_79;
  }
  if ( v3 != 1 )
  {
    v52 = 0LL;
    v53 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v52, 112LL, v18);
    v50 = 0LL;
    v51 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v50, 112LL, v37);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v50);
    v38 = v52;
    v57 = 0LL;
    if ( v52 )
    {
      if ( !v50 )
      {
        REGION::vDeleteREGION(v52);
        v38 = 0LL;
        v31 = 0;
        goto LABEL_59;
      }
      DC::vGet_sizlWindow(this, &v57);
      cx = v57.cx;
      v40 = 0;
      cy = v57.cy;
      v42 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v57);
        if ( (v42[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v29 = v42[646];
          cx += v29;
          v40 = v42[647];
          cy += v40;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
          PsLeavePriorityRegion();
        }
      }
      v43 = 1016LL;
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
        v43 = 1024LL;
      v44 = *(_DWORD *)((char *)this + v43);
      v45 = cx - v44;
      v56.left = v29 - v44;
      v46 = *(_DWORD *)((char *)this + v43 + 4);
      v56.top = v40 - v46;
      v56.bottom = cy - v46;
      v56.right = v45;
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v56) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v56) )
      {
        v31 = v47;
        v49 = v38;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v50, &v56);
        v31 = RGNOBJ::iCombine((RGNOBJ *)&v52, (struct RGNOBJ *)&v50, (struct RGNOBJ *)&v54, v58);
        if ( v31 )
        {
          v38 = v52;
          ++*((_DWORD *)v52 + 8);
          *((_QWORD *)this + 20) = v38;
LABEL_59:
          REGION::vDeleteREGION(v54);
          RGNMEMOBJTMP::~RGNMEMOBJTMP(&v50);
          if ( v53 != 1 )
            goto LABEL_45;
          v48 = v38;
LABEL_79:
          REGION::vDeleteREGION(v48);
LABEL_45:
          if ( v55 == 1 )
            REGION::vDeleteREGION(0LL);
          return v31;
        }
        v49 = v52;
      }
      REGION::vDeleteREGION(v49);
      v38 = 0LL;
      goto LABEL_59;
    }
    v31 = 0;
    goto LABEL_59;
  }
  ++*(_DWORD *)(v11 + 32);
  *((_QWORD *)this + 20) = v11;
  return 2;
}
