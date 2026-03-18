/*
 * XREFs of ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02CEB8C
 * Callers:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02CE3F0 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall cjGetLogicalColorSpace(HCOLORSPACE a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rcx
  size_t *v7; // r8
  __int64 v8; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( a2 >= 0x24C && a3 )
  {
    COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v10, a1);
    v6 = v11;
    if ( v11 )
    {
      v7 = (size_t *)(v11 + 92);
      *(_DWORD *)a3 = *(_DWORD *)(v11 + 24);
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v6 + 28);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v6 + 32);
      *((_DWORD *)a3 + 3) = *(_DWORD *)(v6 + 36);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v6 + 40);
      *(_OWORD *)(a3 + 20) = *(_OWORD *)(v6 + 44);
      *(_OWORD *)(a3 + 36) = *(_OWORD *)(v6 + 60);
      *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 76);
      *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 80);
      *((_DWORD *)a3 + 15) = *(_DWORD *)(v6 + 84);
      *((_DWORD *)a3 + 16) = *(_DWORD *)(v6 + 88);
      RtlStringCchCopyW((unsigned __int16 *)a3 + 34, 0x104uLL, v7);
      v8 = v11;
      v3 = 592;
      if ( a2 < 0x250 )
        v3 = 588;
      else
        *((_DWORD *)a3 + 147) = *(_DWORD *)(v11 + 612);
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v10);
  }
  return v3;
}
