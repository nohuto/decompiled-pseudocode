/*
 * XREFs of ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0308FA0
 * Callers:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0308754 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0308828 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0309D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTDR_DUMP_BUFFER::ShrinkLastSegment(CTDR_DUMP_BUFFER *this)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  unsigned int v3; // r10d
  bool v4; // zf
  __int64 v5; // r9
  _DWORD *v6; // rdx
  __int64 v7; // r8
  int v8; // r8d

  v1 = *((_WORD *)this + 10);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 1);
    v3 = *(_DWORD *)(v2 + 8LL * (unsigned __int16)(v1 - 1) + 8);
    v4 = v2 + v3 == 0;
    v5 = v2 + v3;
    v6 = (_DWORD *)((char *)this + 24);
    if ( v4 || *v6 == v3 )
      goto LABEL_8;
    v7 = *v6 - v3 - 1;
    if ( *v6 - v3 != 1 )
    {
      do
      {
        if ( *(_BYTE *)(v7 + v5) )
          break;
        v4 = (_DWORD)v7 == 1;
        v7 = (unsigned int)(v7 - 1);
      }
      while ( !v4 );
    }
    v8 = *(_BYTE *)(v7 + v5) != 0 ? v7 + 1 : 0;
    if ( !v8 )
LABEL_8:
      v8 = 1;
    *v6 = v8 + v3;
  }
}
