__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  const struct _D3DMATRIX *v7; // rdx
  const struct tagRECT *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagPOINT v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v12 = *a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
    || (unsigned int)GetWindowCloakState((struct tagTHREADINFO **)a1)
    || (unsigned int)IsWindowUnderActiveLockScreen(a1) )
  {
    return 0LL;
  }
  v7 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
  v8 = (const struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( !v7 )
  {
    if ( v3.x >= v8->left
      && v3.x < *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL)
      && v3.y >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)
      && v3.y < *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) )
    {
      goto LABEL_9;
    }
    return 0LL;
  }
  if ( !DCEHitTestWindow(v8, v7, &v12, a3) )
    return 0LL;
  v3 = v12;
LABEL_9:
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v9 && !(unsigned int)GrePtInRegion(v9, (unsigned int)v3.x, (unsigned int)v12.y) )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 26) & 8) != 0 && (*(_DWORD *)(v10 + 232) & 2) == 0 && !DCELayerHitTest(a1, v3) )
    return 0LL;
  if ( *((_QWORD *)a1 + 27) )
    *a2 = v3;
  return 1LL;
}
