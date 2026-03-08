/*
 * XREFs of ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C005F0CC
 * Callers:
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0061380 (DxgkMiracastGetNextChunkInfo.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C005F208 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 */

__int64 __fastcall ProcessMiracastAPIChunk(
        struct _MIRACAST_DEVICE_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int *a3,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a4,
        unsigned int *a5)
{
  __int64 v6; // rsi
  MIRACAST_CHUNK_LIST *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  struct MIRACAST_CHUNK *v14; // r15
  __int64 v15; // rcx
  struct MIRACAST_CHUNK **v16; // rax
  __int64 v17; // rcx

  v6 = *a3;
  if ( *((_BYTE *)a1 + 588) )
  {
    *((_BYTE *)a1 + 588) = 0;
    WdLogSingleEntry0(3LL);
    return 3221225997LL;
  }
  else
  {
    v11 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)a1 + 61);
    v12 = *(_QWORD *)v11;
    if ( *(MIRACAST_CHUNK_LIST **)v11 == v11 || !v12 )
    {
      return 3221225534LL;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 40) + 28;
      if ( (unsigned int)v6 >= v13 )
      {
        do
        {
          v14 = MIRACAST_CHUNK_LIST::RemoveHead(v11);
          memmove(a4, (char *)v14 + 16, v13);
          v15 = *((_QWORD *)a2 + 411);
          LODWORD(v6) = v6 - v13;
          a4 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)((char *)a4 + v13);
          v16 = *(struct MIRACAST_CHUNK ***)(v15 + 8);
          if ( *v16 != (struct MIRACAST_CHUNK *)v15 )
            __fastfail(3u);
          *(_QWORD *)v14 = v15;
          *((_QWORD *)v14 + 1) = v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 8) = v14;
          ++*(_DWORD *)(v15 + 16);
          v11 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)a1 + 61);
          v17 = *(_QWORD *)v11;
          if ( *(MIRACAST_CHUNK_LIST **)v11 == v11 )
            break;
          if ( !v17 )
            break;
          v13 = *(_DWORD *)(v17 + 40) + 28;
        }
        while ( v13 <= (unsigned int)v6 );
        *a5 = *((_DWORD *)v11 + 4);
        *a3 -= v6;
        return 0LL;
      }
      else
      {
        WdLogSingleEntry2(2LL, v6, v13);
        return 3221225507LL;
      }
    }
  }
}
