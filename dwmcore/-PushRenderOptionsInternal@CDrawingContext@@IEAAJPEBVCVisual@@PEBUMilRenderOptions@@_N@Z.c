__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        __int64 this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rdi
  int v9; // ebp
  unsigned int v10; // eax
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // xmm1_8
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v19; // ecx
  unsigned int v20; // r15d
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rdi
  unsigned int v25; // r15d
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  void *v29; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v31; // rax
  __int64 v32; // r8
  void *v33; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+48h] [rbp-40h]
  int v36; // [rsp+50h] [rbp-38h]

  v6 = this;
  if ( !a4 )
    goto LABEL_9;
  v7 = *(unsigned int *)(this + 372);
  v8 = 0LL;
  v9 = 0;
  LODWORD(v34) = 9;
  *((_QWORD *)&v34 + 1) = a2;
  v33 = 0LL;
  if ( *(_DWORD *)(this + 368) == (_DWORD)v7 )
  {
    v25 = 2 * v7;
    if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2147024362, 0x64u, 0LL);
      goto LABEL_6;
    }
    if ( v25 <= 0x40 )
      v25 = 64;
    v26 = HrMalloc(0x10uLL, v25, &v33);
    v9 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x6Bu, 0LL);
      v8 = v33;
      goto LABEL_6;
    }
    v28 = 16LL * *(unsigned int *)(v6 + 368);
    if ( v28 > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024362, 0x6Du, 0LL);
      v8 = v33;
      goto LABEL_6;
    }
    v29 = v33;
    v9 = 0;
    memcpy_0(v33, *(const void **)(v6 + 384), (unsigned int)v28);
    operator delete(*(void **)(v6 + 384));
    *(_QWORD *)(v6 + 384) = v29;
    v8 = 0LL;
    *(_DWORD *)(v6 + 372) = v25;
  }
  *(_OWORD *)(*(_QWORD *)(v6 + 384) + 16LL * *(unsigned int *)(v6 + 368)) = v34;
  v10 = *(_DWORD *)(v6 + 392);
  this = (unsigned int)++*(_DWORD *)(v6 + 368);
  if ( v10 <= (unsigned int)this )
    v10 = *(_DWORD *)(v6 + 368);
  *(_DWORD *)(v6 + 392) = v10;
LABEL_6:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v9, 0x11ECu, 0LL);
    return (unsigned int)v9;
  }
LABEL_9:
  v11 = 0LL;
  LOBYTE(v36) = *(_BYTE *)(v6 + 352);
  v9 = 0;
  *(_QWORD *)&v34 = *(_QWORD *)(v6 + 332);
  DWORD2(v34) = *(_DWORD *)(v6 + 360);
  HIDWORD(v34) = *(_DWORD *)(v6 + 340);
  v35 = *(_QWORD *)(v6 + 344);
  v12 = *(unsigned int *)(v6 + 868);
  v33 = 0LL;
  if ( *(_DWORD *)(v6 + 864) != (_DWORD)v12 )
  {
LABEL_10:
    v13 = v35;
    v14 = v36;
    v15 = *(_QWORD *)(v6 + 880) + 28LL * *(unsigned int *)(v6 + 864);
    *(_OWORD *)v15 = v34;
    *(_QWORD *)(v15 + 16) = v13;
    *(_DWORD *)(v15 + 24) = v14;
    v16 = *(_DWORD *)(v6 + 888);
    v17 = (unsigned int)++*(_DWORD *)(v6 + 864);
    if ( v16 <= (unsigned int)v17 )
      v16 = *(_DWORD *)(v6 + 864);
    *(_DWORD *)(v6 + 888) = v16;
    goto LABEL_13;
  }
  v20 = 2 * v12;
  if ( (unsigned __int64)(2 * v12) > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2147024362, 0x64u, 0LL);
  }
  else
  {
    if ( v20 <= 0x40 )
      v20 = 64;
    v21 = HrMalloc(0x1CuLL, v20, &v33);
    v9 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x6Bu, 0LL);
      v11 = v33;
    }
    else
    {
      v23 = 28LL * *(unsigned int *)(v6 + 864);
      if ( v23 <= 0xFFFFFFFF )
      {
        v24 = v33;
        v9 = 0;
        memcpy_0(v33, *(const void **)(v6 + 880), (unsigned int)v23);
        operator delete(*(void **)(v6 + 880));
        *(_QWORD *)(v6 + 880) = v24;
        v11 = 0LL;
        *(_DWORD *)(v6 + 868) = v20;
        goto LABEL_10;
      }
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024362, 0x6Du, 0LL);
      v11 = v33;
    }
  }
LABEL_13:
  if ( v11 )
  {
    v31 = GetProcessHeap();
    HeapFree(v31, 0, v11);
  }
  if ( v9 < 0 && (MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v9, 0x11FCu, 0LL), a4) )
  {
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v6 + 368, 0LL, v32);
  }
  else
  {
    if ( (*(_BYTE *)a3 & 1) != 0 )
      *(_BYTE *)(v6 + 352) = *((_DWORD *)a3 + 4) != 1;
    if ( (*(_BYTE *)a3 & 2) != 0 )
    {
      v19 = *((_DWORD *)a3 + 1);
      if ( (v19 & 0xFF000000) == 0xFF000000 )
      {
        *(_DWORD *)(v6 + 332) = v19 & 0xFFFFFF;
      }
      else if ( !*(_BYTE *)(v6 + 8050) )
      {
        *(_DWORD *)(v6 + 332) = v19;
      }
    }
    if ( (*(_BYTE *)a3 & 8) != 0 )
      *(_DWORD *)(v6 + 336) = *((_DWORD *)a3 + 2);
    if ( (*(_BYTE *)a3 & 0x10) != 0 )
      *(_DWORD *)(v6 + 340) = *((_DWORD *)a3 + 5);
    if ( (*(_BYTE *)a3 & 0x20) != 0 )
      *(_DWORD *)(v6 + 344) = *((_DWORD *)a3 + 6);
    if ( (*(_BYTE *)a3 & 0x40) != 0 )
      *(_DWORD *)(v6 + 348) = *((_DWORD *)a3 + 7);
    if ( (*(_BYTE *)a3 & 4) != 0 )
      *(_DWORD *)(v6 + 360) = *((_DWORD *)a3 + 3);
  }
  return (unsigned int)v9;
}
