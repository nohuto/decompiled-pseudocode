/*
 * XREFs of ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x1C005EDC8
 * Callers:
 *     ?MiracastProcessPendingDPCChunks@@YAEPEAX@Z @ 0x1C005EFF0 (-MiracastProcessPendingDPCChunks@@YAEPEAX@Z.c)
 *     DpiMiracastMoveChunkList @ 0x1C005FF20 (DpiMiracastMoveChunkList.c)
 * Callees:
 *     <none>
 */

void __fastcall MIRACAST_CHUNK_LIST::AddChunkListToTail(MIRACAST_CHUNK_LIST *this, struct MIRACAST_CHUNK_LIST *a2)
{
  struct MIRACAST_CHUNK_LIST **v2; // r8
  struct MIRACAST_CHUNK_LIST **v3; // rax
  MIRACAST_CHUNK_LIST **v4; // r9

  v2 = *(struct MIRACAST_CHUNK_LIST ***)a2;
  if ( *(struct MIRACAST_CHUNK_LIST **)a2 != a2 )
  {
    if ( v2[1] != a2
      || (v3 = (struct MIRACAST_CHUNK_LIST **)*((_QWORD *)a2 + 1), *v3 != a2)
      || (*v3 = (struct MIRACAST_CHUNK_LIST *)v2,
          v2[1] = (struct MIRACAST_CHUNK_LIST *)v3,
          *((_QWORD *)a2 + 1) = a2,
          *(_QWORD *)a2 = a2,
          v4 = (MIRACAST_CHUNK_LIST **)*((_QWORD *)this + 1),
          *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)this + 8LL) != this)
      || *v4 != this
      || *((struct MIRACAST_CHUNK_LIST ***)*v2 + 1) != v2
      || *(struct MIRACAST_CHUNK_LIST ***)v2[1] != v2 )
    {
      __fastfail(3u);
    }
    *v4 = (MIRACAST_CHUNK_LIST *)v2;
    *((_QWORD *)this + 1) = v2[1];
    *(_QWORD *)v2[1] = this;
    v2[1] = (struct MIRACAST_CHUNK_LIST *)v4;
    *((_DWORD *)this + 4) += *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = 0;
  }
}
