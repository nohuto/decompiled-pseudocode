void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char *v2; // rbp
  int v3; // r12d
  CD2DBitmapCache *v4; // r14
  unsigned int v6; // edi
  int v8; // r15d
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  char v15; // bl
  int v16; // eax
  __int64 v17; // rdx
  char *v18; // rcx
  _DWORD *v19; // rax
  int *v20; // rax
  int v21; // ecx
  char v22; // al
  bool v23; // zf
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  void (__fastcall *v28)(__int64, _QWORD); // rbx
  char *v29; // rcx
  unsigned int *v30; // rax
  __int128 v31; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+70h] [rbp+8h] BYREF
  char v33; // [rsp+78h] [rbp+10h] BYREF

  v2 = (char *)this - 264;
  v3 = *((_DWORD *)this - 54);
  v4 = (CDxHandleBitmapRealization *)((char *)this - 360);
  v6 = 3;
  v8 = 3;
  if ( *((_DWORD *)this - 66) )
    v8 = *(_DWORD *)v2;
  v9 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)v9 + 16LL))(v9, &v32);
  v13 = *((_DWORD *)this - 20);
  v31 = *(_OWORD *)((char *)this - 212);
  LOBYTE(v12) = v13 != DisplayId::None && v13 != DisplayId::All;
  if ( (*((_DWORD *)a2 + 34) & 1) != (*((_DWORD *)this - 32) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this - 32) )
  {
    LOBYTE(v10) = *((_BYTE *)a2 + 136) & 1;
    v20 = (int *)CBitmapRealization::CalcDisplayRestriction(
                   &v33,
                   v10,
                   *((_QWORD *)a2 + 1),
                   v12,
                   v31,
                   *((_QWORD *)&v31 + 1));
    v21 = *v20;
    *((_DWORD *)this - 20) = *v20;
    v22 = v21 != DisplayId::None && v21 != DisplayId::All;
    if ( (_BYTE)v12 != v22 )
    {
      v23 = v22 == 0;
      v24 = *((_DWORD *)g_pComposition + 108);
      v25 = v24 + 1;
      if ( v23 )
        v25 = v24 - 1;
      *((_DWORD *)g_pComposition + 108) = v25;
    }
  }
  *(_OWORD *)v2 = *(_OWORD *)a2;
  *((_OWORD *)v2 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v2 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v2 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v2 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v2 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v2 + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)v2 + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)v2 + 8) = *((_OWORD *)a2 + 8);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    v15 = 0;
    v16 = 3;
    if ( *(_DWORD *)v2 )
      v16 = *(_DWORD *)v2;
    if ( v8 != v16 )
    {
      v26 = v14 + 80;
      if ( *(_DWORD *)v2 )
        v6 = *(_DWORD *)v2;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v26 + 8LL))(v26, v6, v11, v12);
      v15 = 1;
    }
    v17 = *((unsigned int *)this - 54);
    if ( v3 != (_DWORD)v17 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 16LL))(
        *((_QWORD *)this + 2) + 80LL,
        v17,
        v11,
        v12);
      v15 = 1;
    }
    v18 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *, __int64, __int64))(*(_QWORD *)v18 + 16LL))(
                      v18,
                      &v33,
                      v11,
                      v12);
    if ( v32 == *v19 )
    {
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      v27 = *((_QWORD *)this + 2);
      v28 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v27 + 80) + 24LL);
      v29 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
      v30 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v29 + 16LL))(v29, &v33);
      v28(v27 + 80, *v30);
    }
    CD2DBitmapCache::InitializeCache(
      v4,
      (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 2) + 96LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64)));
    CBitmapRealization::InvalidateDecodeBitmap(v4, 0);
  }
LABEL_15:
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                           &v31,
                           (char *)this - 212,
                           v11,
                           v12) )
    *((_BYTE *)this - 48) = 0;
}
