/*
 * XREFs of BgpFwMapFrameBuffer @ 0x14066F710
 * Callers:
 *     BgpFwSetBootGraphicsInformation @ 0x14066F7B0 (BgpFwSetBootGraphicsInformation.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 */

__int64 __fastcall BgpFwMapFrameBuffer(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 12);
  if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
    v4 = (unsigned int)(*(_DWORD *)(a1 + 4) * v3);
  else
    v4 = (unsigned int)(*(_DWORD *)(a1 + 8) * v3);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  v7 = v4 * ((v2 != 4) + 3LL);
  v8 = MmMapIoSpaceEx(v5, v7, 0x404u);
  if ( v8 || (v8 = MmMapIoSpaceEx(v5, v7, 0x204u)) != 0 )
  {
    *(_QWORD *)(a1 + 32) = v8;
    *(_BYTE *)(a1 + 1) = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
