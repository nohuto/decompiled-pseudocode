/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0
 * Callers:
 *     GreIntersectClipRect @ 0x1C003ADF0 (GreIntersectClipRect.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0002D18 (-Allocate@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C000B8B0 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003E160 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E3F0 (-vInit@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003F180 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C005C18C (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C005FDB0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008F2C4 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0091344 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0098FE4 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     memset @ 0x1C00D6A00 (memset.c)
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
  unsigned int v33; // r15d
  unsigned int v34; // r13d
  __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v37; // r14
  __int64 v38; // rax
  PVOID v39; // rax
  char *v40; // rsi
  void *v41; // rdi
  unsigned int v42; // ebx
  _DWORD *v43; // rcx
  int v44; // r14d
  LONG cx; // ebx
  int v46; // r15d
  LONG cy; // r13d
  _DWORD *v48; // rdi
  _DWORD *v49; // rcx
  LONG v50; // ebx
  int v51; // eax
  void *v52; // r8
  __int64 v53; // rcx
  void *v54; // r8
  int v55; // eax
  void *v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // rbx
  _QWORD *v59; // rcx
  PVOID Region; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v61[8]; // [rsp+28h] [rbp-21h] BYREF
  struct tagSIZE v62; // [rsp+30h] [rbp-19h] BYREF
  PVOID v63; // [rsp+38h] [rbp-11h] BYREF
  __int64 v64; // [rsp+40h] [rbp-9h] BYREF
  int v65; // [rsp+48h] [rbp-1h]
  PVOID Entry; // [rsp+50h] [rbp+7h] BYREF
  struct _RECTL v67; // [rsp+58h] [rbp+Fh] BYREF

  *(_QWORD *)&v67.left = *((_QWORD *)this + 20);
  v4 = (a2->left & 0xF8000000) == 0;
  v5 = a2->left & 0xF8000000;
  Entry = this;
  v65 = a3;
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
    v63 = 0LL;
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
  v63 = v10;
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
      v62 = (struct tagSIZE)(v11 + 1);
      LODWORD(v64) = v18 << 12;
    }
    else
    {
      v53 = v18 << 12;
      v54 = (void *)(v53 + (v11[1] ^ v11[2]));
      v64 = v53;
      v62 = (struct tagSIZE)(v11 + 1);
      Region = v54;
      v55 = MmCommitSessionMappedView(v54, 4096LL);
      if ( v55 < 0 )
        goto LABEL_43;
      memset(Region, 0, 0x1000uLL);
      ++*((_DWORD *)v11 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v11[3] ^ v11[2]), v15);
    RtlSetBit((PRTL_BITMAP)(v11[3] ^ v11[2]), v15);
    if ( ++*((_DWORD *)v11 + 8) >= 0x100u )
      *((_DWORD *)v11 + 8) = 0;
    v19 = (unsigned int)v64 + (v11[2] ^ **(_QWORD **)&v62);
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
    v10 = *(_QWORD **)v63;
    v63 = v10;
  }
  while ( v10 != (_QWORD *)v7 );
  v9 = 0LL;
LABEL_71:
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  v56 = NSInstrumentation::CSectionEntry<32768,128>::Create();
  v57 = v56;
  if ( v56 )
  {
    v9 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*((__int64 **)v56 + 4));
    if ( v9 )
    {
      v58 = *(_QWORD *)(v7 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v58, 0LL);
      v59 = *(_QWORD **)(v7 + 8);
      if ( *v59 != v7 )
        __fastfail(3u);
      v57[1] = v59;
      *v57 = v7;
      *v59 = v57;
      *(_DWORD *)(v7 + 32) += 256;
      *(_QWORD *)(v7 + 8) = v57;
      ExReleasePushLockExclusiveEx(v58, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v57);
      ExFreePoolWithTag(v57, 0);
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
      REGION::vDeleteREGION(v20);
      goto LABEL_80;
    }
  }
  v63 = v20;
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
  v62 = v27;
  RGNCOREOBJ::vSet((RGNCOREOBJ *)&v62, a2);
  v28 = Entry;
  *((_DWORD *)Entry + 9) |= 0x10u;
  v30 = *(struct tagSIZE *)(*(_QWORD *)(SGDGetSessionState(v29) + 24) + 8008LL);
  v31 = (unsigned __int16)*v28 | (*v28 >> 8) & 0xFF0000;
  v62 = v30;
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
    if ( *(_DWORD *)v62.cx > 0x10000u )
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
  v41 = *(void **)&v67.left;
  if ( !*(_QWORD *)&v67.left )
  {
    if ( v65 == 1 )
    {
      ++*((_DWORD *)v22 + 19);
      *((_QWORD *)v40 + 20) = v22;
      return 2;
    }
    Region = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Region, 0x70u);
    v64 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v64, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v64);
    v62 = 0LL;
    if ( Region )
    {
      if ( v64 )
      {
        DC::vGet_sizlWindow((DC *)v40, &v62);
        v44 = 0;
        cx = v62.cx;
        v46 = 0;
        cy = v62.cy;
        v48 = (_DWORD *)*((_QWORD *)v40 + 6);
        if ( *((_QWORD *)v40 + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v61);
          if ( (v48[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)v40 + 62) + 112LL) < 0 )
          {
            v44 = v48[640];
            cx += v44;
            v46 = v48[641];
            cy += v46;
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v61);
        }
        if ( (*((_DWORD *)v40 + 10) & 1) != 0 )
          v49 = v40 + 1024;
        else
          v49 = v40 + 1016;
        v50 = cx - *v49;
        v67.left = v44 - *v49;
        v51 = v49[1];
        v67.top = v46 - v51;
        v67.bottom = cy - v51;
        v67.right = v50;
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v67) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v67) )
        {
          v42 = 0;
          REGION::vDeleteREGION(v52);
          Region = 0LL;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v64, &v67);
          v42 = RGNOBJ::iCombine((RGNOBJ *)&Region, (struct RGNOBJ *)&v64, (struct RGNOBJ *)&v63, v65);
          if ( v42 )
          {
            ++*((_DWORD *)Region + 19);
            *((_QWORD *)v40 + 20) = Region;
          }
          else
          {
            REGION::vDeleteREGION(Region);
            Region = 0LL;
          }
        }
        goto LABEL_65;
      }
      REGION::vDeleteREGION(Region);
      Region = 0LL;
    }
    v42 = 0;
LABEL_65:
    REGION::vDeleteREGION(v63);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v64);
    return v42;
  }
  Region = RGNMEMOBJ::AllocateRegion(0x70u);
  if ( Region && (RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region, 0x70u), Region) )
  {
    Entry = v41;
    v42 = RGNOBJ::iCombine((RGNOBJ *)&Region, (struct RGNOBJ *)&Entry, (struct RGNOBJ *)&v63, v65);
    if ( v42 )
    {
      v43 = Entry;
      ++*((_DWORD *)Region + 19);
      *((_QWORD *)v40 + 20) = Region;
      v4 = v43[19]-- == 1;
      if ( v4 )
        REGION::vDeleteREGION(v43);
    }
    else
    {
      REGION::vDeleteREGION(Region);
      Region = 0LL;
    }
  }
  else
  {
    v42 = 0;
  }
  REGION::vDeleteREGION(v63);
  return v42;
}
