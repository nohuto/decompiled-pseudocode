/*
 * XREFs of ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C016750C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02FE570 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall LogScaleFactor(struct _LUID a1, __int64 a2, __int64 a3, struct _DPI_INFORMATION *a4)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+28h] [rbp-58h]
  __int64 v8; // [rsp+38h] [rbp-48h]
  __int64 v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+54h] [rbp-2Ch]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  struct _LUID v16; // [rsp+60h] [rbp-20h]

  v6 = 0x480000001ELL;
  v8 = 0LL;
  v11 = 0;
  v10 = 0;
  v9 = 0LL;
  v13 = a2;
  v16 = a1;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    v12 = 78;
    v14 = a3;
    v15 = 0;
  }
  else
  {
    a2 = *((unsigned __int16 *)a4 + 18) | (*((unsigned __int16 *)a4 + 16) << 16);
    v12 = 79;
    v4 = *((_DWORD *)a4 + 2);
    v14 = a2;
    v15 = v4;
  }
  v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PsGetCurrentProcessSessionId)(
         a1,
         a2,
         a3,
         a4,
         v6,
         v7,
         *((_QWORD *)&v7 + 1),
         v8,
         v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v6, v5);
}
