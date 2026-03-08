/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850
 * Callers:
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0002018 (-Allocate@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C001A8B0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0029CB8 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0043470 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0043490 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051B70 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0053560 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  bool v4; // zf
  unsigned int v5; // eax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdi
  ULONG v13; // r8d
  ULONG ClearBits; // eax
  ULONG v15; // r13d
  ULONG v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rsi
  char *v20; // rdi
  __int64 v21; // rcx
  char *v22; // rbx
  __int64 v23; // rax
  void *v24; // rax
  char *v25; // rcx
  __int64 v26; // rax
  struct tagSIZE v27; // rcx
  _DWORD *v28; // rdi
  __int64 v29; // rcx
  struct tagSIZE v30; // r14
  unsigned int v31; // edi
  __int64 v32; // rsi
  unsigned int v33; // r12d
  unsigned int v34; // r13d
  __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v37; // r14
  __int64 v38; // rax
  PVOID v39; // rax
  char *v40; // rsi
  void *v41; // rdi
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  _DWORD *v44; // rcx
  int v45; // r14d
  LONG cx; // ebx
  int v47; // r12d
  LONG cy; // r13d
  _DWORD *v49; // rdi
  _DWORD *v50; // rcx
  LONG v51; // ebx
  int v52; // eax
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  char *v55; // r8
  int v56; // eax
  void *v57; // rax
  _QWORD *v58; // rdi
  __int64 v59; // rbx
  _QWORD *v60; // rcx
  PVOID Region; // [rsp+20h] [rbp-29h] BYREF
  char v62[8]; // [rsp+28h] [rbp-21h] BYREF
  struct tagSIZE v63; // [rsp+30h] [rbp-19h] BYREF
  PVOID v64; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int64 v65; // [rsp+40h] [rbp-9h] BYREF
  int v66; // [rsp+48h] [rbp-1h]
  PVOID Entry; // [rsp+50h] [rbp+7h] BYREF
  struct _RECTL v68; // [rsp+58h] [rbp+Fh] BYREF

  *(_QWORD *)&v68.left = *((_QWORD *)this + 20);
  v4 = (a2->left & 0xF8000000) == 0;
  v5 = a2->left & 0xF8000000;
  Entry = this;
  v66 = a3;
  if ( !v4 && v5 != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (LOBYTE(this) = (a2->top & 0xF8000000) != 0, ((unsigned __int8)this & ((a2->top & 0xF8000000) != -134217728)) != 0) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 56LL);
  if ( !v7 )
  {
LABEL_80:
    v25 = 0LL;
    v64 = 0LL;
    v22 = 0LL;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v7 + 36) )
  {
    v20 = (char *)ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(v7 + 24));
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8, 0LL);
  v10 = *(_QWORD **)v7;
  v64 = v10;
  if ( v10 == (_QWORD *)v7 )
    goto LABEL_71;
  do
  {
    v11 = (__int64 *)v10[4];
    v12 = *v11;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12, 0LL);
    v13 = 0;
    if ( *((_DWORD *)v11 + 8) < 0x100u )
      v13 = *((_DWORD *)v11 + 8);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v11[2] ^ v11[3]), 1u, v13);
    v15 = ClearBits;
    if ( ClearBits == -1 )
    {
LABEL_43:
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_44;
    }
    v16 = ClearBits;
    v17 = *((_DWORD *)v11 + 9);
    v18 = v16 >> 5;
    if ( v17 >= 8 || v18 < v17 )
    {
      v63 = (struct tagSIZE)(v11 + 1);
      LODWORD(v65) = v18 << 12;
    }
    else
    {
      v54 = v18 << 12;
      v55 = (char *)(v54 + (v11[2] ^ v11[1]));
      v63 = (struct tagSIZE)(v11 + 1);
      v65 = v54;
      Region = v55;
      v56 = MmCommitSessionMappedView(v55, 4096LL);
      if ( v56 < 0 )
        goto LABEL_43;
      memset(Region, 0, 0x1000uLL);
      ++*((_DWORD *)v11 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v11[2] ^ v11[3]), v15);
    RtlSetBit((PRTL_BITMAP)(v11[2] ^ v11[3]), v15);
    if ( ++*((_DWORD *)v11 + 8) >= 0x100u )
      *((_DWORD *)v11 + 8) = 0;
    v19 = (unsigned int)v65 + (v11[2] ^ **(_QWORD **)&v63);
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    v20 = (char *)(v19 + ((unsigned __int8)(v15 & 0x1F) << 7));
    if ( v20 )
    {
      ExReleasePushLockSharedEx(v8, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_18;
    }
LABEL_44:
    v10 = *(_QWORD **)v64;
    v64 = v10;
  }
  while ( v10 != (_QWORD *)v7 );
  v9 = 0LL;
LABEL_71:
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  v57 = NSInstrumentation::CSectionEntry<32768,128>::Create();
  v58 = v57;
  if ( v57 )
  {
    v9 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*((__int64 **)v57 + 4));
    if ( v9 )
    {
      v59 = *(_QWORD *)(v7 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v59, 0LL);
      v60 = *(_QWORD **)(v7 + 8);
      if ( *v60 != v7 )
        __fastfail(3u);
      v58[1] = v60;
      *v58 = v7;
      *v60 = v58;
      *(_DWORD *)(v7 + 32) += 256;
      *(_QWORD *)(v7 + 8) = v58;
      ExReleasePushLockExclusiveEx(v59, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v58);
      ExFreePoolWithTag(v58, 0);
    }
  }
  v20 = (char *)v9;
LABEL_18:
  v22 = v20;
  if ( v20 )
  {
    v23 = SGDGetSessionState(v21);
    v24 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
            *(NSInstrumentation::CLeakTrackingAllocator **)(v23 + 24),
            *(void **)(*(_QWORD *)(v23 + 24) + 6376LL));
    *((_QWORD *)v20 + 4) = v24;
    if ( !v24 )
    {
      REGION::vDeleteREGION((unsigned __int64)v20);
      goto LABEL_80;
    }
  }
  v64 = v20;
  v25 = v20;
  if ( v20 )
  {
    v26 = *((_QWORD *)v20 + 4);
    v27 = (struct tagSIZE)(v20 + 24);
    *((_DWORD *)v20 + 12) = 16;
    *((_DWORD *)v20 + 13) = 1;
    *(_OWORD *)(v20 + 56) = 0LL;
    *(_DWORD *)v26 = 0;
    *(_DWORD *)(v26 + 4) = 0x80000000;
    *(_QWORD *)(v26 + 8) = 0x7FFFFFFFLL;
    *((_QWORD *)v20 + 5) = v26 + 16;
    *((_DWORD *)v20 + 6) = 112;
    *((_QWORD *)v20 + 9) = 0LL;
    *((_DWORD *)v20 + 20) = 0;
    *((_QWORD *)v20 + 12) = v20 + 88;
    *((_QWORD *)v20 + 11) = v20 + 88;
    goto LABEL_22;
  }
LABEL_66:
  v27 = (struct tagSIZE)(v25 + 24);
  if ( !v22 )
    return 0;
LABEL_22:
  v63 = v27;
  RGNCOREOBJ::vSet((struct _RECTL **)&v63, a2);
  v28 = Entry;
  *((_DWORD *)Entry + 9) |= 0x10u;
  v30 = *(struct tagSIZE *)(*(_QWORD *)(SGDGetSessionState(v29) + 24) + 8008LL);
  v31 = (unsigned __int16)*v28 | (*v28 >> 8) & 0xFF0000;
  v63 = v30;
  if ( v31 >= 0x10000 )
  {
    if ( *(_DWORD *)v30.cx > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(*(_QWORD *)&v30 + 16LL),
                                  (unsigned __int16)v31,
                                  1)
           + 13) == HIWORD(v31) )
        v31 = (unsigned __int16)v31;
    }
    else
    {
      v31 = (unsigned __int16)v31;
    }
  }
  v32 = *(_QWORD *)(*(_QWORD *)&v30 + 16LL);
  v33 = *(_DWORD *)(v32 + 2056);
  v34 = v33 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16);
  if ( v31 >= v34 )
  {
    v37 = 0LL;
  }
  else
  {
    if ( v31 >= v33 )
    {
      v35 = *(_QWORD *)(v32 + 8LL * (((v31 - v33) >> 16) + 1) + 8);
      v36 = v31 + -65536 * ((v31 - v33) >> 16) - v33;
    }
    else
    {
      v35 = *(_QWORD *)(v32 + 8);
      v36 = v31;
    }
    v37 = 0LL;
    if ( v36 < *(_DWORD *)(v35 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                   + 16LL * (unsigned __int8)v36
                   + 8) )
    {
      v37 = *(_QWORD *)v35 + 24LL * v36;
    }
  }
  if ( v31 >= 0x10000 )
  {
    LODWORD(Region) = (unsigned __int16)v31;
    if ( *(_DWORD *)v63.cx > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v32,
                                  (unsigned __int16)v31,
                                  1)
           + 13) == HIWORD(v31) )
        v31 = (unsigned int)Region;
    }
    else
    {
      v31 = (unsigned __int16)v31;
    }
  }
  if ( v31 >= v34
    || (v31 >= v33
      ? (v38 = *(_QWORD *)(v32 + 8LL * (((v31 - v33) >> 16) + 1) + 8), v31 += -65536 * ((v31 - v33) >> 16) - v33)
      : (v38 = *(_QWORD *)(v32 + 8)),
        v31 >= *(_DWORD *)(v38 + 20)) )
  {
    v39 = 0LL;
  }
  else
  {
    v39 = *(PVOID *)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                   + 16LL * (unsigned __int8)v31
                   + 8);
  }
  v40 = (char *)Entry;
  if ( v39 != Entry )
    v37 = 0LL;
  *(_BYTE *)(v37 + 15) |= 4u;
  v41 = *(void **)&v68.left;
  if ( !*(_QWORD *)&v68.left )
  {
    if ( v66 == 1 )
    {
      ++*((_DWORD *)v22 + 19);
      *((_QWORD *)v40 + 20) = v22;
      return 2;
    }
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Region, 0x70u);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v65, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v65);
    v63 = 0LL;
    if ( Region )
    {
      if ( v65 )
      {
        DC::vGet_sizlWindow((DC *)v40, &v63);
        v45 = 0;
        cx = v63.cx;
        v47 = 0;
        cy = v63.cy;
        v49 = (_DWORD *)*((_QWORD *)v40 + 6);
        if ( *((_QWORD *)v40 + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v62);
          if ( (v49[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)v40 + 62) + 112LL) < 0 )
          {
            v45 = v49[640];
            cx += v45;
            v47 = v49[641];
            cy += v47;
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v62);
        }
        if ( (*((_DWORD *)v40 + 10) & 1) != 0 )
          v50 = v40 + 1024;
        else
          v50 = v40 + 1016;
        v51 = cx - *v50;
        v68.left = v45 - *v50;
        v52 = v50[1];
        v68.top = v47 - v52;
        v68.bottom = cy - v52;
        v68.right = v51;
        if ( !ERECTL::bEmpty((ERECTL *)&v68) && ERECTL::bWrapped((ERECTL *)&v68) )
        {
          v42 = 0;
          REGION::vDeleteREGION(v53);
          Region = 0LL;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v65, &v68);
          v42 = RGNOBJ::iCombine((RGNOBJ *)&Region, (struct RGNOBJ *)&v65, (struct RGNOBJ *)&v64, v66);
          if ( v42 )
          {
            ++*((_DWORD *)Region + 19);
            *((_QWORD *)v40 + 20) = Region;
          }
          else
          {
            REGION::vDeleteREGION((unsigned __int64)Region);
            Region = 0LL;
          }
        }
        goto LABEL_65;
      }
      REGION::vDeleteREGION((unsigned __int64)Region);
      Region = 0LL;
    }
    v42 = 0;
LABEL_65:
    REGION::vDeleteREGION((unsigned __int64)v64);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((PVOID *)&v65);
    return v42;
  }
  Region = RGNMEMOBJ::AllocateRegion(112LL);
  if ( !Region )
    goto LABEL_94;
  RGNOBJ::vSet((RGNOBJ *)&Region);
  *((_DWORD *)Region + 6) = 112;
  *((_DWORD *)Region + 19) = 0;
  *((_DWORD *)Region + 18) = 0;
  *((_DWORD *)Region + 20) = 0;
  v43 = (char *)Region + 88;
  *((_QWORD *)Region + 12) = (char *)Region + 88;
  *v43 = v43;
  if ( Region )
  {
    Entry = v41;
    v42 = RGNOBJ::iCombine((RGNOBJ *)&Region, (struct RGNOBJ *)&Entry, (struct RGNOBJ *)&v64, v66);
    if ( v42 )
    {
      v44 = Entry;
      ++*((_DWORD *)Region + 19);
      *((_QWORD *)v40 + 20) = Region;
      v4 = v44[19]-- == 1;
      if ( v4 )
        REGION::vDeleteREGION((unsigned __int64)v44);
    }
    else
    {
      REGION::vDeleteREGION((unsigned __int64)Region);
      Region = 0LL;
    }
  }
  else
  {
LABEL_94:
    v42 = 0;
  }
  REGION::vDeleteREGION((unsigned __int64)v64);
  return v42;
}
