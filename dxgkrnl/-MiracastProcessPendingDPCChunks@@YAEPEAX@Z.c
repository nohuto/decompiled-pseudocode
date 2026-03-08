/*
 * XREFs of ?MiracastProcessPendingDPCChunks@@YAEPEAX@Z @ 0x1C005EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x1C005EDC8 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall MiracastProcessPendingDPCChunks(_WORD *a1)
{
  _WORD *v1; // r10
  __int64 v2; // rcx
  unsigned __int8 result; // al
  __int64 v4; // r10
  struct MIRACAST_CHUNK_LIST **v5; // r10
  struct MIRACAST_CHUNK_LIST *v6; // rdx
  struct MIRACAST_CHUNK_LIST *v7; // rdx

  a1[8] = 0;
  v1 = a1;
  *((_DWORD *)a1 + 5) = 0;
  *((_BYTE *)a1 + 18) = 0;
  v2 = *(_QWORD *)a1;
  if ( *(_BYTE *)(v2 + 3265) )
  {
    *((_BYTE *)v1 + 17) = 1;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v2 + 3264) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(v2 + 3272),
        *(struct MIRACAST_CHUNK_LIST **)(v2 + 3288));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v4 + 3272LL),
        *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v4 + 3280LL));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)*v5 + 409), v5[1]);
      *(_BYTE *)(*(_QWORD *)v1 + 3264LL) = 0;
      *((_BYTE *)v1 + 16) = 1;
    }
    v6 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v1 + 3280LL);
    if ( *((_DWORD *)v6 + 4) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)v1 + 1), v6);
      *((_BYTE *)v1 + 18) = 1;
    }
    v7 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v1 + 3288LL);
    if ( *((_DWORD *)v7 + 4) )
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v1 + 3272LL), v7);
    result = 1;
    *((_DWORD *)v1 + 5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 3272LL) + 16LL);
  }
  return result;
}
