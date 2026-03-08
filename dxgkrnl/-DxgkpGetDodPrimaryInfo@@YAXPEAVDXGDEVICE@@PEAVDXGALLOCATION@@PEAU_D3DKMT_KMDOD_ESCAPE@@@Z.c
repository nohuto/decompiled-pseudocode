/*
 * XREFs of ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03CD1E8
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C031DA20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03CFA08 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C01A5B6C (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 */

void __fastcall DxgkpGetDodPrimaryInfo(struct DXGDEVICE *a1, struct DXGALLOCATION *a2, struct _D3DKMT_KMDOD_ESCAPE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _DXGKARG_ESCAPE v9; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v9.Flags.0 = 0LL;
  memset(&v9.PrivateDriverDataSize + 1, 0, 20);
  memset(a3, 0, 0x50uLL);
  *(_DWORD *)a3 = -791674879;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v9.Flags.Value |= 0x10u;
  *((_QWORD *)a3 + 1) = v6;
  v7 = *((_QWORD *)a1 + 2);
  v9.hDevice = (HANDLE)*((_QWORD *)a1 + 77);
  v9.pPrivateDriverData = a3;
  v9.PrivateDriverDataSize = 80;
  DXGADAPTER::DdiEscape(*(DXGADAPTER **)(v7 + 16), &v9, v8);
}
