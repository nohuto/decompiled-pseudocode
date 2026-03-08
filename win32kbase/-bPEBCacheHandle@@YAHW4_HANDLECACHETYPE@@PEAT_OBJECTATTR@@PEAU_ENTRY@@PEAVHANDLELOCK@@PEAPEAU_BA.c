/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00542B0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     bDeleteRegion @ 0x1C0053FA0 (bDeleteRegion.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 * Callees:
 *     EtwTraceGdiTransformHandle @ 0x1C001D41C (EtwTraceGdiTransformHandle.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C005168C (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C00EE512 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0274CF0 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r13
  GdiHandleManager *v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct OBJECT *v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // r10d
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct OBJECT *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // di
  __int64 v33; // r8
  __int64 *v34; // r9
  __int64 v35; // rsi
  __int64 ProcessPeb; // rax
  __int64 v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  struct OBJECT *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rsi
  unsigned int v46; // ebx
  __int64 v47; // rcx
  unsigned int v48; // r8d
  unsigned int v49; // edx
  __int64 v50; // r9
  _DWORD *v51; // rax
  unsigned int v52; // ebx
  __int64 v53; // rcx
  unsigned int v54; // r8d
  unsigned int v55; // edx
  _QWORD *v56; // r9
  int v58; // ecx
  unsigned int v59; // eax
  _DWORD *v60; // rax
  int v61; // edx
  int v62; // r8d
  unsigned int EtwGdiHandleType; // eax
  __int64 v64; // r9
  __int64 v65; // r11
  signed __int32 v66[8]; // [rsp+0h] [rbp-108h] BYREF
  struct OBJECT *v67; // [rsp+40h] [rbp-C8h]
  unsigned int v68; // [rsp+48h] [rbp-C0h]
  unsigned int v69; // [rsp+50h] [rbp-B8h]
  unsigned int v70; // [rsp+58h] [rbp-B0h]
  _DWORD *v71; // [rsp+60h] [rbp-A8h]
  _QWORD *v72; // [rsp+68h] [rbp-A0h]
  int v73; // [rsp+70h] [rbp-98h]
  _QWORD *v74; // [rsp+78h] [rbp-90h]
  struct OBJECT *v75; // [rsp+80h] [rbp-88h]
  GdiHandleManager **v76; // [rsp+88h] [rbp-80h]
  struct _NT_TIB *Self; // [rsp+90h] [rbp-78h]
  __int64 v78; // [rsp+98h] [rbp-70h]
  __int64 v79; // [rsp+A0h] [rbp-68h]
  _QWORD *v80; // [rsp+A8h] [rbp-60h]
  __int64 v81; // [rsp+B0h] [rbp-58h]
  __int64 v82; // [rsp+B8h] [rbp-50h]
  _QWORD *v83; // [rsp+C0h] [rbp-48h]
  int v84; // [rsp+110h] [rbp+8h]
  unsigned int v86; // [rsp+120h] [rbp+18h]

  v84 = a1;
  v68 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v8 = CurrentProcessWin32Process;
  v72 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
  {
    v8 = 0LL;
    v72 = 0LL;
  }
  v76 = (GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
  v9 = *v76;
  v10 = *a3 & 0xFFFFFF;
  if ( v10 >= 0x10000 )
  {
    if ( *(_DWORD *)v9 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v9 + 2),
                                  (unsigned __int16)v10,
                                  1)
           + 13) == HIWORD(v10) )
        v10 = (unsigned __int16)v10;
    }
    else
    {
      v10 = (unsigned __int16)v10;
    }
  }
  v11 = *((_QWORD *)v9 + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  v13 = v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16);
  if ( v10 >= v13 )
    goto LABEL_102;
  if ( v10 >= v12 )
    v14 = ((v10 - v12) >> 16) + 1;
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(v11 + 8 * v14 + 8);
  if ( (_DWORD)v14 )
    v10 += ((1 - (_DWORD)v14) << 16) - v12;
  if ( v10 >= *(_DWORD *)(v15 + 20) )
LABEL_102:
    v16 = 0LL;
  else
    v16 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v67 = v16;
  v75 = v16;
  v71 = *(_DWORD **)v16;
  v17 = (unsigned __int16)v71 | ((unsigned int)v71 >> 8) & 0xFF0000;
  if ( v17 < 0x10000 )
  {
    v18 = (unsigned __int16)v71 | ((unsigned int)v71 >> 8) & 0xFF0000;
    v86 = v18;
  }
  else
  {
    v18 = (unsigned __int16)v71;
    v86 = (unsigned __int16)v71;
    if ( *(_DWORD *)v9 > 0x10000u )
    {
      v58 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   (GdiHandleEntryDirectory *)v11,
                                   (unsigned __int16)v71,
                                   1)
            + 13);
      v59 = (unsigned __int16)v71 | ((unsigned int)v71 >> 8) & 0xFF0000;
      if ( v58 == HIWORD(v17) )
        v59 = (unsigned __int16)v71;
      v18 = v59;
      v86 = v59;
      v16 = v67;
    }
  }
  if ( v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v9 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v11,
                                  (unsigned __int16)v71,
                                  1)
           + 13) == ((unsigned __int16)v71 | ((unsigned int)v71 >> 8) & 0xFF0000) >> 16 )
        v17 = (unsigned __int16)v71;
      v18 = v86;
      v16 = v67;
    }
    else
    {
      v17 = (unsigned __int16)v71;
    }
  }
  v19 = 0LL;
  v20 = 0;
  if ( v17 >= v13 )
  {
    v22 = 0;
  }
  else
  {
    if ( v17 >= v12 )
      v21 = ((v17 - v12) >> 16) + 1;
    else
      v21 = 0LL;
    v19 = *(_QWORD *)(v11 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v20 = v17 + ((1 - (_DWORD)v21) << 16) - v12;
    else
      v20 = v17;
    v22 = 1;
  }
  v23 = 0LL;
  if ( v22 )
  {
    if ( v20 >= *(_DWORD *)(v19 + 20) )
      v24 = 0LL;
    else
      v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8LL * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
    if ( v24 )
      v23 = *(_QWORD *)v19 + 24LL * v20;
    v16 = v67;
  }
  if ( v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v9 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v11,
                                  (unsigned __int16)v17,
                                  1)
           + 13) == HIWORD(v17) )
        v17 = (unsigned __int16)v71;
      v18 = v86;
      v16 = v67;
    }
    else
    {
      v17 = (unsigned __int16)v71;
    }
    v8 = v72;
  }
  if ( v17 >= v13 )
    goto LABEL_119;
  if ( v17 >= v12 )
    v25 = ((v17 - v12) >> 16) + 1;
  else
    v25 = 0LL;
  v26 = *(_QWORD *)(v11 + 8 * v25 + 8);
  if ( (_DWORD)v25 )
    v17 += ((1 - (_DWORD)v25) << 16) - v12;
  if ( v17 >= *(_DWORD *)(v26 + 20) )
LABEL_119:
    v27 = 0LL;
  else
    v27 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8LL * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  if ( v27 != v16 )
    v23 = 0LL;
  if ( v18 >= 0x10000 || *(_DWORD *)v9 > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*(_BYTE *)(v23 + 14));
    EtwTraceGdiTransformHandle(v65, v65, EtwGdiHandleType, v64);
  }
  else
  {
    ++*(_BYTE *)(v23 + 13);
    v28 = v18 | ((unsigned __int64)*(unsigned __int16 *)(v23 + 12) << 16);
    *(_QWORD *)v16 = v28;
    *(_QWORD *)v23 = *(_QWORD *)v23 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v28 | (unsigned __int64)(((unsigned int)v28 >> 8) & 0xFF0000);
    v29 = *(_DWORD *)(v23 + 8) & 0xFFFFFFFE;
    v32 = GetEtwGdiHandleType(*(_BYTE *)(v23 + 14));
    v35 = *v34;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    {
      v60 = (_DWORD *)SGDGetUserSessionState(v31, v30, v33, v34);
      McTemplateK0ppqqq_EtwWriteTransfer(*v60, v61, v62, (_DWORD)v71, v35, v32, *v60, v29);
    }
  }
  ProcessPeb = PsGetProcessPeb(*v8);
  v37 = ProcessPeb;
  if ( ProcessPeb )
  {
    v73 = 0;
    if ( *(_QWORD *)(ProcessPeb + 320)
      || (Self = KeGetPcr()->NtTib.Self,
          _InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL)) )
    {
      v42 = v67;
    }
    else
    {
      v73 = 1;
      v38 = ProcessPeb + 4LL * v84;
      v39 = (unsigned int)dword_1C0292E28[v84];
      if ( *(_DWORD *)(v38 + 328) < (unsigned int)v39 )
      {
        v40 = (_QWORD *)(ProcessPeb + 8 * ((unsigned int)dword_1C0292E18[v84] + 43LL));
        v74 = v40;
        v41 = &v40[v39];
        while ( 1 )
        {
          if ( v40 == v41 )
            goto LABEL_92;
          if ( !*v40 )
            break;
          v74 = ++v40;
        }
        v42 = v67;
        *v40 = *(_QWORD *)v67;
        ++*(_DWORD *)(v38 + 328);
        *a2 &= 0xFFFFFFF5;
        *a2 |= 1u;
        _InterlockedOr(v66, 0);
        v68 = 1;
        v43 = *(_QWORD *)(SGDGetSessionState(a2) + 24);
        v44 = *(_QWORD *)(v43 + 8008);
        v67 = (struct OBJECT *)v44;
        v45 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v43) + 24) + 8008LL);
        v78 = v45;
        v46 = **(_DWORD **)a4 & 0xFFFFFF;
        v69 = v46;
        if ( v46 >= 0x10000 )
        {
          if ( *(_DWORD *)v45 <= 0x10000u )
          {
            v46 = (unsigned __int16)v46;
            v69 = (unsigned __int16)v46;
            goto LABEL_55;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v45 + 16),
                                      (unsigned __int16)v46,
                                      1)
               + 13) == HIWORD(v46) )
            v46 = (unsigned __int16)v46;
        }
        v69 = v46;
LABEL_55:
        v47 = *(_QWORD *)(v45 + 16);
        v79 = v47;
        v48 = *(_DWORD *)(v47 + 2056);
        if ( v46 >= v48 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16) )
        {
          v51 = 0LL;
        }
        else
        {
          if ( v46 >= v48 )
            v49 = ((v46 - v48) >> 16) + 1;
          else
            v49 = 0;
          v50 = *(_QWORD *)(v47 + 8LL * v49 + 8);
          if ( v49 )
            v46 += ((1 - v49) << 16) - v48;
          if ( v46 >= *(_DWORD *)(v50 + 20) )
          {
            v51 = 0LL;
          }
          else
          {
            v80 = *(_QWORD **)(v50 + 24);
            v51 = *(_DWORD **)(*(_QWORD *)(*v80 + 8LL * (v46 >> 8)) + 16LL * (unsigned __int8)v46 + 8);
          }
          v72 = v51;
        }
        v71 = v51;
        v52 = (unsigned __int16)*v51 | (*v51 >> 8) & 0xFF0000;
        if ( v52 >= 0x10000 )
        {
          if ( *(_DWORD *)v44 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v44 + 16),
                                        (unsigned __int16)*v51,
                                        1)
                 + 13) == HIWORD(v52) )
              v52 = (unsigned __int16)v52;
          }
          else
          {
            v52 = (unsigned __int16)*v51;
          }
        }
        v70 = v52;
        if ( v52 >= 0x10000 )
        {
          if ( *(_DWORD *)v44 <= 0x10000u )
          {
            v70 = (unsigned __int16)v52;
            goto LABEL_68;
          }
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v44 + 16),
                                      (unsigned __int16)v52,
                                      1)
               + 13) == HIWORD(v52) )
          {
            v70 = (unsigned __int16)v52;
            goto LABEL_68;
          }
        }
        v70 = v52;
LABEL_68:
        v53 = *(_QWORD *)(v44 + 16);
        v81 = v53;
        v54 = *(_DWORD *)(v53 + 2056);
        v82 = v53;
        if ( v52 < v54 + ((*(unsigned __int16 *)(v53 + 2) + 0xFFFF) << 16) )
        {
          if ( v52 >= v54 )
            v55 = ((v52 - v54) >> 16) + 1;
          else
            v55 = 0;
          v56 = *(_QWORD **)(v53 + 8LL * v55 + 8);
          if ( v55 )
            v52 += ((1 - v55) << 16) - v54;
          *(_DWORD *)(*v56 + 24LL * v52 + 8) &= ~1u;
          v83 = (_QWORD *)v56[3];
          ExReleasePushLockExclusiveEx(*(_QWORD *)(*v83 + 8LL * (v52 >> 8)) + 16LL * (unsigned __int8)v52, 0LL);
          KeLeaveCriticalRegion();
        }
        *(_DWORD *)(a4 + 8) = 0;
        *(_QWORD *)a4 = 0LL;
        KeLeaveCriticalRegion();
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
          *(_QWORD *)a5 = 0LL;
        }
        goto LABEL_76;
      }
LABEL_92:
      v42 = v67;
LABEL_76:
      *(_QWORD *)(v37 + 320) = 0LL;
    }
  }
  else
  {
    v42 = v67;
  }
  if ( !v68 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(*v76, v42, 0);
  return v68;
}
