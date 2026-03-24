/*
 * XREFs of NtGdiResizePalette @ 0x1C02B7AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017954 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019BA8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00D6320 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0169C4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C016C2D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AD964 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02BC6E0 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  HDC v13; // rdi
  __int64 v14; // rcx
  __int64 *v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  signed __int32 v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  HDC v22; // rbx
  __int64 v24; // [rsp+50h] [rbp-9h] BYREF
  int v25; // [rsp+58h] [rbp-1h]
  _QWORD v26[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v28[6]; // [rsp+80h] [rbp+27h] BYREF
  int v29; // [rsp+C8h] [rbp+6Fh] BYREF
  struct PALETTE *v30; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( a2 - 1 <= 0x3FF )
  {
    v3 = 0;
    v4 = 0;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v30, a1);
    if ( v30 )
    {
      if ( v30 != ppalDefault )
      {
        v6 = *((_DWORD *)v30 + 6);
        if ( (v6 & 0x100) != 0 )
        {
          if ( (v6 & 0x800) != 0 && a2 != 256 )
            goto LABEL_32;
          v25 = 0;
          v24 = 0LL;
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v24, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
          {
            v31 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v7 = *((unsigned int *)v30 + 7);
            v8 = *(_DWORD *)(v24 + 28);
            if ( (unsigned int)v7 >= v8 )
              v7 = v8;
            memmove(*(void **)(v24 + 112), *((const void **)v30 + 14), 4 * v7);
            *(_DWORD *)(v24 + 24) = *((_DWORD *)v30 + 6);
            *(_QWORD *)(v24 + 40) = *((_QWORD *)v30 + 5);
            *(_QWORD *)(v24 + 48) = *((_QWORD *)v30 + 6);
            *(_DWORD *)(v24 + 56) = *((_DWORD *)v30 + 14);
            XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v24);
            GreAcquireHmgrSemaphore(v10, v9, v11, v12);
            v13 = *(HDC *)(v24 + 40);
            while ( v13 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v26, v13);
              if ( !v26[0] )
                goto LABEL_16;
              v14 = *(unsigned __int16 *)(v26[0] + 12LL);
              if ( (unsigned __int16)v14 > 1u )
              {
                TraceLoggingWriteUnsupportedGdiUsage(5, *((unsigned int *)v30 + 6), v14, 0LL, 0LL);
LABEL_16:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v26);
                goto LABEL_25;
              }
              v13 = *(HDC *)(v26[0] + 984LL);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v26);
              v26[0] = 0LL;
              MDCOBJ::~MDCOBJ((MDCOBJ *)v26);
            }
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v30);
            v18 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
            *((_DWORD *)v30 + 8) = v18;
            v19 = *((_QWORD *)v30 + 15);
            if ( (struct PALETTE *)v19 != v30 )
              *(_DWORD *)(v19 + 32) = v18;
            v4 = XEPALOBJ::bSwap((XEPALOBJ *)&v24, &v30, v16, v17);
            if ( v4 )
            {
              v20 = v24;
              v13 = *(HDC *)(v24 + 40);
              if ( !v13 )
                goto LABEL_26;
              do
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)v28, v13);
                v15 = (__int64 *)v28[0];
                if ( !v28[0] )
                  break;
                *(_QWORD *)(v28[0] + 88LL) = v30;
                *((_DWORD *)v15 + 79) |= 0xFu;
                v13 = (HDC)v15[123];
                v29 = 0;
                v21 = *v15;
                HmgDecrementShareReferenceCountEx(v15, &v29);
                if ( v29 )
                  bDeleteDCInternalEx(v21, 0LL);
              }
              while ( v13 );
            }
LABEL_25:
            v20 = v24;
LABEL_26:
            v22 = *(HDC *)(v20 + 40);
            while ( v22 != v13 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v27, v22);
              _InterlockedDecrement((volatile signed __int32 *)(v27[0] + 12LL));
              v22 = *(HDC *)(v27[0] + 984LL);
              MDCOBJ::~MDCOBJ((MDCOBJ *)v27);
            }
            GreReleaseHmgrSemaphore(v15);
            SEMOBJ::vUnlock((SEMOBJ *)&v31);
          }
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
        }
      }
    }
    v3 = v4;
LABEL_32:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v30, v5);
    return v3;
  }
  return 0LL;
}
