/*
 * XREFs of ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C018FAB8
 * Callers:
 *     LogDiagCDS @ 0x1C0195280 (LogDiagCDS.c)
 * Callees:
 *     <none>
 */

void __fastcall FillSimpleDevModeField(struct _devicemodeW *const a1, struct _DXGK_DIAG_SIMPLE_DEVMODE *a2)
{
  if ( a1 )
  {
    *(_DWORD *)a2 = a1->dmFields;
    *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)&a1->dmOrientation;
    *((_DWORD *)a2 + 3) = a1->dmBitsPerPel;
    *((_DWORD *)a2 + 4) = a1->dmPelsWidth;
    *((_DWORD *)a2 + 5) = a1->dmPelsHeight;
    *((_DWORD *)a2 + 6) = a1->dmDisplayFrequency;
    *((_DWORD *)a2 + 7) = a1->dmDriverExtra;
    *((_QWORD *)a2 + 4) = *(_QWORD *)&a1->dmDisplayOrientation;
    *((_DWORD *)a2 + 10) = a1->dmDisplayFlags;
  }
}
