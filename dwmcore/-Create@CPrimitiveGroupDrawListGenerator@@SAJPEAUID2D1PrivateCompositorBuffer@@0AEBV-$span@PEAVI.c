__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        struct ID2D1PrivateCompositorBuffer *a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        CPrimitiveGroupDrawListGenerator **a6)
{
  CPrimitiveGroupDrawListGenerator *v10; // rbx
  CCommandBuffer *v11; // rax
  CCommandBuffer *v12; // rdi
  CPrimitiveBuffer *v13; // rax
  unsigned int v14; // ecx
  CPrimitiveBuffer *v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  CPrimitiveGroupDrawListGenerator *v19; // rax
  unsigned int v20; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // [rsp+20h] [rbp-48h]

  v10 = 0LL;
  v11 = (CCommandBuffer *)DefaultHeap::Alloc(0x10uLL);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 2) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (CPrimitiveBuffer *)DefaultHeap::Alloc(0x10uLL);
  v15 = v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x99u, 0LL);
    v18 = -2147024882;
    if ( !v15 )
      return v18;
    goto LABEL_14;
  }
  if ( v15 )
  {
    v16 = CCommandBuffer::Initialize(v12, a1);
    v18 = v16;
    if ( v16 < 0 )
    {
      v24 = 156;
    }
    else
    {
      v16 = CPrimitiveBuffer::Initialize(v15, a2);
      v18 = v16;
      if ( v16 < 0 )
      {
        v24 = 158;
      }
      else
      {
        v19 = (CPrimitiveGroupDrawListGenerator *)DefaultHeap::Alloc(0x68uLL);
        v10 = v19;
        if ( !v19 )
        {
          v18 = -2147024882;
          v10 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0xA5u, 0LL);
          goto LABEL_14;
        }
        *((_DWORD *)v19 + 2) = 0;
        *(_QWORD *)v19 = &CPrimitiveGroupDrawListGenerator::`vftable';
        *((_QWORD *)v19 + 2) = v12;
        *((_QWORD *)v19 + 3) = v15;
        *((_OWORD *)v19 + 2) = *a3;
        *((_OWORD *)v19 + 3) = *a4;
        *((_OWORD *)v19 + 4) = *a5;
        *((_QWORD *)v19 + 10) = 0LL;
        *((_QWORD *)v19 + 11) = 0LL;
        *((_QWORD *)v19 + 12) = 0LL;
        ++dword_1803E2ACC;
        (**(void (__fastcall ***)(void *))v19)(v19);
        v16 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v10);
        v18 = v16;
        if ( v16 >= 0 )
        {
          *a6 = v10;
          return v18;
        }
        v24 = 166;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v24, 0LL);
LABEL_14:
    CPrimitiveBuffer::`scalar deleting destructor'(v15, v22);
    if ( !v12 )
      goto LABEL_15;
    goto LABEL_20;
  }
  v18 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x9Au, 0LL);
LABEL_20:
  CPrimitiveBuffer::`scalar deleting destructor'(v12, v23);
LABEL_15:
  if ( v10 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v10 + 8LL))(v10);
  return v18;
}
