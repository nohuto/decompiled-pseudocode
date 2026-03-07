__int64 __fastcall VidSchiIsExpectedVSyncCookie3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        unsigned int *const a4)
{
  _DWORD *v5; // rsi
  unsigned int v7; // r10d
  char v8; // r8
  bool v9; // zf
  int v10; // eax
  char i; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // r9d
  unsigned int v17; // r15d
  __int64 v18; // rcx
  char v19; // cl
  int v20; // eax

  v5 = (_DWORD *)*((_QWORD *)a3 + 147);
  if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
    v7 = ((unsigned __int16)*v5 | (unsigned __int16)(*v5 >> 10)) & 0x3FF;
  else
    v7 = (1 << *((_DWORD *)a1 + 38)) - 1;
  v8 = -1;
  v9 = !_BitScanForward((unsigned int *)&v10, v7);
  if ( !v9 )
    v8 = v10;
  for ( i = 0; ; ++i )
  {
    if ( !v7 )
      return 1LL;
    v12 = *(_QWORD *)((char *)v5 + i * ((8 * v5[2] + 231) & 0xFFFFFFF8) + 24);
    if ( v12 )
      break;
LABEL_16:
    v19 = v8;
    v8 = -1;
    v7 &= ~(1 << v19);
    v9 = !_BitScanForward((unsigned int *)&v20, v7);
    if ( !v9 )
      v8 = v20;
  }
  v13 = 288LL * v8;
  if ( v12 <= *(_QWORD *)((char *)a2 + v13 + 400) )
  {
    v14 = a4[v8];
    v15 = *(_DWORD *)((char *)a2 + v13 + 372);
    if ( v14 != -1 )
    {
      v16 = (v14 + 1) % v15;
      v17 = ((v15 + *(_DWORD *)((char *)a2 + v13 + 376) - 1) % v15 + 1) % v15;
      if ( v16 != v17 )
      {
        v18 = *(_QWORD *)((char *)a2 + v13 + 432);
        while ( *(_QWORD *)(v18 + 16LL * v16) != v12 )
        {
          v16 = (v16 + 1) % v15;
          if ( v16 == v17 )
            goto LABEL_16;
        }
        *((_QWORD *)a3 + 163) = *(_QWORD *)(v18 + 16LL * v16 + 8);
      }
    }
    goto LABEL_16;
  }
  return 0LL;
}
