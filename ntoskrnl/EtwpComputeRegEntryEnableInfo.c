/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x1406934E8
 * Callers:
 *     EtwpCalculateUpdateNotification @ 0x140690658 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterKMProvider @ 0x140690D64 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x140694950 (EtwpRegisterUMProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140695580 (EtwpClearSessionAndUnreferenceEntry.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409E9FE0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r11
  int v5; // eax
  int v6; // ebx
  __int64 v7; // r15
  int v8; // edi
  int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // r9d
  int v12; // esi
  _QWORD *v13; // r10
  unsigned int v14; // r10d
  char *v15; // r9
  __int64 result; // rax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  unsigned int v19; // r9d
  _QWORD *v20; // r8
  unsigned __int8 v21; // cl
  unsigned int v22; // r9d
  char *v23; // r8
  unsigned __int8 v24; // cl

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned __int8 *)(a1 + 100);
  v6 = *(unsigned __int8 *)(a1 + 101);
  v7 = *(_QWORD *)(v2 + 400);
  v8 = *(unsigned __int8 *)(a1 + 102);
  v9 = *(unsigned __int8 *)(a1 + 103);
  if ( v4 )
    v10 = *(_QWORD *)(v4 + 400);
  else
    v10 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v11 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  v12 = v5;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = -1LL;
  v13 = (_QWORD *)(v2 + 144);
  do
  {
    if ( _bittest(&v12, (unsigned __int8)v11) )
    {
      v17 = *(_BYTE *)(a2 + 4);
      *(_DWORD *)a2 = 1;
      if ( v17 <= *((_BYTE *)v13 - 12) )
        v17 = *((_BYTE *)v13 - 12);
      *(_BYTE *)(a2 + 4) = v17;
      *(_QWORD *)(a2 + 16) |= *v13;
      *(_QWORD *)(a2 + 24) &= v13[1];
      *(_DWORD *)(a2 + 8) |= *((_DWORD *)v13 - 2);
    }
    ++v11;
    v13 += 4;
  }
  while ( v11 < 8 );
  if ( (_BYTE)v6 )
  {
    v14 = 0;
    v15 = (char *)(v4 + 132);
    do
    {
      if ( _bittest(&v6, (unsigned __int8)v14) && *((_DWORD *)v15 - 1) )
      {
        v18 = *(_BYTE *)(a2 + 4);
        *(_DWORD *)a2 = 1;
        if ( v18 <= (unsigned __int8)*v15 )
          v18 = *v15;
        *(_BYTE *)(a2 + 4) = v18;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v15 + 12);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v15 + 20);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v15 + 1);
      }
      ++v14;
      v15 += 32;
    }
    while ( v14 < 8 );
  }
  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 400) )
  {
    if ( (_BYTE)v8 )
    {
      v19 = 0;
      v20 = (_QWORD *)(v7 + 144);
      do
      {
        result = (unsigned __int8)v19;
        if ( _bittest(&v8, (unsigned __int8)v19) )
        {
          v21 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v21 <= *((_BYTE *)v20 - 12) )
            v21 = *((_BYTE *)v20 - 12);
          *(_BYTE *)(a2 + 4) = v21;
          *(_QWORD *)(a2 + 16) |= *v20;
          *(_QWORD *)(a2 + 24) &= v20[1];
          result = *((unsigned int *)v20 - 2);
          *(_DWORD *)(a2 + 8) |= result;
        }
        ++v19;
        v20 += 4;
      }
      while ( v19 < 8 );
    }
    if ( (_BYTE)v9 )
    {
      v22 = 0;
      v23 = (char *)(v10 + 132);
      do
      {
        result = (unsigned __int8)v22;
        if ( _bittest(&v9, (unsigned __int8)v22) && *((_DWORD *)v23 - 1) )
        {
          v24 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v24 <= (unsigned __int8)*v23 )
            v24 = *v23;
          *(_BYTE *)(a2 + 4) = v24;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v23 + 12);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v23 + 20);
          result = *((unsigned int *)v23 + 1);
          *(_DWORD *)(a2 + 8) |= result;
        }
        ++v22;
        v23 += 32;
      }
      while ( v22 < 8 );
    }
  }
  return result;
}
