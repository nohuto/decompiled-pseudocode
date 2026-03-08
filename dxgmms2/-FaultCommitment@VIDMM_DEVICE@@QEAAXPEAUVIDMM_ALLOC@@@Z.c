/*
 * XREFs of ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00EC218
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7CA8 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::FaultCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  __int64 v4; // rax
  _QWORD *v5; // rax

  v2 = (_QWORD *)((char *)a2 + 56);
  v3 = (_QWORD *)(*((_QWORD *)a2 + 1) + 144LL);
  if ( (*(_DWORD *)(**(_QWORD **)a2 + 68LL) & 0x10000000) == 0 )
  {
    v5 = *(_QWORD **)(*((_QWORD *)a2 + 1) + 152LL);
    if ( (_QWORD *)*v5 == v3 )
    {
      *v2 = v3;
      *((_QWORD *)a2 + 8) = v5;
      *v5 = v2;
      v3[1] = v2;
      goto LABEL_7;
    }
LABEL_5:
    __fastfail(3u);
  }
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_5;
  *v2 = v4;
  *((_QWORD *)a2 + 8) = v3;
  *(_QWORD *)(v4 + 8) = v2;
  *v3 = v2;
LABEL_7:
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 1;
}
