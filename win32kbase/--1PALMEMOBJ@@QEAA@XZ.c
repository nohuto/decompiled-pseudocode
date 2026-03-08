/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910
 * Callers:
 *     EngCreatePalette @ 0x1C009EAD0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C019925C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C0199580 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0199BBC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C031DE4C (bInitPALOBJ.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C0042880 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004A980 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(unsigned int **this)
{
  __int64 v2; // rax
  unsigned int *v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rcx
  GdiHandleEntryDirectory **v7; // rdi
  unsigned int v8; // eax
  struct _ENTRY *v9; // rax
  struct _ENTRY *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // r8
  _DWORD *v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // r10
  void *v27; // rax
  int *v28; // rcx
  void *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _ENTRY *v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]
  int v34; // [rsp+3Ch] [rbp-3Ch]
  struct OBJECT *v35; // [rsp+80h] [rbp+8h] BYREF

  v2 = SGDGetSessionState(this);
  v3 = *this;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      v5 = *v3;
      v35 = 0LL;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v35);
      IsThreadCrossSessionAttached();
      v33 = 1;
      v7 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 8008LL);
      v8 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v7, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000);
      v9 = GdiHandleEntryDirectory::AcquireEntryLock(v7[2], v8, 0);
      v32 = v9;
      v10 = v9;
      if ( !v9 )
      {
LABEL_22:
        KeLeaveCriticalRegion();
LABEL_23:
        *this = 0LL;
        return;
      }
      _m_prefetchw((char *)v9 + 8);
      v11 = (*((_BYTE *)v9 + 15) & 0x20) == 0;
      v12 = *((unsigned int *)v9 + 2);
      v34 = *((_DWORD *)v9 + 2);
      if ( !v11 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
        if ( !v33 )
          goto LABEL_23;
        v10 = v32;
      }
      v13 = *((_BYTE *)v10 + 14);
      if ( v13 == 5 )
      {
        v30 = *((_QWORD *)v3 + 85);
        v31 = 0LL;
      }
      else
      {
        if ( v13 != 16 )
        {
LABEL_7:
          --v3[2];
          v14 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
          v15 = *(_QWORD *)(v14 + 8008);
          v16 = SGDGetSessionState(v14);
          v17 = *(_DWORD *)v10 & 0xFFFFFF;
          v18 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 8008LL);
          if ( v17 >= 0x10000 )
          {
            if ( *(_DWORD *)v18 > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *(GdiHandleEntryDirectory **)(v18 + 16),
                                          (unsigned __int16)v17,
                                          1)
                   + 13) == HIWORD(v17) )
                v17 = (unsigned __int16)v17;
            }
            else
            {
              v17 = (unsigned __int16)v17;
            }
          }
          v19 = *(_QWORD *)(v18 + 16);
          v20 = *(_DWORD *)(v19 + 2056);
          if ( v17 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16)
            || (v17 >= v20
              ? (v21 = *(_QWORD *)(v19 + 8LL * (((v17 - v20) >> 16) + 1) + 8), v17 += -65536 * ((v17 - v20) >> 16) - v20)
              : (v21 = *(_QWORD *)(v19 + 8)),
                v17 >= *(_DWORD *)(v21 + 20)) )
          {
            v22 = 0LL;
          }
          else
          {
            v22 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                             + 16LL * (unsigned __int8)v17
                             + 8);
          }
          v23 = (unsigned __int16)*v22 | (*v22 >> 8) & 0xFF0000;
          if ( v23 >= 0x10000 )
          {
            if ( *(_DWORD *)v15 > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *(GdiHandleEntryDirectory **)(v15 + 16),
                                          (unsigned __int16)*v22,
                                          1)
                   + 13) == HIWORD(v23) )
                v23 = (unsigned __int16)v23;
            }
            else
            {
              v23 = (unsigned __int16)*v22;
            }
          }
          v24 = *(_QWORD *)(v15 + 16);
          v25 = *(_DWORD *)(v24 + 2056);
          if ( v23 < v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
          {
            if ( v23 >= v25 )
            {
              v26 = *(_QWORD *)(v24 + 8LL * (((v23 - v25) >> 16) + 1) + 8);
              v23 += -65536 * ((v23 - v25) >> 16) - v25;
            }
            else
            {
              v26 = *(_QWORD *)(v24 + 8);
            }
            *(_DWORD *)(*(_QWORD *)v26 + 24LL * v23 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v23 >> 8)) + 16LL * (unsigned __int8)v23,
              0LL);
            KeLeaveCriticalRegion();
          }
          goto LABEL_22;
        }
        v30 = *((_QWORD *)v3 + 17);
        v31 = 2LL;
      }
      TrackObjectReferenceDecrement(v31, v30);
      goto LABEL_7;
    }
    v27 = HmgRemoveObjectImpl(*(struct HOBJ__ **)v3, 0, 1, 1u, 8, 0LL);
    v28 = (int *)*this;
    if ( !v27 )
    {
      HmgDecrementShareReferenceCountEx(v28, 0LL);
      goto LABEL_23;
    }
    if ( v28 != *((int **)v28 + 15) )
    {
      v35 = (struct OBJECT *)*((_QWORD *)v28 + 15);
      XEPALOBJ::vUnrefPalette(&v35);
    }
    v29 = (void *)*((_QWORD *)*this + 13);
    if ( v29 )
    {
      if ( v29 != *(void **)(v4 + 3936) )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v29);
      *((_QWORD *)*this + 13) = 0LL;
    }
    XEPALOBJ::FreePaletteMemory((XEPALOBJ *)this);
  }
}
