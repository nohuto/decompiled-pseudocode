__int64 __fastcall CWindowNode::ProcessSetBounds(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETBOUNDS *a3)
{
  int v3; // r9d
  char v5; // di
  char v6; // si
  unsigned int v8; // r8d
  int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // r9
  __int64 v12; // r10
  int v13; // edx
  int v14; // r8d
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int128 v20; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)a3 + 11);
  v5 = 0;
  DWORD1(v20) = v3;
  v6 = 0;
  v8 = v3;
  v9 = *((_DWORD *)a3 + 10);
  v10 = v9;
  if ( v3 <= *((_DWORD *)a3 + 13) )
    v8 = *((_DWORD *)a3 + 13);
  LODWORD(v20) = *((_DWORD *)a3 + 10);
  if ( v9 <= *((_DWORD *)a3 + 12) )
    v10 = *((_DWORD *)a3 + 12);
  *((_QWORD *)&v20 + 1) = __PAIR64__(v8, v10);
  if ( *((_DWORD *)this + 192) - *((_DWORD *)this + 190) != v10 - v9
    || *((_DWORD *)this + 193) - *((_DWORD *)this + 191) != v8 - v3 )
  {
    if ( *((_QWORD *)this + 99) )
      v5 = 1;
    else
      v6 = 1;
  }
  if ( !(unsigned __int8)operator==((char *)this + 728, (char *)a3 + 8) )
  {
    if ( *(_QWORD *)(v12 + 792) )
      v6 = 1;
    else
      v5 = 1;
  }
  v13 = *((_DWORD *)a3 + 4);
  v14 = *((_DWORD *)a3 + 5);
  v15 = *((_DWORD *)a3 + 3);
  *v11 = *((_DWORD *)a3 + 2);
  v11[1] = v15;
  v11[2] = v13;
  v11[3] = v14;
  v16 = *((_DWORD *)a3 + 7);
  v17 = *((_DWORD *)a3 + 8);
  v18 = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v12 + 744) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v12 + 748) = v16;
  *(_DWORD *)(v12 + 752) = v17;
  *(_DWORD *)(v12 + 756) = v18;
  *(_OWORD *)(v12 + 760) = v20;
  if ( v6 )
  {
    *(_BYTE *)(v12 + 888) = 0;
    goto LABEL_14;
  }
  if ( v5 )
LABEL_14:
    CVisual::PropagateFlags(v12, 5u);
  return 0LL;
}
