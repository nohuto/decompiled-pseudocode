__int64 __fastcall CCompositionFrame::GetSurfaceUpdates(
        char **this,
        struct CSM_SURFACE_UPDATE_ *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int *v5; // r14
  CCompositionFrame *v8; // rbx
  char *v9; // rcx
  CCompositionFrame *v10; // rdx
  __int64 result; // rax
  CCompositionFrame *v12; // rdi
  CCompositionFrame *v13; // rcx
  unsigned __int8 v14; // si
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edx
  bool v18; // cf
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rbx
  bool v26; // zf
  char v27; // al
  int v28; // ecx
  __int128 v29; // xmm0
  __int64 v30; // rcx
  unsigned int v31; // eax
  CompositionSurfaceObject *v32; // rsi
  const struct CFlipToken *v33; // rdi
  struct DXGGLOBAL *Global; // rax
  CCompositionFrame *v35; // rcx
  int v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = a4;
  v8 = (CCompositionFrame *)this;
  if ( *((_BYTE *)this + 146) )
    goto LABEL_6;
  v9 = this[16];
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)v8 + 19);
    if ( v10 != (CCompositionFrame *)((char *)v8 + 152) )
    {
      v9 = (char *)v10 - 8;
      *((_BYTE *)v8 + 144) = 1;
      *((_QWORD *)v8 + 16) = (char *)v10 - 8;
    }
  }
  result = *((unsigned __int8 *)v8 + 144);
  if ( !(_BYTE)result )
  {
LABEL_6:
    v12 = (CCompositionFrame *)*((_QWORD *)v8 + 17);
    *((_BYTE *)v8 + 146) = 1;
    if ( !v12 )
    {
      v13 = (CCompositionFrame *)*((_QWORD *)v8 + 21);
      if ( v13 != (CCompositionFrame *)((char *)v8 + 168) )
      {
        *((_QWORD *)v8 + 17) = v13;
        v12 = v13;
        *((_BYTE *)v8 + 145) = 1;
      }
    }
    v14 = *((_BYTE *)v8 + 145);
    if ( !v14 )
    {
LABEL_10:
      *((_BYTE *)v8 + 146) = 0;
LABEL_11:
      result = v14;
      goto LABEL_12;
    }
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_11;
      v15 = *((_DWORD *)v12 + 16);
      v16 = 0LL;
      v17 = *((_DWORD *)v12 + 12);
      v18 = v15 < v17;
      if ( v15 == v17 )
      {
        v15 = 0;
        *((_DWORD *)v12 + 16) = 0;
        v18 = v17 != 0;
      }
      if ( v18 )
        v16 = *((_QWORD *)v12 + 5) + 32LL * v15;
      if ( v16 )
        break;
LABEL_40:
      v12 = (CCompositionFrame *)**((_QWORD **)v8 + 17);
      if ( v12 == (CCompositionFrame *)((char *)v8 + 168) )
      {
        *((_BYTE *)v8 + 145) = 0;
        v12 = 0LL;
      }
      *((_QWORD *)v8 + 17) = v12;
      v14 = *((_BYTE *)v8 + 145);
      if ( !v14 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_11;
      v20 = *((_QWORD *)v8 + 11);
      v40 = *(_QWORD *)(v16 + 8);
      v19 = v40;
      v39 = v20;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v19 + 48, 0LL);
      v36 = -1073741823;
      if ( (*(_QWORD *)(v19 + 88) != v39 || !v39) && *(int *)(v19 + 64) > 0 )
      {
        if ( !*(_DWORD *)(v19 + 128) )
          goto LABEL_57;
        v21 = *(_QWORD *)(v19 + 120);
        v22 = v19 + 112;
        if ( v21 == v19 + 112 )
          goto LABEL_57;
        v23 = 0LL;
        v24 = v21;
        v25 = v22;
        do
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v24 - 24) + 24LL))(v24 - 24) )
            break;
          v23 = v24 - 24;
          v24 = *(_QWORD *)(v24 + 8);
        }
        while ( v24 != v25 );
        v8 = (CCompositionFrame *)this;
        v26 = v23 == 0;
        v5 = a4;
        v37 = v23;
        v19 = v40;
        if ( v26 )
        {
LABEL_57:
          memset((char *)a2 + 4, 0, 0xDCuLL);
          v36 = 0;
          *(_DWORD *)a2 = 2;
          *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)(v19 + 24);
LABEL_32:
          *(_QWORD *)(v19 + 88) = v39;
          goto LABEL_33;
        }
        v38 = 0LL;
        v36 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 232LL))(v37, &v38);
        if ( v36 >= 0 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 168LL))(v37);
          v28 = 3;
          if ( v27 )
            v28 = 2;
          *(_DWORD *)a2 = v28;
          *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)(v19 + 24);
          *((_QWORD *)a2 + 2) = *(_QWORD *)(v37 + 16);
          *((_DWORD *)a2 + 6) = *(_DWORD *)(v38 + 28);
          *((_DWORD *)a2 + 7) = *(_DWORD *)(v37 + 276);
          (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v37 + 280) + 56LL))(
            *(_QWORD *)(v37 + 280),
            (char *)a2 + 32);
          *(_OWORD *)((char *)a2 + 40) = *(_OWORD *)(v37 + 288);
          *((_QWORD *)a2 + 7) = *(_QWORD *)(v37 + 304);
          *((_DWORD *)a2 + 16) = *(_DWORD *)(v37 + 312);
          v29 = *(_OWORD *)(v37 + 48);
          *(_DWORD *)(v37 + 288) = 0;
          *(_BYTE *)(v37 + 43) = 0;
          *(_OWORD *)((char *)a2 + 72) = v29;
          *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(v37 + 64);
          *(_OWORD *)((char *)a2 + 104) = *(_OWORD *)(v37 + 80);
          *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(v37 + 96);
          *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(v37 + 112);
          *(_OWORD *)((char *)a2 + 152) = *(_OWORD *)(v37 + 128);
          *(_OWORD *)((char *)a2 + 168) = *(_OWORD *)(v37 + 144);
          *(_OWORD *)((char *)a2 + 184) = *(_OWORD *)(v37 + 160);
          *(_OWORD *)((char *)a2 + 200) = *(_OWORD *)(v37 + 176);
          *((_DWORD *)a2 + 54) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 192LL))(v37);
          *((_DWORD *)a2 + 55) = *(_DWORD *)(v38 + 80);
          goto LABEL_32;
        }
      }
LABEL_33:
      v30 = v19 + 48;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 56) )
      {
        *(_QWORD *)(v19 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v30, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v30, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v36 >= 0 )
      {
        a2 = (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 224);
        --a3;
        ++v4;
      }
      v16 = 0LL;
      v31 = *((_DWORD *)v12 + 16) + 1;
      *((_DWORD *)v12 + 16) = v31;
      if ( v31 < *((_DWORD *)v12 + 12) )
        v16 = *((_QWORD *)v12 + 5) + 32LL * v31;
      if ( !v16 )
        goto LABEL_40;
    }
  }
  while ( a3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 72LL))(v9) )
    {
      v32 = *(CompositionSurfaceObject **)(*((_QWORD *)v8 + 16) + 32LL);
      if ( CompositionSurfaceObject::GetSurfaceUpdate(v32, *((_QWORD *)v8 + 11), a2) >= 0 )
      {
        v33 = CFlipToken::FromToken(*((const struct CToken **)v8 + 16));
        if ( v33 )
        {
          Global = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(CompositionSurfaceObject *, _QWORD))(*((_QWORD *)Global + 38069) + 80LL))(
            v32,
            *((unsigned int *)v33 + 26));
        }
        a2 = (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 224);
        --a3;
        ++v4;
      }
    }
    v35 = *(CCompositionFrame **)(*((_QWORD *)v8 + 16) + 8LL);
    if ( v35 == (CCompositionFrame *)((char *)v8 + 152) )
    {
      *((_BYTE *)v8 + 144) = 0;
      v9 = 0LL;
    }
    else
    {
      v9 = (char *)v35 - 8;
    }
    *((_QWORD *)v8 + 16) = v9;
    result = *((unsigned __int8 *)v8 + 144);
    if ( !(_BYTE)result )
      goto LABEL_6;
  }
LABEL_12:
  *v5 = v4;
  return result;
}
