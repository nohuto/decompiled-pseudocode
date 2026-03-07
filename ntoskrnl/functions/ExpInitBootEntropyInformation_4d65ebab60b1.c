__int64 __fastcall ExpInitBootEntropyInformation(PRTL_RUN_ONCE RunOnce, _DWORD **Parameter, PVOID *Context)
{
  _DWORD *v4; // rbx
  char *v5; // rdi
  _DWORD *v6; // rcx
  signed __int64 v7; // rdx
  __int64 v8; // r8
  __int128 v9; // xmm0

  v4 = *Parameter;
  v5 = (char *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 344LL);
  if ( *Parameter )
  {
    memset(v4, 0, 0x448uLL);
    v6 = v4 + 4;
    v7 = v5 - (char *)v4;
    v8 = 10LL;
    do
    {
      *(v6 - 2) = *(_DWORD *)((char *)v6 + v7 - 8);
      *(_QWORD *)v6 = *(_QWORD *)((char *)v6 + v7);
      v6[2] = *(_DWORD *)((char *)v6 + v7 + 8);
      v6[3] = *(_DWORD *)((char *)v6 + v7 + 12);
      *((_QWORD *)v6 + 2) = *(_QWORD *)((char *)v6 + v7 + 16);
      v6[6] = *(_DWORD *)((char *)v6 + v7 + 24);
      v9 = *(_OWORD *)((char *)v6 + v7 + 28);
      v6 += 26;
      *(_OWORD *)(v6 - 19) = v9;
      *(_OWORD *)(v6 - 15) = *(_OWORD *)((char *)v6 + v7 - 60);
      *(_OWORD *)(v6 - 11) = *(_OWORD *)((char *)v6 + v7 - 44);
      *(_OWORD *)(v6 - 7) = *(_OWORD *)((char *)v6 + v7 - 28);
      --v8;
    }
    while ( v8 );
    *v4 = *(_DWORD *)v5;
    *(_OWORD *)(v4 + 262) = *(_OWORD *)(v5 + 1048);
    *(_OWORD *)(v4 + 266) = *(_OWORD *)(v5 + 1064);
    *(_OWORD *)(v4 + 270) = *(_OWORD *)(v5 + 1080);
  }
  memset(v5, 0, 0x448uLL);
  *Parameter = (_DWORD *)-1LL;
  return 1LL;
}
