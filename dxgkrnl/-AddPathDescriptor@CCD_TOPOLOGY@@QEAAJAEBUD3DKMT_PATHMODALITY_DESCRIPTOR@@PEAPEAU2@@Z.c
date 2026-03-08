/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C01DB3F0
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01C17B0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DB31C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01826C8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  int v4; // r9d
  int v5; // r8d
  char v6; // al
  int v7; // r11d
  __int64 result; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v9; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  if ( _bittest64((const signed __int64 *)a2, 0x24u) && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  v4 = *((_DWORD *)a2 + 23);
  v5 = *((_DWORD *)a2 + 22);
  v6 = *((_BYTE *)a2 + 129);
  v7 = *((_DWORD *)a2 + 53);
  v10 = 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor(
             (__int64)this,
             (__int64 *)a2 + 2,
             *((_DWORD *)a2 + 6),
             *((_DWORD *)a2 + 7),
             v6 & 1,
             (v6 & 2) != 0,
             (v6 & 4) != 0,
             v5,
             v4,
             v7,
             (__int64 *)&v10);
  if ( (int)result >= 0 )
  {
    v9 = v10;
    *v10 = *(struct D3DKMT_PATHMODALITY_DESCRIPTOR **)a2;
    *((_OWORD *)v9 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v9 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v9 + 4) = *((_OWORD *)a2 + 4);
    v9[10] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 10);
    *((_DWORD *)v9 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v9 + 23) = *((_DWORD *)a2 + 23);
    *((_OWORD *)v9 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)v9 + 7) = *((_OWORD *)a2 + 7);
    *((_DWORD *)v9 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)v9 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)v9 + 35) = *((_DWORD *)a2 + 35);
    v9[18] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 18);
    v9[19] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 19);
    *(_OWORD *)(v9 + 21) = *(_OWORD *)((char *)a2 + 168);
    *((_DWORD *)v9 + 46) = *((_DWORD *)a2 + 46);
    *((_DWORD *)v9 + 47) = *((_DWORD *)a2 + 47);
    *((_DWORD *)v9 + 48) = *((_DWORD *)a2 + 48);
    *((_DWORD *)v9 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v9 + 52) = *((_DWORD *)a2 + 52);
    v9[28] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 28);
    *((_DWORD *)v9 + 60) = *((_DWORD *)a2 + 60);
    return (unsigned int)result;
  }
  return result;
}
