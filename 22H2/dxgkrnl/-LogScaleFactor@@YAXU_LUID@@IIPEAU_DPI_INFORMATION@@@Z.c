/*
 * XREFs of ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C01DBFF8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01DAF30 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C03033A0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall LogScaleFactor(struct _LUID a1, int a2, int a3, struct _DPI_INFORMATION *a4)
{
  int v4; // edx
  int v5; // eax
  unsigned int v6; // eax
  _DWORD v7[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v8; // [rsp+28h] [rbp-58h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  struct _LUID v17; // [rsp+60h] [rbp-20h]

  v7[0] = 30;
  v9 = 0LL;
  v12 = 0;
  v7[1] = 72;
  v11 = 0;
  v10 = 0LL;
  v14 = a2;
  v17 = a1;
  v8 = 0LL;
  if ( a3 )
  {
    v13 = 78;
    v15 = a3;
    v16 = 0;
  }
  else
  {
    v4 = *((unsigned __int16 *)a4 + 18) | (*((unsigned __int16 *)a4 + 16) << 16);
    v13 = 79;
    v5 = *((_DWORD *)a4 + 2);
    v15 = v4;
    v16 = v5;
  }
  v6 = ((__int64 (__fastcall *)(_QWORD))PsGetCurrentProcessSessionId)(a1);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, v6);
}
