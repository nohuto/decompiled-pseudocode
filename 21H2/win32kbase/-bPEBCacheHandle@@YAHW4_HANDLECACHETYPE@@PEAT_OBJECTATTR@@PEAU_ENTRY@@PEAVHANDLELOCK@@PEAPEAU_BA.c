/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0034CB0
 * Callers:
 *     bDeleteBrush @ 0x1C001C340 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C00314E0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0015EF8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x1C001616C (EtwTraceGdiTransformHandle.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0032170 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C0125BF4 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD **a4, __int64 a5)
{
  _DWORD *v6; // r15
  unsigned int v7; // ebx
  GdiHandleManager *v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct OBJECT *v13; // r10
  __int64 v14; // r13
  unsigned int v15; // ebx
  unsigned int v16; // r12d
  __int64 v17; // rdi
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // r14
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct OBJECT *v26; // rdx
  unsigned __int64 v27; // rcx
  char v28; // al
  int v29; // edx
  int v30; // ecx
  signed __int32 v31; // r8d
  char v32; // r10
  __int64 ProcessPeb; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  struct OBJECT *v38; // r12
  _DWORD **v39; // r14
  unsigned int v40; // ebx
  GdiHandleManager *v41; // rdi
  __int64 v42; // rcx
  unsigned int v43; // r8d
  unsigned int v44; // edx
  __int64 v45; // rcx
  _DWORD *v46; // rdx
  unsigned int v47; // ebx
  __int64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // r8d
  __int64 v51; // rdx
  int v53; // ecx
  unsigned int v54; // eax
  int EtwGdiHandleType; // eax
  signed __int32 v56[16]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v57; // [rsp+40h] [rbp-B8h]
  struct OBJECT *v58; // [rsp+48h] [rbp-B0h]
  unsigned int v59; // [rsp+50h] [rbp-A8h]
  unsigned int v60; // [rsp+58h] [rbp-A0h]
  int v61; // [rsp+60h] [rbp-98h]
  _QWORD *v62; // [rsp+68h] [rbp-90h]
  _DWORD *v63; // [rsp+70h] [rbp-88h]
  _DWORD *v64; // [rsp+78h] [rbp-80h]
  struct OBJECT *v65; // [rsp+80h] [rbp-78h]
  __int64 v66; // [rsp+88h] [rbp-70h]
  __int64 v67; // [rsp+90h] [rbp-68h]
  __int64 v68; // [rsp+98h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+A0h] [rbp-58h]
  __int64 v70; // [rsp+A8h] [rbp-50h]
  __int64 v71; // [rsp+B0h] [rbp-48h]
  __int64 v72; // [rsp+B8h] [rbp-40h]
  int v73; // [rsp+100h] [rbp+8h]
  _QWORD *CurrentProcessWin32Process; // [rsp+110h] [rbp+18h]

  v73 = a1;
  v6 = a2;
  v57 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v7 = *a3 & 0xFFFFFF;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = (unsigned __int16)v7;
    }
    else
    {
      v7 = (unsigned __int16)v7;
    }
  }
  v8 = gpHandleManager;
  v9 = *((_QWORD *)gpHandleManager + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_96;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
  v66 = v12;
  if ( (_DWORD)v11 )
    v7 += ((1 - (_DWORD)v11) << 16) - v10;
  if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_96:
    v13 = 0LL;
  else
    v13 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  v58 = v13;
  v65 = v13;
  v14 = *(_QWORD *)v13;
  v15 = (unsigned __int16)*(_QWORD *)v13 | ((unsigned int)*(_QWORD *)v13 >> 8) & 0xFF0000;
  if ( v15 < 0x10000 )
  {
    v16 = (unsigned __int16)*(_QWORD *)v13 | ((unsigned int)*(_QWORD *)v13 >> 8) & 0xFF0000;
  }
  else
  {
    v16 = (unsigned __int16)*(_QWORD *)v13;
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v53 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                   (unsigned __int16)*(_QWORD *)v13,
                                   1)
            + 13);
      v54 = v15;
      if ( v53 == HIWORD(v15) )
        v54 = (unsigned __int16)v15;
      v16 = v54;
      v13 = v58;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v8 + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v58;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
  }
  v17 = *((_QWORD *)v8 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    v22 = 0LL;
  }
  else
  {
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
    v67 = v20;
    if ( (_DWORD)v19 )
      v21 = v15 + ((1 - (_DWORD)v19) << 16) - v18;
    else
      v21 = v15;
    v22 = 0LL;
    if ( v21 < *(_DWORD *)(v20 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8LL * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8) )
    {
      v22 = *(_QWORD *)v20 + 24LL * v21;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v17,
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v58;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v6 = a2;
  }
  v23 = *(_DWORD *)(v17 + 2056);
  if ( v15 >= v23 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_113;
  if ( v15 >= v23 )
    v24 = ((v15 - v23) >> 16) + 1;
  else
    v24 = 0LL;
  v25 = *(_QWORD *)(v17 + 8 * v24 + 8);
  v68 = v25;
  if ( (_DWORD)v24 )
    v15 += ((1 - (_DWORD)v24) << 16) - v23;
  if ( v15 >= *(_DWORD *)(v25 + 20) )
LABEL_113:
    v26 = 0LL;
  else
    v26 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8LL * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  if ( v26 != v13 )
    v22 = 0LL;
  if ( v16 >= 0x10000 || *(_DWORD *)v8 > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*(_BYTE *)(v22 + 14));
    EtwTraceGdiTransformHandle(v14, v14, EtwGdiHandleType);
  }
  else
  {
    ++*(_BYTE *)(v22 + 13);
    v27 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v22 + 12) << 16);
    *(_QWORD *)v13 = v27;
    *(_QWORD *)v22 = *(_QWORD *)v22 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v27 | (unsigned __int64)(((unsigned int)v27 >> 8) & 0xFF0000);
    v28 = GetEtwGdiHandleType(*(_BYTE *)(v22 + 14));
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    {
      v56[14] = v31;
      McTemplateK0ppqqq_EtwWriteTransfer(v30, v29, v31, v14, v32, v28);
    }
  }
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v34 = ProcessPeb;
  if ( ProcessPeb )
  {
    v61 = 0;
    if ( *(_QWORD *)(ProcessPeb + 320)
      || (Self = KeGetPcr()->NtTib.Self,
          _InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL)) )
    {
      v38 = v58;
    }
    else
    {
      v61 = 1;
      v35 = (unsigned int)gCacheHandleEntries[v73];
      if ( *(_DWORD *)(ProcessPeb + 4LL * v73 + 328) < (unsigned int)v35 )
      {
        v36 = (_QWORD *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + v73) + 43LL));
        v62 = v36;
        v37 = &v36[v35];
        while ( 1 )
        {
          if ( v36 == v37 )
            goto LABEL_72;
          if ( !*v36 )
            break;
          v62 = ++v36;
        }
        v38 = v58;
        v70 = *(_QWORD *)v58;
        *v36 = v70;
        ++*(_DWORD *)(ProcessPeb + 4LL * v73 + 328);
        *v6 &= 0xFFFFFFF5;
        *v6 |= 1u;
        _InterlockedOr(v56, 0);
        v57 = 1;
        v39 = a4;
        v40 = **a4 & 0xFFFFFF;
        v59 = v40;
        if ( v40 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager <= 0x10000u )
          {
            v40 = (unsigned __int16)v40;
            v59 = (unsigned __int16)v40;
            goto LABEL_48;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v40,
                                      1)
               + 13) == HIWORD(v40) )
            v40 = (unsigned __int16)v40;
        }
        v59 = v40;
LABEL_48:
        v41 = gpHandleManager;
        v42 = *((_QWORD *)gpHandleManager + 2);
        v43 = *(_DWORD *)(v42 + 2056);
        if ( v40 >= v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
        {
          v46 = 0LL;
        }
        else
        {
          if ( v40 >= v43 )
            v44 = ((v40 - v43) >> 16) + 1;
          else
            v44 = 0;
          v45 = *(_QWORD *)(v42 + 8LL * v44 + 8);
          v71 = v45;
          if ( v44 )
            v40 += ((1 - v44) << 16) - v43;
          if ( v40 >= *(_DWORD *)(v45 + 20) )
            v46 = 0LL;
          else
            v46 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8LL * (v40 >> 8)) + 16LL * (unsigned __int8)v40 + 8);
          v63 = v46;
        }
        v64 = v46;
        v47 = (unsigned __int16)*v46 | (*v46 >> 8) & 0xFF0000;
        if ( v47 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v46,
                                        1)
                 + 13) == HIWORD(v47) )
              v47 = (unsigned __int16)v47;
          }
          else
          {
            v47 = (unsigned __int16)*v46;
          }
          v39 = a4;
        }
        v60 = v47;
        if ( v47 >= 0x10000 )
        {
          if ( *(_DWORD *)v41 <= 0x10000u )
          {
            v60 = (unsigned __int16)v47;
            goto LABEL_62;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v41 + 2),
                                      (unsigned __int16)v47,
                                      1)
               + 13) == HIWORD(v47) )
          {
            v60 = (unsigned __int16)v47;
            goto LABEL_62;
          }
        }
        v60 = v47;
LABEL_62:
        v48 = *((_QWORD *)v41 + 2);
        v49 = *(_DWORD *)(v48 + 2056);
        if ( v47 < v49 + ((*(unsigned __int16 *)(v48 + 2) + 0xFFFF) << 16) )
        {
          if ( v47 >= v49 )
            v50 = ((v47 - v49) >> 16) + 1;
          else
            v50 = 0;
          v51 = *(_QWORD *)(v48 + 8LL * v50 + 8);
          v72 = v51;
          if ( v50 )
            v47 += ((1 - v50) << 16) - v49;
          *(_DWORD *)(*(_QWORD *)v51 + 24LL * v47 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v51 + 24) + 8LL * (v47 >> 8)) + 16LL * (unsigned __int8)v47,
            0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v39 + 2) = 0;
        *v39 = 0LL;
        KeLeaveCriticalRegion();
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
          *(_QWORD *)a5 = 0LL;
        }
        goto LABEL_70;
      }
LABEL_72:
      v38 = v58;
LABEL_70:
      *(_QWORD *)(v34 + 320) = 0LL;
    }
  }
  else
  {
    v38 = v58;
  }
  if ( !v57 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v38, 0);
  return v57;
}
