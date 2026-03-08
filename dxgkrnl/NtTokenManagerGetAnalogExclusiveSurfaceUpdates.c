/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0075CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        int *a5)
{
  unsigned int v6; // edi
  int v7; // r13d
  __int64 v8; // rdx
  int SessionTokenManager; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // ecx
  size_t v15; // r8
  char *v16; // rcx
  unsigned int v18; // [rsp+30h] [rbp-418h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-414h]
  unsigned int v20; // [rsp+38h] [rbp-410h]
  unsigned int v21; // [rsp+3Ch] [rbp-40Ch]
  __int64 v22; // [rsp+40h] [rbp-408h] BYREF
  int v23; // [rsp+48h] [rbp-400h]
  unsigned int v24; // [rsp+50h] [rbp-3F8h]
  unsigned int v25; // [rsp+58h] [rbp-3F0h]
  __int64 v26; // [rsp+60h] [rbp-3E8h]
  __int64 v27; // [rsp+68h] [rbp-3E0h]
  unsigned int *v28; // [rsp+70h] [rbp-3D8h]
  int *v29; // [rsp+78h] [rbp-3D0h]
  _BYTE Src[896]; // [rsp+80h] [rbp-3C8h] BYREF

  v19 = a3;
  v26 = a2;
  v20 = a1;
  v24 = a1;
  v27 = a2;
  v25 = a3;
  v28 = a4;
  v29 = a5;
  v6 = 0;
  v21 = 0;
  v7 = 0;
  v22 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v22);
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))()) )
  {
    v7 = 1;
    v18 = 0;
    v8 = 4LL;
    v11 = v22;
    v12 = v19;
    while ( v12 > v6 && v7 )
    {
      v13 = v12 - v6;
      if ( (unsigned int)v13 > 4 )
        v13 = 4LL;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, unsigned int *))(*(_QWORD *)v11 + 120LL))(
             v11,
             v20,
             v13,
             Src,
             &v18);
      v23 = v7;
      v14 = v18;
      if ( v18 )
      {
        v15 = 224LL * v18;
        v16 = (char *)(v26 + 224LL * v6);
        if ( (unsigned __int64)&v16[v15] > MmUserProbeAddress || &v16[v15] <= v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, Src, v15);
        v14 = v18;
        v12 = v19;
        v8 = 4LL;
      }
      else
      {
        v12 = v19;
        v8 = 4LL;
      }
      v6 += v14;
      v21 = v6;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
    v11 = v22;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, v8);
  KeLeaveCriticalRegion();
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v6;
  if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a5 = v7;
  return (unsigned int)SessionTokenManager;
}
