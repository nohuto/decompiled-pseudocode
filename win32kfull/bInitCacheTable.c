__int64 __fastcall bInitCacheTable(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v7; // r13
  int v8; // r15d
  int v10; // r12d
  unsigned int v12; // ebp
  int v13; // esi
  __int64 v14; // rcx
  int *v15; // r9
  __int64 v16; // r14
  void *v17; // rcx

  v7 = (unsigned int)(a1 + a2 + 200);
  v8 = a2 << 11;
  v10 = 768 * a1;
  v12 = 0;
  v13 = (a2 << 11) + 768 * a1 + ((80 * v7 + 327) & 0xFFFFFFF8);
  v16 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( **(_QWORD **)(v16 + 19392) )
    vUnmapFontCacheFile(v14);
  v17 = *(void **)(*(_QWORD *)(v16 + 19392) + 96LL);
  if ( v17 )
  {
    ZwClose(v17);
    *(_QWORD *)(*(_QWORD *)(v16 + 19392) + 96LL) = 0LL;
  }
  if ( (unsigned int)bMapFileRetainHandle(
                       (const unsigned __int16 *)v17,
                       (struct _FILEVIEW *)(*(_QWORD *)(v16 + 19392) + 48LL),
                       v13,
                       v15) )
  {
    **(_QWORD **)(v16 + 19392) = *(_QWORD *)(*(_QWORD *)(v16 + 19392) + 56LL);
    memset_0((void *)(**(_QWORD **)(v16 + 19392) + 72LL), 255, 0xF4uLL);
    memset_0((void *)(**(_QWORD **)(v16 + 19392) + 320LL), 0, 80 * v7);
    *(_DWORD *)(**(_QWORD **)(v16 + 19392) + 12LL) = a7;
    *(_DWORD *)(**(_QWORD **)(v16 + 19392) + 16LL) = v7;
    *(_DWORD *)(**(_QWORD **)(v16 + 19392) + 20LL) = 0;
    ***(_DWORD ***)(v16 + 19392) = 0;
    *(_QWORD *)(**(_QWORD **)(v16 + 19392) + 56LL) = a3;
    *(_QWORD *)(**(_QWORD **)(v16 + 19392) + 64LL) = a4;
    *(_QWORD *)(**(_QWORD **)(v16 + 19392) + 40LL) = a5;
    *(_QWORD *)(**(_QWORD **)(v16 + 19392) + 48LL) = a6;
    *(_DWORD *)(**(_QWORD **)(v16 + 19392) + 24LL) = v13;
    *(_QWORD *)(**(_QWORD **)(v16 + 19392) + 28LL) = (unsigned int)(v10 + v8);
    *(_DWORD *)(**(_QWORD **)(v16 + 19392) + 36LL) = 0;
    return 1;
  }
  return v12;
}
