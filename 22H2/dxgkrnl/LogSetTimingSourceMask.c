/*
 * XREFs of LogSetTimingSourceMask @ 0x1C0171E74
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0pqqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C0069F44 (McTemplateK0pqqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

NTSTATUS __fastcall LogSetTimingSourceMask(__int64 a1, _BYTE *a2)
{
  unsigned int CurrentProcessSessionId; // eax
  NTSTATUS result; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[10]; // [rsp+B0h] [rbp-80h] BYREF

  memset(v9, 0, 0x48uLL);
  LOBYTE(v9[6]) = *a2;
  BYTE1(v9[6]) = a2[4];
  BYTE2(v9[6]) = a2[8];
  BYTE3(v9[6]) = a2[12];
  BYTE4(v9[6]) = a2[20];
  BYTE5(v9[6]) = a2[24];
  BYTE6(v9[6]) = a2[28];
  HIBYTE(v9[6]) = a2[32];
  LOBYTE(v9[7]) = a2[40];
  BYTE1(v9[7]) = a2[48];
  BYTE2(v9[7]) = a2[56];
  BYTE3(v9[7]) = a2[60];
  BYTE4(v9[7]) = a2[68];
  BYTE5(v9[7]) = a2[72];
  BYTE6(v9[7]) = a2[152];
  HIBYTE(v9[7]) = a2[156];
  LOBYTE(v9[8]) = a2[52];
  v9[0] = 0x480000002DLL;
  memset(&v9[1], 0, 36);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  result = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9, CurrentProcessSessionId);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0pqqqqqqqqqqqqqqqqq_EtwWriteTransfer(
             v7,
             v6,
             v8,
             a1,
             *(_DWORD *)a2,
             *((_DWORD *)a2 + 1),
             *((_DWORD *)a2 + 2),
             *((_DWORD *)a2 + 3),
             *((_DWORD *)a2 + 5),
             *((_DWORD *)a2 + 6),
             *((_DWORD *)a2 + 7),
             *((_DWORD *)a2 + 8),
             *((_DWORD *)a2 + 10),
             *((_DWORD *)a2 + 12),
             *((_DWORD *)a2 + 14),
             *((_DWORD *)a2 + 15),
             *((_DWORD *)a2 + 17),
             *((_DWORD *)a2 + 18),
             *((_DWORD *)a2 + 38),
             *((_DWORD *)a2 + 39),
             *((_DWORD *)a2 + 13));
  return result;
}
