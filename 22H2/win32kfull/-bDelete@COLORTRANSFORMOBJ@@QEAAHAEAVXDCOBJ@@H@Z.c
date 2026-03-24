/*
 * XREFs of ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0293864
 * Callers:
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1C00FE5D0 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0293A88 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B59F0 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0293A28 (-bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // edi
  void *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // eax
  unsigned int (__fastcall *v13)(_QWORD, __int64); // rax
  char v15; // [rsp+28h] [rbp-49h]
  __int128 v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h]
  int v18; // [rsp+50h] [rbp-21h]
  _QWORD v19[2]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v20[40]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  __int64 v22; // [rsp+98h] [rbp+27h]

  v3 = (_QWORD *)*((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    v8 = (void *)*v3;
    v15 = 14;
    if ( (unsigned int)HmgRemoveObject(*v3, 0LL, 1LL, 1LL, v15, 0LL) )
    {
      v9 = *((_QWORD *)this + 4);
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 && a3 )
          {
            *(_QWORD *)(v9 + 24) = 0LL;
          }
          else
          {
            DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
            v12 = *(_DWORD *)(v11 + 40);
            v16 = 0LL;
            v22 = 0LL;
            v21 = 0LL;
            v19[0] = 0LL;
            v18 = 1;
            if ( (v12 & 1) != 0 )
            {
              *(_QWORD *)&v16 = *(_QWORD *)(v11 + 48);
              v17 = v11;
              GreAcquireSemaphore(v16);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v16, 11LL);
            }
            v13 = *(unsigned int (__fastcall **)(_QWORD, __int64))(v11 + 3208);
            if ( v13 )
            {
              if ( v13(*(_QWORD *)(v11 + 1800), v10) || (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
                *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
            if ( v19[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v19);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
          }
        }
      }
      if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) )
      {
        XDCOBJ::bRemoveColorTransform(a2, v8);
        FreeObject(*((_QWORD *)this + 4), 14LL);
        *((_QWORD *)this + 4) = 0LL;
      }
    }
    return 1;
  }
  return v4;
}
