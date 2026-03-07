__int64 __fastcall VidSchSignalPagingFences(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  KPRIORITY v6; // r11d
  _QWORD *v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  __int64 v12; // rax

  v6 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( !*(_BYTE *)(a1 + 55) )
  {
    if ( a5 == -1 )
    {
      v6 = *(_DWORD *)(a1 + 76);
      if ( a6 )
        v8 = *(_QWORD **)(a1 + 288);
      else
        v8 = *(_QWORD **)(a1 + 264);
    }
    else
    {
      v6 = 1;
      if ( a6 )
        v12 = *(_QWORD *)(a1 + 288);
      else
        v12 = *(_QWORD *)(a1 + 264);
      v8 = (_QWORD *)(v12 + 8LL * a5);
    }
    return VidSchSignalSyncObjectsFromGpu(v9, (__int64)v10, v6, v8, 1u, (__int64)a2, 0, a3, 0);
  }
  v10 = *(_QWORD **)(a1 + 280);
  if ( *v10 )
  {
    if ( a5 == -1 )
    {
      v9 = *(_DWORD *)(a1 + 76);
    }
    else
    {
      v9 = 1;
      v10 += a5;
    }
    return VidSchSignalSyncObjectsFromGpu(v9, (__int64)v10, v6, v8, 1u, (__int64)a2, 0, a3, 0);
  }
  return VidSchSignalSyncObjectsFromCpu(1u, a2, 0, (char *)a3);
}
