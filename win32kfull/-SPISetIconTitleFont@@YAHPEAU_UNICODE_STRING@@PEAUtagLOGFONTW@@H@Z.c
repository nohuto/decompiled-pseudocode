/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C8BB4
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C010C82C (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C010E47C (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C010E764 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C010E8B4 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // edi
  INT DpiForSystem; // ebx
  INT v9; // edx
  struct HLFONT__ *FontFromUserProfile; // rax
  struct HLFONT__ *v11; // rbx
  __int64 v12; // rcx
  __int64 SessionDpiMetrics; // rbp
  __int64 v15; // rax
  struct HLFONT__ *v16; // rcx
  __int64 v17; // rsi
  struct HLFONT__ *v18; // rcx
  struct HLFONT__ *v19; // rax
  struct HLFONT__ *v20; // [rsp+30h] [rbp-A8h] BYREF
  _WORD v21[48]; // [rsp+40h] [rbp-98h] BYREF

  v20 = 0LL;
  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  v9 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( DpiForSystem != v9 )
  {
    a2->lfWidth = EngMulDiv(a2->lfWidth, v9, DpiForSystem);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 6998LL), DpiForSystem);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, a2, 0x9Au);
  v11 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !(unsigned int)UserSetAltScaleFont((HBRUSH)FontFromUserProfile, (__int64 *)&v20) )
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset_0(v21, 0, 0x5CuLL);
        if ( (unsigned int)GreExtGetObjectW((HBRUSH)v11, 92LL, v21) )
          v7 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, v21, 92);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics(v12);
      v15 = Get96DpiMetrics();
      v16 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v17 = v15;
      if ( v16 )
      {
        GreMarkDeletableFont(v16);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v18 = *(struct HLFONT__ **)(v17 + 64);
      if ( v18 )
      {
        GreMarkDeletableFont(v18);
        GreDeleteObject(*(_QWORD *)(v17 + 64));
      }
      v19 = v20;
      *(_QWORD *)(SessionDpiMetrics + 64) = v11;
      *(_QWORD *)(v17 + 64) = v19;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      GreMarkDeletableFont(v20);
      GreDeleteObject(v20);
    }
  }
  return v7;
}
