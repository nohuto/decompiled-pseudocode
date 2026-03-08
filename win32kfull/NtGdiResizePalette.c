/*
 * XREFs of NtGdiResizePalette @ 0x1C02D4500
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0050CF0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00E3CD4 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02C4318 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02DA678 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  BOOL IsPalDefault; // eax
  struct PALETTE *v5; // rcx
  int v6; // eax
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  HDC v11; // rbx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  HDC v17; // rdi
  __int64 v18; // [rsp+50h] [rbp+7h] BYREF
  int v19; // [rsp+58h] [rbp+Fh]
  _QWORD v20[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 *v21[2]; // [rsp+70h] [rbp+27h] BYREF
  _QWORD v22[4]; // [rsp+80h] [rbp+37h] BYREF
  struct PALETTE *v23; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v23, a1);
  if ( v23 )
  {
    IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v23);
    v5 = v23;
    if ( !IsPalDefault )
    {
      v6 = *((_DWORD *)v23 + 6);
      if ( (v6 & 0x100) != 0 )
      {
        if ( (v6 & 0x800) != 0 && a2 != 256 )
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
          return 0LL;
        }
        v19 = 0;
        v18 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
        {
          v24 = *((_QWORD *)Gre::Base::Globals(v8) + 5);
          GreAcquireSemaphore(v24);
          v9 = *((unsigned int *)v23 + 7);
          v10 = *(_DWORD *)(v18 + 28);
          if ( (unsigned int)v9 >= v10 )
            v9 = v10;
          memmove(*(void **)(v18 + 112), *((const void **)v23 + 14), 4 * v9);
          *(_DWORD *)(v18 + 24) = *((_DWORD *)v23 + 6);
          *(_QWORD *)(v18 + 40) = *((_QWORD *)v23 + 5);
          *(_QWORD *)(v18 + 48) = *((_QWORD *)v23 + 6);
          *(_DWORD *)(v18 + 56) = *((_DWORD *)v23 + 14);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v18);
          GreAcquireHmgrSemaphore();
          v11 = *(HDC *)(v18 + 40);
          while ( 1 )
          {
            if ( !v11 )
            {
              XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v23);
              XEPALOBJ::vUpdateTime((XEPALOBJ *)&v23);
              v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v18, &v23, v15, v16);
              if ( v3 )
              {
                v13 = (__int64 *)v18;
                v11 = *(HDC *)(v18 + 40);
                while ( v11 )
                {
                  MDCOBJA::MDCOBJA((MDCOBJA *)v21, v11);
                  v13 = v21[0];
                  if ( !v21[0] )
                    break;
                  v21[0][11] = (__int64)v23;
                  *((_DWORD *)v13 + 79) |= 0xFu;
                  v11 = (HDC)v13[123];
                  XDCOBJ::vAltUnlockFast(v21);
                }
              }
              goto LABEL_26;
            }
            MDCOBJ::MDCOBJ((MDCOBJ *)v20, v11);
            if ( !v20[0] )
              goto LABEL_26;
            v14 = *(unsigned __int16 *)(v20[0] + 12LL);
            if ( (unsigned __int16)v14 > 1u )
              break;
            v11 = *(HDC *)(v20[0] + 984LL);
            XDCOBJ::RestoreAttributes((XDCOBJ *)v20);
            v20[0] = 0LL;
          }
          TraceLoggingWriteUnsupportedGdiUsage(5, *((unsigned int *)v23 + 6), v14, 0LL, 0LL);
          if ( v20[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v20);
LABEL_26:
          v17 = *(HDC *)(v18 + 40);
          while ( v17 != v11 )
          {
            MDCOBJ::MDCOBJ((MDCOBJ *)v22, v17);
            _InterlockedDecrement((volatile signed __int32 *)(v22[0] + 12LL));
            v17 = *(HDC *)(v22[0] + 984LL);
            XDCOBJ::vUnlockFast((XDCOBJ *)v22);
          }
          GreReleaseHmgrSemaphore(v13, v12);
          SEMOBJ::vUnlock((SEMOBJ *)&v24);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
        v5 = v23;
      }
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
  }
  return v3;
}
