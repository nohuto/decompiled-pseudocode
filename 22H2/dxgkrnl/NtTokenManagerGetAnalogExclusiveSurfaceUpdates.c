/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0063570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000ED40 (DxgkGetSessionTokenManager.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        int *a5)
{
  unsigned int v6; // edi
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int SessionTokenManager; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // eax
  size_t v17; // r8
  char *v18; // rcx
  unsigned int v20; // [rsp+30h] [rbp-3B8h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-3B4h]
  int v22; // [rsp+38h] [rbp-3B0h]
  unsigned int v23; // [rsp+3Ch] [rbp-3ACh]
  unsigned int v24; // [rsp+40h] [rbp-3A8h]
  __int64 v25; // [rsp+48h] [rbp-3A0h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-398h]
  unsigned int v27; // [rsp+58h] [rbp-390h]
  __int64 v28; // [rsp+60h] [rbp-388h]
  __int64 v29; // [rsp+68h] [rbp-380h]
  unsigned int *v30; // [rsp+70h] [rbp-378h]
  int *v31; // [rsp+78h] [rbp-370h]
  _BYTE Src[800]; // [rsp+80h] [rbp-368h] BYREF

  v21 = a3;
  v28 = a2;
  v23 = a1;
  v26 = a1;
  v29 = a2;
  v27 = a3;
  v30 = a4;
  v31 = a5;
  v6 = 0;
  v24 = 0;
  v7 = 0;
  v22 = 0;
  v25 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v25, v8);
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(v10, v9), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))()) )
  {
    v7 = 1;
    v22 = 1;
    v20 = 0;
    v9 = 4LL;
    v13 = v25;
    v14 = v21;
    while ( v14 > v6 && v7 )
    {
      v15 = v14 - v6;
      if ( (unsigned int)v15 > 4 )
        v15 = 4LL;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, unsigned int *))(*(_QWORD *)v13 + 112LL))(
             v13,
             v23,
             v15,
             Src,
             &v20);
      v22 = v7;
      v16 = v20;
      if ( v20 )
      {
        v17 = 200LL * v20;
        v18 = (char *)(v28 + 200LL * v6);
        if ( (unsigned __int64)&v18[v17] > MmUserProbeAddress || &v18[v17] <= v18 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v18, Src, v17);
        v16 = v20;
        v14 = v21;
        v9 = 4LL;
      }
      else
      {
        v14 = v21;
        v9 = 4LL;
      }
      v6 += v16;
      v24 = v6;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
    v13 = v25;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v9);
  KeLeaveCriticalRegion();
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v6;
  if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a5 = v7;
  return (unsigned int)SessionTokenManager;
}
