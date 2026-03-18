/*
 * XREFs of ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A710
 * Callers:
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1C009C810 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029A94C (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02CE774 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEAAHXZ @ 0x1C029A6A0 (-bAllowDDICall@PDEVOBJ@@QEAAHXZ.c)
 *     ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C029A8EC (-bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // edi
  void *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  Gre::Base *v9; // rcx
  unsigned int (__fastcall *v10)(_QWORD, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+28h] [rbp-49h]
  __int128 v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h]
  int v18; // [rsp+50h] [rbp-21h]
  _QWORD v19[2]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v20[40]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  __int64 v22; // [rsp+98h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+67h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    v6 = (void *)*v2;
    v15 = 14;
    if ( (unsigned int)HmgRemoveObject(*v2, 0LL, 1LL, 1LL, v15, 0LL) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v23 = v8;
        if ( v8 )
        {
          if ( (*(_DWORD *)(v8 + 40) & 0x8000) != 0 && (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v23) )
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
          }
          else
          {
            DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
            v22 = 0LL;
            v16 = 0LL;
            v21 = 0LL;
            v19[0] = 0LL;
            v18 = 1;
            if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
            {
              Gre::Base::Globals(v9);
              *(_QWORD *)&v16 = *(_QWORD *)(v8 + 48);
              v17 = v8;
              GreAcquireSemaphore(v16);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v16, 11LL);
            }
            v10 = *(unsigned int (__fastcall **)(_QWORD, __int64))(v8 + 3184);
            if ( v10 )
            {
              if ( v10(*(_QWORD *)(v8 + 1768), v7) || (*(_DWORD *)(v8 + 40) & 0x8000) != 0 )
                *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16, v11, v12, v13);
            if ( v19[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v19);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
          }
        }
      }
      if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) )
      {
        XDCOBJ::bRemoveColorTransform(a2, v6);
        FreeObject(*((_QWORD *)this + 4), 14LL);
        *((_QWORD *)this + 4) = 0LL;
      }
    }
    return 1;
  }
  return v3;
}
