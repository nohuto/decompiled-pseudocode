CProcessAttributionManager::Record *__fastcall CProcessAttributionManager::Record::Record(
        CProcessAttributionManager::Record *this,
        int a2,
        __int64 a3,
        int a4)
{
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v12[5]; // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  *((_DWORD *)this + 30) = a2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 7LL;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 40) = a4;
  memset_0(v12, 0, 0x54uLL);
  v6 = v12[1];
  v7 = v13;
  *(_OWORD *)((char *)this + 28) = v12[0];
  *(_QWORD *)this = a3;
  v8 = v12[2];
  *(_OWORD *)((char *)this + 44) = v6;
  v9 = v12[3];
  *(_OWORD *)((char *)this + 60) = v8;
  v10 = v12[4];
  *(_OWORD *)((char *)this + 76) = v9;
  *(_OWORD *)((char *)this + 92) = v10;
  *((_DWORD *)this + 27) = v7;
  return this;
}
