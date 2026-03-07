void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 Pool2; // rax
  CTDR_DUMP_BUFFER *v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rax
  void *v10; // rax
  void *v11; // rbx
  unsigned int *v12; // rbx
  unsigned int v13; // esi
  unsigned __int16 v14; // r14
  unsigned int v15; // r12d
  unsigned int RecentEvents; // ebx
  void *v17; // rax
  unsigned int *v18; // rbx
  char *v19; // rax
  char *v20; // r14
  bool v21; // zf
  UINT v22; // ecx
  char *v23; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v24; // rax
  DXGADAPTER *v25; // rsi
  __int64 v26; // r8
  int v27; // ebx
  __int64 v28; // r8
  unsigned int *v29; // rbx
  char *v30; // rax
  char *v31; // rbx
  unsigned int v32; // r8d
  int SmbiosInfo; // eax
  unsigned int *v34; // rbx
  char *v35; // rax
  __int64 v36; // rbx
  int AdapterDebugData; // eax
  unsigned int *v38; // rbx
  char IsDisplayOnlyTdr; // al
  int v40; // ecx
  int v41; // r15d
  unsigned int v42; // esi
  unsigned int v43; // ebx
  char *v44; // rax
  char *v45; // r14
  __int64 v46; // r15
  int v47; // ebx
  unsigned int *v48; // rbx
  __int64 v49; // rcx
  CTDR_DUMP_BUFFER *v50; // rbx
  unsigned int v51; // ebx
  char *v52; // rax
  char *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // r9
  unsigned int *v56; // rbx
  char *v57; // rax
  __int64 v58; // rbx
  int GlobalDebugData; // eax
  unsigned int *v60; // rbx
  unsigned __int16 i; // si
  int v62; // r15d
  char *v63; // rax
  char *v64; // rbx
  int v65; // ecx
  _DWORD *v66; // rax
  unsigned int *v67; // rbx
  _DWORD *v68; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v69; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v70; // [rsp+58h] [rbp-B0h] BYREF
  _DXGKARG_COLLECTDBGINFO v71; // [rsp+60h] [rbp-A8h] BYREF
  int v72; // [rsp+80h] [rbp-88h]
  __int64 v73; // [rsp+84h] [rbp-84h]
  _DWORD v74[28]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v69) = *((_DWORD *)a1 + 4);
  if ( !*((_QWORD *)a1 + 356) )
  {
    Pool2 = ExAllocatePool2(256LL, 17172484LL, 1380209782LL);
    *((_QWORD *)a1 + 356) = Pool2;
    if ( Pool2 )
    {
      v5 = (CTDR_DUMP_BUFFER *)ExAllocatePool2(256LL, 32LL, 1380209782LL);
      if ( v5 )
        v7 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v5, v6, *((_DWORD **)a1 + 356));
      else
        v7 = 0LL;
      *((_QWORD *)a1 + 358) = v7;
      if ( v7 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v7);
        *((_QWORD *)a1 + 357) = v7[6];
        v9 = ExAllocatePool2(256LL, 36LL, 1380209782LL);
        *((_QWORD *)a1 + 359) = v9;
        if ( !v9 )
          *((_DWORD *)a1 + 29) |= 2u;
        *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        memmove((char *)a1 + 200, &g_TdrHistory, 0xA18uLL);
        v10 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 0xFFFF, 0xAA8u);
        v11 = v10;
        if ( v10 )
        {
          memmove(v10, (char *)a1 + 112, 0xAA8uLL);
          *((_QWORD *)a1 + 360) = v11;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v12 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
        *((_QWORD *)a1 + 357) = v12[6];
        *((_DWORD *)a1 + 35) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v71.Reason = 1;
        *(&v71.Reason + 1) = 32;
        v13 = 0;
        v71.pBuffer = (void *)0x4000000020LL;
        v14 = 0;
        v71.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v72 = 32;
        v71.BufferSize = 0x4000000040LL;
        v73 = 64LL;
        do
        {
          if ( v13 >= 0x5000 )
            break;
          v15 = *(&v71.Reason + v14);
          RecentEvents = WdLogGetRecentEvents(v14, v15, 0LL, 0LL);
          if ( RecentEvents + v13 > 0x5000 )
            RecentEvents = 20480 - v13;
          if ( RecentEvents )
          {
            v17 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), (unsigned int)v14 + 16, RecentEvents);
            if ( v17 )
              RecentEvents = WdLogGetRecentEvents(v14, v15, v17, RecentEvents);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v13 += RecentEvents;
          ++v14;
        }
        while ( v14 < 0xBu );
        v18 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v18);
        *((_QWORD *)a1 + 357) = v18[6];
        *((_DWORD *)a1 + 35) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v19 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 1, 0x1000004u);
        v20 = v19;
        if ( v19 )
        {
          v21 = *((_DWORD *)a1 + 4) == 6;
          v22 = 279;
          v23 = v19;
          v71.pBuffer = v19;
          if ( v21 )
            v22 = 321;
          v71.Reason = v22;
          *(&v71.Reason + 1) = 0;
          v24 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 359);
          v71.BufferSize = 0x1000000LL;
          v71.pExtension = v24;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v68, v23, 0x1000000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v70, *((char **)a1 + 359), 32);
          v25 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v27 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v25, &v71, v26);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v25, 1);
            v27 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v25, &v71, v28);
            DXGADAPTER::ReleaseDdiSync(v25);
          }
          if ( v27 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v27 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v27 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v68) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v20, 0x1000000LL);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v70) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, *((_QWORD *)a1 + 359), 32LL);
          }
          if ( v70 )
            *v70 = 0;
          if ( v68 )
            *v68 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v29 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v29);
        *((_QWORD *)a1 + 357) = v29[6];
        *((_DWORD *)a1 + 35) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v30 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 2, 0x4004u);
        v31 = v30;
        if ( v30 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v68, v30, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v31, v32);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v68) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v31, 0x4000LL);
          }
          if ( v68 )
            *v68 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v34 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v34);
        *((_QWORD *)a1 + 357) = v34[6];
        *((_DWORD *)a1 + 35) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v35 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 6, 0x404u);
        v36 = (__int64)v35;
        if ( v35 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v68, v35, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 216LL), v36);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v68) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v36, 1024LL);
          }
          if ( v68 )
            *v68 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v38 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v38);
        *((_QWORD *)a1 + 357) = v38[6];
        *((_DWORD *)a1 + 35) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        IsDisplayOnlyTdr = TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4));
        v41 = (int)v69;
        if ( !IsDisplayOnlyTdr && (_DWORD)v69 != 6 )
        {
          v42 = 8;
          if ( v40 != 3 )
            v42 = 3;
          v43 = 195072;
          if ( v40 != 3 )
            v43 = 0x2000;
          v44 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), v42, v43 + 4);
          v45 = v44;
          if ( v44 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v68, v44, v43);
            v46 = v43;
            v47 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2928LL) + 736LL) + 8LL)
                                                                                            + 600LL))(
                    a1,
                    v45,
                    v43);
            if ( v47 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v47 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v68) )
            {
              if ( v47 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry4(1LL, a1, v45, v46, v42);
            }
            v41 = (int)v69;
            if ( v68 )
              *v68 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v48 = (unsigned int *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v48);
          *((_QWORD *)a1 + 357) = v48[6];
          *((_DWORD *)a1 + 35) = v42;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v49 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v49 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v49) && v41 != 6 )
        {
          v50 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v50);
          v51 = *((_DWORD *)v50 + 4) - *((_DWORD *)v50 + 6) - 10248;
          v52 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 4, v51 + 4);
          v53 = v52;
          if ( v52 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v68, v52, v51);
            v54 = *((_QWORD *)a1 + 359);
            if ( v54 )
              v55 = *(unsigned int *)(v54 + 4);
            else
              v55 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2928LL) + 760LL) + 8LL)
                                                                                             + 344LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2928LL) + 768LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v55,
                    v53,
                    v51) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v68) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v53, v51);
            }
            if ( v68 )
              *v68 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v56 = (unsigned int *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v56);
          *((_QWORD *)a1 + 357) = v56[6];
          *((_DWORD *)a1 + 35) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v57 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 9, 0xCu);
        v58 = (__int64)v57;
        if ( v57 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v68, v57, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v58);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v68) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v58, 8LL);
          }
          if ( v68 )
            *v68 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v60 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v60);
        *((_QWORD *)a1 + 357) = v60[6];
        *((_DWORD *)a1 + 35) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v74, 0, sizeof(v74));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v74) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v62 = v74[4 * i];
            if ( !v62 )
              break;
            v63 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), (unsigned int)i + 32, 0x14u);
            v64 = v63;
            if ( !v63 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v69, v63, 16);
            *((_DWORD *)v64 + 1) = v74[4 * i + 1];
            *((_DWORD *)v64 + 2) = v74[4 * i + 2];
            v65 = (*((_DWORD *)v64 + 3) ^ v74[4 * i + 3]) & 3;
            *(_DWORD *)v64 = v62;
            *((_DWORD *)v64 + 3) ^= v65;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v69) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v64, 16LL);
              if ( v69 )
                *v69 = 0;
              return;
            }
            v66 = v69;
            if ( v69 )
            {
              v69 = 0LL;
              *v66 = 0;
            }
            v67 = (unsigned int *)*((_QWORD *)a1 + 358);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v67);
            *((_QWORD *)a1 + 357) = v67[6];
            *((_DWORD *)a1 + 35) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 1);
          }
        }
      }
      else
      {
        *((_DWORD *)a1 + 29) |= 2u;
        v8 = (void *)*((_QWORD *)a1 + 356);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x52445476u);
        *((_QWORD *)a1 + 356) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 29) |= 2u;
    }
  }
}
