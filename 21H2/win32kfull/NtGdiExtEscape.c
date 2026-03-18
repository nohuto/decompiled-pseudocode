/*
 * XREFs of NtGdiExtEscape @ 0x1C00108F0
 * Callers:
 *     <none>
 * Callees:
 *     UmfdDispatchEscape @ 0x1C0010B54 (UmfdDispatchEscape.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdDispatchWinLogonEscape @ 0x1C00F70E8 (UmfdDispatchWinLogonEscape.c)
 *     GreExtEscape @ 0x1C013D59C (GreExtEscape.c)
 *     bUMPD @ 0x1C014321C (bUMPD.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     GreScalingDispatchEscape @ 0x1C029DA54 (GreScalingDispatchEscape.c)
 *     GreNamedEscape @ 0x1C02A5034 (GreNamedEscape.c)
 */

__int64 __fastcall NtGdiExtEscape(HDC a1, const void *a2, int a3, int a4, int a5, char *Src, int a7, char *a8)
{
  unsigned int v9; // r12d
  char *v10; // rdi
  char *v11; // rsi
  char *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rax
  size_t v16; // rdx
  ULONG64 v17; // rcx
  int v18; // [rsp+34h] [rbp-324h]
  int v19; // [rsp+38h] [rbp-320h]
  size_t v22; // [rsp+58h] [rbp-300h]
  wchar_t *Str1; // [rsp+70h] [rbp-2E8h]
  _OWORD v25[2]; // [rsp+80h] [rbp-2D8h] BYREF
  _OWORD v26[2]; // [rsp+A0h] [rbp-2B8h] BYREF
  char v27; // [rsp+C0h] [rbp-298h] BYREF
  char v28; // [rsp+E0h] [rbp-278h] BYREF
  _WORD v29[264]; // [rsp+100h] [rbp-258h] BYREF

  Str1 = 0LL;
  v9 = -1;
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v19 = 0;
  v18 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 < 0 || a7 < 0 || a3 < 0 || a1 && a2 )
    goto LABEL_31;
  if ( gpidLogon && PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    UmfdDispatchWinLogonEscape(Src);
    return 0LL;
  }
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    UmfdDispatchEscape(Src);
    return 0LL;
  }
  if ( !a2 )
  {
LABEL_13:
    if ( Str1 && !_wcsicmp(Str1, L"GSESC") && (int)GreScalingDispatchEscape(Src) >= 0 )
      return 0LL;
    if ( a5 )
    {
      if ( !(unsigned int)bUMPD(a1) )
      {
        if ( a5 > 32 )
        {
          if ( a5 <= 40960000 )
            v11 = (char *)Win32AllocPool((unsigned int)a5, 1886221383LL);
          if ( !v11 )
            goto LABEL_31;
          v19 = 1;
          goto LABEL_18;
        }
LABEL_17:
        v11 = &v27;
LABEL_18:
        if ( &Src[a5] < Src || (unsigned __int64)&Src[a5] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, Src, a5);
        goto LABEL_22;
      }
      if ( a5 <= 32 )
        goto LABEL_17;
      if ( (unsigned __int64)&Src[a5] > MmUserProbeAddress || &Src[a5] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
      v11 = Src;
    }
LABEL_22:
    if ( a7 )
    {
      if ( (unsigned int)bUMPD(a1) )
      {
        v13 = a8;
        ProbeForWrite(a8, a7, 1u);
        v10 = a8;
LABEL_24:
        if ( v19 && v11 )
          PushThreadGuardedObject(v25, v11, Win32FreePool);
        if ( v18 && v10 )
          PushThreadGuardedObject(v26, v10, Win32FreePool);
        if ( Str1 )
          v14 = GreNamedEscape((_DWORD)Str1, a4, a5, (_DWORD)v11, a7, (__int64)v10);
        else
          v14 = GreExtEscape(a1, a7, (__int64)v10);
        v9 = v14;
        if ( v19 && v11 )
          PopThreadGuardedObject(v25);
        if ( v18 && v10 )
          PopThreadGuardedObject(v26);
        if ( a7 && v10 != v13 )
        {
          if ( (unsigned __int64)&v13[a7] > MmUserProbeAddress || &v13[a7] <= v13 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v13, v10, a7);
        }
        goto LABEL_31;
      }
      if ( a7 > 32 )
      {
        if ( a7 <= 40960000 )
          v10 = (char *)Win32AllocPool((unsigned int)a7, 1886221383LL);
        if ( !v10 )
          goto LABEL_31;
        v18 = 1;
      }
      else
      {
        v10 = &v28;
      }
      memset(v10, 0, a7);
    }
    v13 = a8;
    goto LABEL_24;
  }
  v15 = a3;
  if ( a3 <= 260 )
  {
    Str1 = v29;
    v16 = 2LL * a3;
    v22 = v16;
    v17 = (ULONG64)a2 + 2 * v15;
    if ( v17 < (unsigned __int64)a2 || v17 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v29, a2, v16);
    *(_WORD *)((char *)v29 + v22) = 0;
    goto LABEL_13;
  }
LABEL_31:
  if ( v18 && v10 )
    Win32FreePool(v10);
  if ( v19 )
  {
    if ( v11 )
      Win32FreePool(v11);
  }
  return v9;
}
