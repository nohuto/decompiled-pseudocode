__int64 __fastcall DXGADAPTER::QueryNodeMetadata(DXGADAPTER *this, unsigned int a2, struct _DXGK_NODEMETADATA *a3)
{
  unsigned __int16 v3; // r10
  __int64 v4; // rax
  int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // edx
  unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // r8

  v3 = a2;
  v4 = HIWORD(a2);
  v6 = *((_DWORD *)this + 638);
  v7 = 1LL;
  if ( v6 < 0x2000 )
    v8 = 1;
  else
    v8 = *((_DWORD *)this + 72);
  if ( (unsigned int)v4 >= v8 )
  {
    if ( v6 >= 0x2000 )
      v7 = *((unsigned int *)this + 72);
    v13 = (unsigned int)v4;
    goto LABEL_12;
  }
  v9 = (unsigned __int16 *)(*((_QWORD *)this + 351) + 344 * v4);
  if ( v3 >= *v9 )
  {
    v7 = *v9;
    v13 = v3;
LABEL_12:
    WdLogSingleEntry3(3LL, this, v13, v7);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)v9 + 4);
  if ( v10 )
  {
    v11 = 74LL * v3;
    *(_OWORD *)&a3->EngineType = *(_OWORD *)(v11 + v10);
    *(_OWORD *)&a3->FriendlyName[6] = *(_OWORD *)(v11 + v10 + 16);
    *(_OWORD *)&a3->FriendlyName[14] = *(_OWORD *)(v11 + v10 + 32);
    *(_OWORD *)&a3->FriendlyName[22] = *(_OWORD *)(v11 + v10 + 48);
    *(_QWORD *)&a3->FriendlyName[30] = *(_QWORD *)(v11 + v10 + 64);
    *(_WORD *)&a3->GpuMmuSupported = *(_WORD *)(v11 + v10 + 72);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    return 3221225659LL;
  }
}
