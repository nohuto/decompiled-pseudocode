__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  int v7; // ebx
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  _QWORD *v17; // rsi
  unsigned int v18; // ebp
  int v19; // eax
  unsigned __int64 v20; // rsi
  unsigned int v21; // ebp
  char *v23; // rdx
  void *QuotaZInit; // rax
  __int64 v25; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 Quota; // rax
  __int64 i; // rbp
  int v30; // ecx
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r9
  int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v39; // [rsp+28h] [rbp-30h]
  bool *v40; // [rsp+88h] [rbp+30h]

  v7 = 0;
  *a6 = 0;
  v11 = a3 - 21;
  if ( !v11 )
  {
    if ( a4 || !*((_DWORD *)this + 90) )
    {
      if ( Size > 0x1000 || (Size & 7) != 0 )
        goto LABEL_19;
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
      v27 = Size >> 3;
      if ( (unsigned int)(Size >> 3) )
      {
        Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                  v26,
                  260LL,
                  16LL * (unsigned int)v27,
                  0x72694344u);
        *((_QWORD *)this + 44) = Quota;
        if ( !Quota )
          goto LABEL_32;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v27; i = (unsigned int)(i + 1) )
        {
          v30 = a4[2 * i];
          v31 = (unsigned int)(v30 - 1);
          if ( !v30 )
            goto LABEL_19;
          if ( v31 >= *((_QWORD *)a2 + 10) )
            goto LABEL_19;
          _mm_lfence();
          v32 = *(_QWORD *)(*((_QWORD *)a2 + 11) * v31 + *((_QWORD *)a2 + 7));
          if ( !v32 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(_DWORD *)(v32 + 36), 105) )
            goto LABEL_19;
          v40 = (bool *)(16LL * (unsigned int)i);
          *(_QWORD *)&v40[*((_QWORD *)this + 44)] = v33;
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)&v40[*((_QWORD *)this + 44)]);
          ++*((_DWORD *)this + 90);
          v34 = a4[2 * i + 1];
          if ( v34 )
          {
            v35 = (unsigned int)(v34 - 1);
            if ( v35 >= *((_QWORD *)a2 + 10)
              || (_mm_lfence(), (v36 = *(_QWORD *)(*((_QWORD *)a2 + 11) * v35 + *((_QWORD *)a2 + 7))) == 0)
              || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(_DWORD *)(v36 + 36), 89) )
            {
              v7 = -1073741811;
              *(_QWORD *)&v40[*((_QWORD *)this + 44) + 8] = 0LL;
              break;
            }
            *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = v37;
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8));
          }
          else
          {
            *(_QWORD *)&v40[*((_QWORD *)this + 44) + 8] = 0LL;
          }
        }
        if ( v7 < 0 )
          goto LABEL_20;
      }
    }
    else
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    }
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    return (unsigned int)v7;
  }
  v12 = v11 - 20;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 21;
          if ( v16 )
          {
            if ( v16 == 1 && Size == 36 )
            {
              *(_OWORD *)((char *)this + 412) = *(_OWORD *)a4;
              *(_OWORD *)((char *)this + 428) = *((_OWORD *)a4 + 1);
              *((_DWORD *)this + 111) = a4[8];
              *a6 = 1;
              *((_DWORD *)this + 4) &= ~0x1000000u;
              return (unsigned int)v7;
            }
            goto LABEL_19;
          }
          if ( Size == 12 )
          {
            v17 = (_QWORD *)((char *)this + 368);
            v18 = *((_DWORD *)this + 98);
            v19 = a4[2];
            Src = *(_QWORD *)a4;
            v39 = v19;
            v7 = DirectComposition::CDCompDynamicArrayBase::Grow(
                   (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
                   1LL,
                   0x72694344u);
            if ( v7 < 0 )
              goto LABEL_20;
            memmove((void *)(*v17 + v17[4] * v18), &Src, v17[4]);
LABEL_13:
            *a6 = 1;
            return (unsigned int)v7;
          }
LABEL_19:
          v7 = -1073741811;
          goto LABEL_20;
        }
        v20 = Size;
        if ( Size > 0x1000 || (Size & 3) != 0 )
          goto LABEL_19;
        v21 = 2;
      }
      else
      {
        v20 = Size;
        if ( Size > 0x1000 )
          goto LABEL_19;
        v21 = 3;
        if ( (Size & 3) != 0 )
          goto LABEL_19;
      }
    }
    else
    {
      v20 = Size;
      if ( Size > 0x1000 || (Size & 3) != 0 )
        goto LABEL_19;
      v21 = 1;
    }
  }
  else
  {
    v20 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_19;
    v21 = 0;
  }
  v23 = (char *)*((_QWORD *)this + v21 + 33);
  if ( v23 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v23);
    *((_QWORD *)this + v21 + 33) = 0LL;
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         this,
                         (unsigned __int64)v23,
                         v20,
                         0x72694344u);
  *((_QWORD *)this + v21 + 33) = QuotaZInit;
  if ( QuotaZInit )
  {
    memmove(QuotaZInit, a4, v20);
    *((_QWORD *)this + v21 + 37) = v20;
    *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                              v25,
                                              v21);
    goto LABEL_13;
  }
LABEL_32:
  v7 = -1073741801;
LABEL_20:
  if ( *((_QWORD *)this + 44) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  return (unsigned int)v7;
}
