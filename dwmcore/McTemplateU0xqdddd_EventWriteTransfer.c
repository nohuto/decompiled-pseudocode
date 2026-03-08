/*
 * XREFs of McTemplateU0xqdddd_EventWriteTransfer @ 0x1801310BA
 * Callers:
 *     ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075EAC (-DiscardIfOccluded@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0xqdddd_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v11; // [rsp+50h] [rbp-39h]
  __int64 v12; // [rsp+58h] [rbp-31h]
  int *v13; // [rsp+60h] [rbp-29h]
  __int64 v14; // [rsp+68h] [rbp-21h]
  char *v15; // [rsp+70h] [rbp-19h]
  __int64 v16; // [rsp+78h] [rbp-11h]
  char *v17; // [rsp+80h] [rbp-9h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  char *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  char *v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]
  __int64 v23; // [rsp+E0h] [rbp+57h] BYREF

  v23 = a3;
  v9 = 1;
  v11 = &v23;
  v12 = 8LL;
  v13 = &v9;
  v14 = 4LL;
  v15 = &a5;
  v16 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_RENDEROPT_DISCARDVIEWEVENT,
           a3,
           7LL,
           v10);
}
