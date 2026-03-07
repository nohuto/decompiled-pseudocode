__int64 __fastcall VIDMM_PAGING_QUEUE::InitializePagingQueue(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  char v6; // di
  __int64 v7; // rax
  struct _KEVENT *v8; // rax
  unsigned int v9; // esi
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx

  *(_QWORD *)(a1 + 80) = *(_QWORD *)a4;
  v6 = 1;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 130) = *(_BYTE *)(a4 + 4640);
  *(_DWORD *)(a1 + 132) = dword_1C00764EC;
  *(_DWORD *)(a1 + 116) = a5;
  v7 = *(_QWORD *)(a4 + 24);
  if ( *(int *)(v7 + 2552) >= 0x2000 && *(_DWORD *)(v7 + 288) > 1u )
    *(_DWORD *)(a1 + 144) = a3;
  v8 = (struct _KEVENT *)operator new(24LL, 0x38346956u, 64LL);
  *(_QWORD *)(a1 + 120) = v8;
  if ( v8 )
  {
    KeInitializeEvent(v8, SynchronizationEvent, 0);
    v9 = 0;
    while ( 1 )
    {
      v10 = (_QWORD *)operator new(160LL, 0x38346956u, 256LL);
      if ( !v10 )
        break;
      v11 = *(_QWORD **)(a1 + 24);
      if ( *v11 != a1 + 16 )
        __fastfail(3u);
      *v10 = a1 + 16;
      ++v9;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(a1 + 24) = v10;
      if ( v9 >= 2 )
      {
        v12 = *(_QWORD *)(a1 + 136);
        v13 = *(_QWORD *)(v12 + 24);
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 8) + 96LL) & 2) == 0 || v13 && (*(_BYTE *)(v13 + 1901) & 0x10) != 0 )
          v6 = 0;
        *(_BYTE *)(a1 + 128) = v6;
        *(_BYTE *)(a1 + 129) = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL);
        if ( v14 )
          *(_BYTE *)(a1 + 129) = (*(_DWORD *)(v14 + 424) & 5) != 0;
        VIDMM_DEVICE::InsertPagingQueueList((__int64 **)v12, (struct VIDMM_PAGING_QUEUE *)a1);
        return 0LL;
      }
    }
  }
  return 3221225495LL;
}
