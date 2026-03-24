/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D6B7C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0132090 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00E2998 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     CreateFontFromUserProfile @ 0x1C00E2B38 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00E43C4 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C00E4424 (UserSetAltScaleFont.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // edi
  INT v8; // edx
  INT v9; // ebx
  struct HLFONT__ *FontFromUserProfile; // rax
  struct HLFONT__ *v11; // rbx
  __int64 SessionDpiMetrics; // rbp
  __int64 v14; // rax
  struct HLFONT__ *v15; // rcx
  __int64 v16; // rsi
  struct HLFONT__ *v17; // rcx
  struct HLFONT__ *v18; // rax
  struct HLFONT__ *v19; // [rsp+30h] [rbp-A8h] BYREF
  char v20[96]; // [rsp+40h] [rbp-98h] BYREF

  v19 = 0LL;
  v6 = a3 == 0;
  v7 = 0;
  v8 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v8 != *(_WORD *)(gpsi + 6998LL) )
  {
    v9 = v8;
    a2->lfWidth = EngMulDiv(a2->lfWidth, *(unsigned __int16 *)(gpsi + 6998LL), v8);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 6998LL), v9);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, a2, 0x9Au);
  v11 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !(unsigned int)UserSetAltScaleFont((HSURF)FontFromUserProfile, (__int64 *)&v19) )
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset(v20, 0, 0x5CuLL);
        if ( (unsigned int)GreExtGetObjectW((HSURF)v11, 92LL, v20) )
          v7 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, v20, 92);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics();
      v14 = Get96DpiMetrics();
      v15 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v16 = v14;
      if ( v15 )
      {
        GreMarkDeletableFont(v15);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v17 = *(struct HLFONT__ **)(v16 + 64);
      if ( v17 )
      {
        GreMarkDeletableFont(v17);
        GreDeleteObject(*(_QWORD *)(v16 + 64));
      }
      v18 = v19;
      *(_QWORD *)(SessionDpiMetrics + 64) = v11;
      *(_QWORD *)(v16 + 64) = v18;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      GreMarkDeletableFont(v19);
      GreDeleteObject(v19);
    }
  }
  return v7;
}
