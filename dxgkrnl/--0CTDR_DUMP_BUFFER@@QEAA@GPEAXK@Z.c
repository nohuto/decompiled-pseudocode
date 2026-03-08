/*
 * XREFs of ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C0308664
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

CTDR_DUMP_BUFFER *__fastcall CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(CTDR_DUMP_BUFFER *this, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v4; // r8
  __int64 v6; // rcx

  *((_QWORD *)this + 1) = a3;
  *((_WORD *)this + 10) = 0;
  v4 = 0;
  *(_DWORD *)this = 39;
  *((_DWORD *)this + 4) = 17168388;
  do
  {
    v6 = v4++;
    *(_DWORD *)(*((_QWORD *)this + 1) + 8 * v6 + 8) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 8 * v6 + 12) = 0;
  }
  while ( (unsigned int)v4 < *(_DWORD *)this );
  if ( *((_DWORD *)this + 4) >= 4u )
    *a3 = *(_DWORD *)this;
  *((_DWORD *)this + 6) = 8 * *(_DWORD *)this + 8;
  return this;
}
