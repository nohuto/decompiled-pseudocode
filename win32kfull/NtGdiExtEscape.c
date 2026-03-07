__int64 __fastcall NtGdiExtEscape(HDC a1, char *a2, int a3, unsigned int a4, int a5, char *a6, int a7, char *a8)
{
  __int64 v8; // r14
  char *v10; // rbx
  unsigned int v11; // r13d
  char *v12; // r12
  char *v14; // rcx
  size_t v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // eax
  int v24; // [rsp+44h] [rbp-344h]
  int v25; // [rsp+48h] [rbp-340h]
  wchar_t *Str1; // [rsp+70h] [rbp-318h]
  _OWORD v29[2]; // [rsp+80h] [rbp-308h] BYREF
  _OWORD v30[2]; // [rsp+A0h] [rbp-2E8h] BYREF
  _BYTE v31[48]; // [rsp+C0h] [rbp-2C8h] BYREF
  char v32; // [rsp+F0h] [rbp-298h] BYREF
  char v33; // [rsp+110h] [rbp-278h] BYREF
  _WORD v34[264]; // [rsp+130h] [rbp-258h] BYREF

  v8 = a3;
  v10 = 0LL;
  Str1 = 0LL;
  v11 = -1;
  memset(v29, 0, sizeof(v29));
  memset(v30, 0, sizeof(v30));
  v25 = 0;
  v24 = 0;
  v12 = 0LL;
  if ( a5 >= 0 && a7 >= 0 && a3 >= 0 && (!a1 || !a2) )
  {
    if ( gpidLogon && PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    {
      UmfdDispatchWinLogonEscape(a6);
      return 0LL;
    }
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      UmfdDispatchEscape(a6);
      return 0LL;
    }
    if ( !a2 )
    {
LABEL_22:
      if ( !Str1 || _wcsicmp(Str1, L"GSESC") || (int)GreScalingDispatchEscape(a6) < 0 )
      {
        if ( !a5 )
          goto LABEL_42;
        if ( (unsigned int)bUMPD(a1) )
        {
          if ( a5 > 32 )
          {
            v14 = &a6[a5];
            if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < a6 )
              *(_BYTE *)MmUserProbeAddress = 0;
            v12 = a6;
            goto LABEL_42;
          }
        }
        else if ( a5 > 32 )
        {
          if ( a5 <= 40960000 )
            v12 = (char *)Win32AllocPool((unsigned int)a5, 1886221383LL, v17, v18);
          if ( !v12 )
            goto LABEL_74;
          v25 = 1;
          goto LABEL_37;
        }
        v12 = &v32;
LABEL_37:
        if ( &a6[a5] < a6 || (unsigned __int64)&a6[a5] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, a6, a5);
LABEL_42:
        if ( a7 )
        {
          if ( (unsigned int)bUMPD(a1) )
          {
            v21 = a8;
            ProbeForWrite(a8, a7, 1u);
            v10 = a8;
            goto LABEL_53;
          }
          if ( a7 > 32 )
          {
            if ( a7 <= 40960000 )
              v10 = (char *)Win32AllocPool((unsigned int)a7, 1886221383LL, v19, v20);
            if ( !v10 )
              goto LABEL_74;
            v24 = 1;
          }
          else
          {
            v10 = &v33;
          }
          memset_0(v10, 0, a7);
        }
        v21 = a8;
LABEL_53:
        if ( v25 && v12 )
          PushThreadGuardedObject(v29, v12, Win32FreePool);
        if ( v24 && v10 )
          PushThreadGuardedObject(v30, v10, Win32FreePool);
        v22 = SGDGetSessionState(v14);
        EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v31, *(struct Gre::Full::SESSION_GLOBALS **)(v22 + 32));
        if ( Str1 )
          v23 = GreNamedEscape((_DWORD)Str1, a4, a5, (_DWORD)v12, a7, (__int64)v10);
        else
          v23 = GreExtEscape(a1, a4, (unsigned int)a5, v12);
        v11 = v23;
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
        if ( v25 && v12 )
          PopThreadGuardedObject(v29);
        if ( v24 && v10 )
          PopThreadGuardedObject(v30);
        if ( a7 && v10 != v21 )
        {
          if ( (unsigned __int64)&v21[a7] > MmUserProbeAddress || &v21[a7] <= v21 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v21, v10, a7);
        }
        goto LABEL_74;
      }
      return 0LL;
    }
    if ( (int)v8 <= 260 )
    {
      Str1 = v34;
      v16 = 2 * v8;
      if ( &a2[v16] < a2 || (unsigned __int64)&a2[v16] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v34, a2, v16);
      v34[v16 / 2] = 0;
      goto LABEL_22;
    }
  }
LABEL_74:
  if ( v24 && v10 )
    Win32FreePool(v10);
  if ( v25 )
  {
    if ( v12 )
      Win32FreePool(v12);
  }
  return v11;
}
