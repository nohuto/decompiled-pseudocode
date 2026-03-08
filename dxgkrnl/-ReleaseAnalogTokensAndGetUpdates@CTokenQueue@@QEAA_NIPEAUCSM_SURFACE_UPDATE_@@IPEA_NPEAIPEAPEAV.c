/*
 * XREFs of ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00777A8
 * Callers:
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z @ 0x1C0076F70 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00774BC (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C00774F4 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 */

char __fastcall CTokenQueue::ReleaseAnalogTokensAndGetUpdates(
        CTokenQueue *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE_ *a3,
        int a4,
        bool *a5,
        unsigned int *a6,
        struct CToken **a7)
{
  int v7; // r14d
  bool *v8; // r15
  char v9; // r12
  CTokenQueue *v12; // rbx
  CTokenQueue **v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  CTokenQueue **v16; // rax
  CTokenQueue **v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rcx
  struct CToken **v21; // r15
  const struct CToken *v22; // rdi
  CompositionSurfaceObject *v23; // r14
  const struct CFlipToken *v24; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rcx
  _QWORD v28[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+48h]

  v29 = a2;
  v7 = 0;
  v8 = a5;
  v9 = 0;
  *a6 = 0;
  v12 = (CTokenQueue *)*((_QWORD *)this + 1);
  v28[1] = v28;
  v28[0] = v28;
  *v8 = 0;
  if ( *(CTokenQueue **)v12 != this )
    goto LABEL_33;
  v13 = (CTokenQueue **)*((_QWORD *)v12 + 1);
  if ( *v13 != v12 )
    goto LABEL_33;
  *((_QWORD *)this + 1) = v13;
  *v13 = this;
  if ( v12 == this )
    return v9;
  while ( 1 )
  {
    v14 = (_QWORD *)((char *)v12 - 8);
    LOBYTE(a5) = 0;
    if ( (*(int (__fastcall **)(_QWORD *, __int64, bool **))(*((_QWORD *)v12 - 1) + 192LL))((_QWORD *)v12 - 1, a2, &a5) < 0 )
    {
LABEL_10:
      (*(void (__fastcall **)(_QWORD *))(*v14 + 56LL))((_QWORD *)v12 - 1);
      (*(void (__fastcall **)(__int64, __int64))*v14)((__int64)v12 - 8, 1LL);
      goto LABEL_11;
    }
    if ( !(_BYTE)a5 )
      break;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v14 + 72LL))((_QWORD *)v12 - 1) )
      goto LABEL_10;
    if ( !a4 )
    {
      v9 = 1;
      goto LABEL_17;
    }
    v15 = v28[0];
    ++v7;
    if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
      goto LABEL_33;
    *(_QWORD *)v12 = v28[0];
    *((_QWORD *)v12 + 1) = v28;
    *(_QWORD *)(v15 + 8) = v12;
    v28[0] = v12;
LABEL_11:
    v12 = (CTokenQueue *)*((_QWORD *)this + 1);
    if ( *(CTokenQueue **)v12 != this )
      goto LABEL_33;
    v16 = (CTokenQueue **)*((_QWORD *)v12 + 1);
    if ( *v16 != v12 )
      goto LABEL_33;
    *((_QWORD *)this + 1) = v16;
    *v16 = this;
    if ( v12 == this )
      goto LABEL_19;
    a2 = v29;
  }
  *v8 = 1;
LABEL_17:
  v17 = (CTokenQueue **)*((_QWORD *)this + 1);
  if ( *v17 != this )
LABEL_33:
    __fastfail(3u);
  *(_QWORD *)v12 = this;
  *((_QWORD *)v12 + 1) = v17;
  *v17 = v12;
  *((_QWORD *)this + 1) = v12;
LABEL_19:
  if ( v7 )
  {
    v18 = (_QWORD *)v28[0];
    v19 = 0;
    v20 = *(_QWORD *)v28[0];
    if ( *(_QWORD **)(v28[0] + 8LL) != v28 || *(_QWORD *)(v20 + 8) != v28[0] )
      goto LABEL_33;
    v28[0] = *(_QWORD *)v28[0];
    *(_QWORD *)(v20 + 8) = v28;
    if ( v18 != v28 )
    {
      v21 = a7;
      do
      {
        v22 = (const struct CToken *)(v18 - 1);
        if ( v19
          || (v23 = (CompositionSurfaceObject *)*((_QWORD *)v22 + 4),
              (int)CompositionSurfaceObject::GetSurfaceUpdate(v23, 0LL, a3) < 0) )
        {
          (*(void (__fastcall **)(const struct CToken *))(*(_QWORD *)v22 + 56LL))(v22);
          (**(void (__fastcall ***)(const struct CToken *, __int64))v22)(v22, 1LL);
        }
        else
        {
          *((_DWORD *)a3 + 7) = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)v22 + 112LL))(v22);
          v19 = 1;
          v24 = CFlipToken::FromToken(v22);
          Global = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(CompositionSurfaceObject *, _QWORD))(*((_QWORD *)Global + 38069) + 80LL))(
            v23,
            *((unsigned int *)v24 + 26));
          *v21 = v22;
        }
        v18 = (_QWORD *)v28[0];
        if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
          goto LABEL_33;
        v26 = *(_QWORD *)v28[0];
        if ( *(_QWORD *)(*(_QWORD *)v28[0] + 8LL) != v28[0] )
          goto LABEL_33;
        v28[0] = *(_QWORD *)v28[0];
        *(_QWORD *)(v26 + 8) = v28;
      }
      while ( v18 != v28 );
    }
    *a6 = v19;
  }
  return v9;
}
