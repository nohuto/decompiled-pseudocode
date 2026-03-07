__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  unsigned int v7; // r15d
  int v8; // r12d
  unsigned int v9; // ebx
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned int v14; // ebp
  __int64 v15; // r8
  unsigned __int64 v16; // r13
  _WORD *v17; // r10
  __int16 v18; // r9
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  struct _VIDSCH_SYNC_OBJECT **v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _WORD *v34; // [rsp+60h] [rbp-68h]
  unsigned __int64 v35; // [rsp+68h] [rbp-60h] BYREF
  __int64 v36; // [rsp+70h] [rbp-58h]
  __int64 v37; // [rsp+78h] [rbp-50h]
  unsigned int v39; // [rsp+D8h] [rbp+10h]
  unsigned int v40; // [rsp+E0h] [rbp+18h]

  v4 = *(_DWORD **)(a4 + 1176);
  v7 = 0;
  v8 = 0;
  v9 = *v4 & 0x3FF;
  if ( *(_BYTE *)(a2 + 156) )
    v7 = (*v4 >> 10) & 0x3FF;
  v10 = !_BitScanForward(&v11, v9);
  v39 = v7;
  if ( v10 )
    LOBYTE(v11) = -1;
  v12 = (char)v11;
  v10 = !_BitScanForward(&v11, v7);
  if ( v10 )
    LOBYTE(v11) = -1;
  v11 = (char)v11;
  v40 = (char)v11;
  while ( v9 || v7 )
  {
    if ( v12 >= v11 )
    {
      v7 &= ~(1 << v11);
      v10 = !_BitScanForward(&v11, v7);
      v39 = v7;
      if ( v10 )
        LOBYTE(v11) = -1;
      v11 = (char)v11;
      v40 = (char)v11;
    }
    else
    {
      v10 = *(_DWORD *)(a4 + 1096) == 0;
      v14 = 0;
      v15 = v12;
      v37 = v12;
      if ( !v10 )
      {
        v16 = (unsigned __int64)v12 << 6;
        do
        {
          v17 = &a3[32 * (v16 + v14)];
          v34 = v17;
          *((_QWORD *)v17 + 398) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(v8
                                                                             + v14
                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                                         + *(_QWORD *)(a4 + 1176)
                                                         + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + 48)
                                             + 96LL);
          *((_QWORD *)v17 + 397) = *(_QWORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                             + *(_QWORD *)(a4 + 1176)
                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                             + 24);
          v18 = a3[22070];
          if ( *(_QWORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                         + *(_QWORD *)(a4 + 1176)
                         + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                         + 56) )
          {
            a3[22070] = v18 | (1 << v12);
            *((_QWORD *)v17 + 399) = *(_QWORD *)(((unsigned __int64)(v8 + v14
                                                                        * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                                               + *(_QWORD *)(a4 + 1176)
                                               + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                               * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                               + 56);
          }
          else
          {
            a3[22070] = v18 & ~(1 << v12);
          }
          v17[1604] = *(_WORD *)(((unsigned __int64)(v8 + v14 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)) << 6)
                               + *(_QWORD *)(a4 + 1176)
                               + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                               * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                               + 32);
          *(_QWORD *)&a3[32 * (v16 + v14) + 1600] = *(_QWORD *)(((unsigned __int64)(v8
                                                                                  + v14
                                                                                  * *(_DWORD *)(*(_QWORD *)(a4 + 1176)
                                                                                              + 4LL)) << 6)
                                                              + *(_QWORD *)(a4 + 1176)
                                                              + *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 4LL)
                                                              * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                              + 40);
          v19 = *(_QWORD *)(a4 + 1176);
          v20 = *(_DWORD *)(v19 + 4);
          v21 = v19 + v20 * ((8 * *(_DWORD *)(v19 + 8) + 231) & 0xFFFFFFF8);
          v22 = (unsigned __int64)(v8 + v14 * v20) << 6;
          v36 = *(_QWORD *)(v22 + v21 + 72);
          v23 = *(_QWORD *)(v22 + v21 + 64);
          v24 = *((_QWORD *)v17 + 398);
          v35 = v23;
          v25 = *(struct _VIDSCH_SYNC_OBJECT ***)(v24 + 24);
          if ( v25 )
          {
            if ( v23 )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(a1, 1u, v25, 0, &v35, 0LL) < 0 )
              {
                WdLogSingleEntry2(1LL, **(_QWORD **)(*((_QWORD *)v34 + 398) + 24LL), v35);
                ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to signal FlipTo fence 0x%p value 0x%I64x",
                  **(_QWORD **)(*((_QWORD *)v34 + 398) + 24LL),
                  v35,
                  0LL,
                  0LL,
                  0LL);
              }
              v17 = v34;
            }
            v29 = *((_QWORD *)v17 + 398);
            v30 = v36;
            *((_QWORD *)v17 + 402) = v36;
            v31 = *(_QWORD *)(v29 + 24);
            v32 = 2LL * *(unsigned int *)(v31 + 32);
            *(_OWORD *)(v31 + 8 * v32 + 40) = 0LL;
            *(_DWORD *)(v31 + 32) = ((unsigned __int8)*(_DWORD *)(v31 + 32) + 1) & 7;
            *(_DWORD *)(v31 + 8 * v32 + 40) = 1;
            *(_QWORD *)(v31 + 8 * v32 + 48) = v30;
          }
          else
          {
            v26 = *(_QWORD *)(v24 + 16);
            if ( v26 )
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          }
          ++v14;
        }
        while ( v14 < *(_DWORD *)(a4 + 1096) );
        v7 = v39;
        v15 = v37;
      }
      v27 = *(_QWORD *)(v12 * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                      + *(_QWORD *)(a4 + 1176)
                      + 224LL);
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 36));
        v33 = v15 << 12;
        *(_QWORD *)((char *)a3 + v33 + 3224) = *(_QWORD *)(v12
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + *(_QWORD *)(a4 + 1176)
                                                         + 224LL);
        *(_QWORD *)((char *)a3 + v33 + 3232) = *(_QWORD *)(v12
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1176) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + *(_QWORD *)(a4 + 1176)
                                                         + 232LL);
      }
      a3[22068] |= 1 << v12;
      v9 &= ~(1 << v12);
      v10 = !_BitScanForward((unsigned int *)&v28, v9);
      if ( v10 )
        LOBYTE(v28) = -1;
      v12 = (char)v28;
      v11 = v40;
    }
    ++v8;
  }
  result = *(unsigned __int16 *)(a4 + 1096);
  a3[22069] = result;
  return result;
}
