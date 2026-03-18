/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010
 * Callers:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0064500 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x1C006476C (EtwTraceGdiTransformHandle.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C00E5922 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD **a4, __int64 a5)
{
  _DWORD *v6; // r15
  unsigned int v7; // ebx
  GdiHandleManager *v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r9
  struct OBJECT *v13; // r10
  __int64 v14; // r13
  unsigned int v15; // ebx
  unsigned int v16; // r12d
  __int64 v17; // rdi
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // r14
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct OBJECT *v26; // rax
  unsigned __int64 v27; // rcx
  char v28; // al
  int v29; // ecx
  int v30; // r8d
  _QWORD *v31; // r10
  __int64 ProcessPeb; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  struct OBJECT *v37; // r12
  _DWORD **v38; // r14
  unsigned int v39; // ebx
  GdiHandleManager *v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // r9d
  unsigned int v43; // edx
  __int64 v44; // r8
  _DWORD *v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rcx
  unsigned int v48; // r8d
  unsigned int v49; // edx
  _QWORD *v50; // r9
  int v52; // ecx
  unsigned int v53; // eax
  unsigned int EtwGdiHandleType; // eax
  signed __int32 v55[14]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-A8h]
  unsigned int v57; // [rsp+48h] [rbp-A0h]
  unsigned int v58; // [rsp+50h] [rbp-98h]
  int v59; // [rsp+58h] [rbp-90h]
  _QWORD *CurrentProcessWin32Process; // [rsp+60h] [rbp-88h]
  _QWORD *v61; // [rsp+68h] [rbp-80h]
  _DWORD *v62; // [rsp+70h] [rbp-78h]
  struct OBJECT *v63; // [rsp+78h] [rbp-70h]
  struct _NT_TIB *Self; // [rsp+80h] [rbp-68h]
  __int64 v65; // [rsp+88h] [rbp-60h]
  _QWORD *v66; // [rsp+90h] [rbp-58h]
  __int64 v67; // [rsp+98h] [rbp-50h]
  __int64 v68; // [rsp+A0h] [rbp-48h]
  _QWORD *v69; // [rsp+A8h] [rbp-40h]
  int v70; // [rsp+F0h] [rbp+8h]
  struct OBJECT *v72; // [rsp+100h] [rbp+18h]

  v70 = a1;
  v6 = a2;
  v56 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
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
    goto LABEL_95;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
  if ( (_DWORD)v11 )
    v7 += ((1 - (_DWORD)v11) << 16) - v10;
  if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_95:
    v13 = 0LL;
  else
    v13 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  v72 = v13;
  v63 = v13;
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
      v52 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                   (unsigned __int16)*(_QWORD *)v13,
                                   1)
            + 13);
      v53 = v15;
      if ( v52 == HIWORD(v15) )
        v53 = (unsigned __int16)v15;
      v16 = v53;
      v13 = v72;
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
      v13 = v72;
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
                                  *((GdiHandleEntryDirectory **)v8 + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v72;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v6 = a2;
  }
  v23 = *(_DWORD *)(v17 + 2056);
  if ( v15 >= v23 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_112;
  if ( v15 >= v23 )
    v24 = ((v15 - v23) >> 16) + 1;
  else
    v24 = 0LL;
  v25 = *(_QWORD *)(v17 + 8 * v24 + 8);
  if ( (_DWORD)v24 )
    v15 += ((1 - (_DWORD)v24) << 16) - v23;
  if ( v15 >= *(_DWORD *)(v25 + 20) )
LABEL_112:
    v26 = 0LL;
  else
    v26 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8LL * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  if ( v26 != v13 )
    v22 = 0LL;
  if ( v16 >= 0x10000 || *(_DWORD *)v8 > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14));
    EtwTraceGdiTransformHandle(v14, v14, EtwGdiHandleType);
  }
  else
  {
    ++*(_BYTE *)(v22 + 13);
    v27 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v22 + 12) << 16);
    *(_QWORD *)v13 = v27;
    *(_QWORD *)v22 = *(_QWORD *)v22 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v27 | (unsigned __int64)(((unsigned int)v27 >> 8) & 0xFF0000);
    v28 = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14));
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
      McTemplateK0ppqqq_EtwWriteTransfer(v29, *v31, v30, v14, *v31, v28, v55[12], v30);
  }
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v33 = ProcessPeb;
  if ( ProcessPeb )
  {
    v59 = 0;
    if ( *(_QWORD *)(ProcessPeb + 320)
      || (Self = KeGetPcr()->NtTib.Self,
          _InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL)) )
    {
      v37 = v72;
    }
    else
    {
      v59 = 1;
      v34 = (unsigned int)gCacheHandleEntries[v70];
      if ( *(_DWORD *)(ProcessPeb + 4LL * v70 + 328) < (unsigned int)v34 )
      {
        v35 = (_QWORD *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + v70) + 43LL));
        v61 = v35;
        v36 = &v35[v34];
        while ( 1 )
        {
          if ( v35 == v36 )
            goto LABEL_72;
          if ( !*v35 )
            break;
          v61 = ++v35;
        }
        v37 = v72;
        *v35 = *(_QWORD *)v72;
        ++*(_DWORD *)(ProcessPeb + 4LL * v70 + 328);
        *v6 &= 0xFFFFFFF5;
        *v6 |= 1u;
        _InterlockedOr(v55, 0);
        v56 = 1;
        v38 = a4;
        v39 = **a4 & 0xFFFFFF;
        v57 = v39;
        if ( v39 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager <= 0x10000u )
          {
            v39 = (unsigned __int16)v39;
            v57 = (unsigned __int16)v39;
            goto LABEL_48;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v39,
                                      1)
               + 13) == HIWORD(v39) )
            v39 = (unsigned __int16)v39;
        }
        v57 = v39;
LABEL_48:
        v40 = gpHandleManager;
        v41 = *((_QWORD *)gpHandleManager + 2);
        v65 = v41;
        v42 = *(_DWORD *)(v41 + 2056);
        if ( v39 >= v42 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
        {
          v45 = 0LL;
        }
        else
        {
          if ( v39 >= v42 )
            v43 = ((v39 - v42) >> 16) + 1;
          else
            v43 = 0;
          v44 = *(_QWORD *)(v41 + 8LL * v43 + 8);
          if ( v43 )
            v39 += ((1 - v43) << 16) - v42;
          if ( v39 >= *(_DWORD *)(v44 + 20) )
          {
            v45 = 0LL;
          }
          else
          {
            v66 = *(_QWORD **)(v44 + 24);
            v45 = *(_DWORD **)(*(_QWORD *)(*v66 + 8LL * (v39 >> 8)) + 16LL * (unsigned __int8)v39 + 8);
          }
          CurrentProcessWin32Process = v45;
        }
        v62 = v45;
        v46 = (unsigned __int16)*v45 | (*v45 >> 8) & 0xFF0000;
        if ( v46 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v45,
                                        1)
                 + 13) == HIWORD(v46) )
              v46 = (unsigned __int16)v46;
          }
          else
          {
            v46 = (unsigned __int16)*v45;
          }
          v38 = a4;
        }
        v58 = v46;
        if ( v46 >= 0x10000 )
        {
          if ( *(_DWORD *)v40 <= 0x10000u )
          {
            v58 = (unsigned __int16)v46;
            goto LABEL_62;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v40 + 2),
                                      (unsigned __int16)v46,
                                      1)
               + 13) == HIWORD(v46) )
          {
            v58 = (unsigned __int16)v46;
            goto LABEL_62;
          }
        }
        v58 = v46;
LABEL_62:
        v47 = *((_QWORD *)v40 + 2);
        v67 = v47;
        v48 = *(_DWORD *)(v47 + 2056);
        v68 = v47;
        if ( v46 < v48 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16) )
        {
          if ( v46 >= v48 )
            v49 = ((v46 - v48) >> 16) + 1;
          else
            v49 = 0;
          v50 = *(_QWORD **)(v47 + 8LL * v49 + 8);
          if ( v49 )
            v46 += ((1 - v49) << 16) - v48;
          *(_DWORD *)(*v50 + 24LL * v46 + 8) &= ~1u;
          v69 = (_QWORD *)v50[3];
          ExReleasePushLockExclusiveEx(*(_QWORD *)(*v69 + 8LL * (v46 >> 8)) + 16LL * (unsigned __int8)v46, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v38 + 2) = 0;
        *v38 = 0LL;
        KeLeaveCriticalRegion();
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
          *(_QWORD *)a5 = 0LL;
        }
        goto LABEL_70;
      }
LABEL_72:
      v37 = v72;
LABEL_70:
      *(_QWORD *)(v33 + 320) = 0LL;
    }
  }
  else
  {
    v37 = v72;
  }
  if ( !v56 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v37, 0);
  return v56;
}
