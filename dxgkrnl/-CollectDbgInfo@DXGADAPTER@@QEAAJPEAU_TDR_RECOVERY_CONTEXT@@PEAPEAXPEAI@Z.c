__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  char *v8; // rbx
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  ADAPTER_DISPLAY *v13; // rcx
  PERESOURCE v14; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 10241LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 10241LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *a4 < 0x438 )
    return 2147483653LL;
  v8 = (char *)*a3;
  v9 = this + 277;
  v10 = 4LL;
  *(_DWORD *)v8 = 1885430849;
  v11 = v8 + 8;
  do
  {
    *v11 = *v9;
    v11[1] = v9[1];
    v11[2] = v9[2];
    v11[3] = v9[3];
    v11[4] = v9[4];
    v11[5] = v9[5];
    v11[6] = v9[6];
    v11 += 8;
    v12 = v9[7];
    v9 += 8;
    *(v11 - 1) = v12;
    --v10;
  }
  while ( v10 );
  *v11 = *v9;
  v11[1] = v9[1];
  v11[2] = v9[2];
  v11[3] = v9[3];
  v11[4] = v9[4];
  v13 = (ADAPTER_DISPLAY *)this[365];
  if ( v13 )
    ADAPTER_DISPLAY::CollectDbgInfo(v13, (struct DXGADAPTERDBGINFO *)v8);
  v14 = this[366];
  if ( v14 )
  {
    *(_OWORD *)(v8 + 792) = *(_OWORD *)&v14[7].SpinLock;
    *(_OWORD *)(v8 + 808) = *(_OWORD *)&v14[8].SystemResourcesList.Blink;
  }
  *a3 = (char *)*a3 + 1080;
  *a4 -= 1080;
  return 0LL;
}
