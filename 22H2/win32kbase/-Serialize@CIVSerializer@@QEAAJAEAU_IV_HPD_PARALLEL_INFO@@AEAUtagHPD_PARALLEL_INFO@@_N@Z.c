/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@AEAUtagHPD_PARALLEL_INFO@@_N@Z @ 0x1C01B6E18
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B6508 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C01B7484 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_N.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HPD_PARALLEL_INFO *a2,
        struct tagHPD_PARALLEL_INFO *a3,
        bool a4)
{
  struct _IV_HPD_PARALLEL_INFO *v6; // rdi
  int v8; // edx
  int v9; // esi

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      60,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  *(_DWORD *)v6 = *(_DWORD *)a3;
  *((_WORD *)v6 + 2) = *((_WORD *)a3 + 2);
  *((_WORD *)v6 + 4) = *((_WORD *)a3 + 3);
  *((_WORD *)v6 + 6) = *((_WORD *)a3 + 4);
  *((_WORD *)v6 + 8) = *((_WORD *)a3 + 5);
  *((_DWORD *)v6 + 5) = *((_DWORD *)a3 + 3);
  v9 = CIVSerializer::Serialize(
         this,
         (struct _IV_HIDP_LINK_COLLECTION_NODE **)v6 + 3,
         *((struct _HIDP_LINK_COLLECTION_NODE **)a3 + 2),
         *((_DWORD *)a3 + 3),
         48LL * *((unsigned int *)a3 + 3),
         a4);
  if ( v9 >= 0 )
  {
    *((_DWORD *)v6 + 8) = *((_DWORD *)a3 + 8) & 1;
    *((_DWORD *)v6 + 9) = *((_DWORD *)a3 + 9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      61,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return (unsigned int)v9;
}
