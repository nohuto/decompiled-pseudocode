/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C7A54
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00B8E38 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0076194 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GreMarkDeletableFont @ 0x1C0076A08 (GreMarkDeletableFont.c)
 *     CreateFontFromUserProfile @ 0x1C0078200 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C0078308 (UserSetAltScaleFont.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct HLFONT__ *v18; // rcx
  __int64 v19; // rsi
  struct HLFONT__ *v20; // rcx
  struct HLFONT__ *v21; // rax
  struct HLFONT__ *v22; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v23[96]; // [rsp+40h] [rbp-98h] BYREF

  v22 = 0LL;
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
    if ( !(unsigned int)UserSetAltScaleFont((HBRUSH)FontFromUserProfile, (__int64 *)&v22) )
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset_0(v23, 0, 0x5CuLL);
        if ( (unsigned int)GreExtGetObjectW((HBRUSH)v11, 92LL, (__int64)v23) )
          v7 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL);
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
      v17 = Get96DpiMetrics(v16, v15);
      v18 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v19 = v17;
      if ( v18 )
      {
        GreMarkDeletableFont(v18);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v20 = *(struct HLFONT__ **)(v19 + 64);
      if ( v20 )
      {
        GreMarkDeletableFont(v20);
        GreDeleteObject(*(_QWORD *)(v19 + 64));
      }
      v21 = v22;
      *(_QWORD *)(SessionDpiMetrics + 64) = v11;
      *(_QWORD *)(v19 + 64) = v21;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v11);
      GreDeleteObject(v11);
      GreMarkDeletableFont(v22);
      GreDeleteObject(v22);
    }
  }
  return v7;
}
