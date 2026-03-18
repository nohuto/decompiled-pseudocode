/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C8BFC (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     CreateFontFromUserProfile @ 0x1C00C58D0 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00C5A20 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C00C5A80 (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00C6CC4 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // edi
  INT DpiForSystem; // ebx
  INT v9; // edx
  struct HLFONT__ *FontFromUserProfile; // rax
  struct HLFONT__ *v11; // rbx
  __int64 SessionDpiMetrics; // rbp
  __int64 v13; // rax
  struct HLFONT__ *v14; // rcx
  __int64 v15; // rsi
  struct HLFONT__ *v16; // rcx
  struct HLFONT__ *v17; // rax
  struct HLFONT__ *v19; // [rsp+30h] [rbp-A8h] BYREF
  char v20[96]; // [rsp+40h] [rbp-98h] BYREF

  v19 = 0LL;
  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2);
  v9 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( DpiForSystem != v9 )
  {
    a2->lfWidth = EngMulDiv(a2->lfWidth, v9, DpiForSystem);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 6998LL), DpiForSystem);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, a2, 0x9Au);
  v11 = FontFromUserProfile;
  if ( !FontFromUserProfile )
    return v7;
  if ( (unsigned int)UserSetAltScaleFont((HBRUSH)FontFromUserProfile, (__int64 *)&v19) )
  {
    if ( a3 )
    {
      if ( a2 )
      {
        memset(v20, 0, 0x5CuLL);
        if ( (unsigned int)GreExtGetObjectW((HBRUSH)v11, 92LL, v20) )
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
      v13 = Get96DpiMetrics();
      v14 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v15 = v13;
      if ( v14 )
      {
        GreMarkDeletableFont(v14);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v16 = *(struct HLFONT__ **)(v15 + 64);
      if ( v16 )
      {
        GreMarkDeletableFont(v16);
        GreDeleteObject(*(_QWORD *)(v15 + 64));
      }
      v17 = v19;
      *(_QWORD *)(SessionDpiMetrics + 64) = v11;
      *(_QWORD *)(v15 + 64) = v17;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      GreMarkDeletableFont(v19);
      GreDeleteObject(v19);
    }
    return v7;
  }
  GreMarkDeletableFont(v11);
  GreDeleteObject(v11);
  return 0LL;
}
