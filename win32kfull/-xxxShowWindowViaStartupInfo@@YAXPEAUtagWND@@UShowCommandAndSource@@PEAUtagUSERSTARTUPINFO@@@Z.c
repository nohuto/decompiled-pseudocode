/*
 * XREFs of ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C0227DC4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C009EB2C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

__int64 __fastcall xxxShowWindowViaStartupInfo(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  char v6; // di
  char v7; // dl
  char v8; // dl
  const char *v9; // rax
  char v10; // dl
  int v11; // edx
  int v12; // ecx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v13; // r8
  bool v14; // zf
  int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  BOOL v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+5Ch] [rbp-4Ch]
  int v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+64h] [rbp-44h]
  int v23; // [rsp+68h] [rbp-40h]
  int v24; // [rsp+6Ch] [rbp-3Ch]
  int v25; // [rsp+70h] [rbp-38h]

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x16u,
      0x11u,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      a1,
      *(unsigned __int8 *)(a2 + 4));
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = "still contains";
    if ( (a3[5] & 7) == 0 )
      v9 = "does not have";
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x16u,
      0x12u,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      (char)a1,
      v9);
  }
  a3[5] &= 0xFFFFFFF8;
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      4u,
      0x16u,
      0x13u,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      a1);
  v11 = a3[1];
  v12 = a3[3];
  v13 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)(unsigned int)a3[2];
  a3[5] &= ~0x20000u;
  v18 = 0LL;
  v14 = *(_BYTE *)(a2 + 4) == 3;
  v21 = v11;
  v22 = (int)v13;
  v19 = v14;
  v15 = 148;
  if ( !v14 )
    v15 = 144;
  v25 = 0;
  v20 = v15;
  v23 = v11 + v12;
  v24 = (_DWORD)v13 + a3[4];
  AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v18, v13);
  result = a1[80];
  if ( (result & 2) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_AND_TRACE_SF_q(
                 (__int64)WPP_GLOBAL_Control->AttachedDevice,
                 v6,
                 WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                 v16,
                 4u,
                 0x16u,
                 0x14u,
                 (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
                 a1);
    a3[5] |= 0x20000u;
  }
  return result;
}
