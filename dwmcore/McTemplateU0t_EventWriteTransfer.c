/*
 * XREFs of McTemplateU0t_EventWriteTransfer @ 0x180258A30
 * Callers:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800D6DE0 (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0t_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 4;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &CompSurfInfo_ForceUpdateRealization_Stop,
           a3,
           2u,
           &v4);
}
