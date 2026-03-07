__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v6; // r13
  struct CSuperWetSource *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rbp
  unsigned int v17; // eax
  int v18; // r14d
  int v19; // ecx
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  struct tagRECT *v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-78h]
  unsigned int v28; // [rsp+40h] [rbp-58h]
  struct tagRECT v29; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v6 = 0LL;
  v7 = this;
  if ( *((_DWORD *)a3 + 3) )
  {
    v8 = a5 / *((_DWORD *)a3 + 3);
    if ( !v8 )
    {
      v27 = 519;
LABEL_7:
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, v27, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, 0x30u, 0LL);
      return v9;
    }
    this = (CGenericInk *)*((unsigned int *)this + 68);
    if ( (_DWORD)this )
    {
      if ( v8 != (_DWORD)this )
      {
        v27 = 527;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)v7 + 68) = v8;
    }
  }
  v11 = *((_DWORD *)v7 + 68);
  if ( v11 )
    v12 = *((_DWORD *)v7 + 66) / v11;
  else
    v12 = 0;
  *((_DWORD *)v7 + 66) = *((_DWORD *)a3 + 2) * v11;
  v13 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v7 + 240, a4, a5);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x38u, 0LL);
  }
  else
  {
    v15 = *((_DWORD *)a3 + 4);
    *((_DWORD *)v7 + 69) = v15;
    *((_DWORD *)v7 + 70) = *((_DWORD *)a3 + 5);
    v16 = (__int64)(*((_QWORD *)v7 + 22) - *((_QWORD *)v7 + 21)) >> 3;
    if ( (_DWORD)v16 )
    {
      v17 = *((_DWORD *)a3 + 3);
      v18 = *((_DWORD *)a3 + 2);
      v19 = v18 + v17;
      if ( v15 > v17 )
        v18 += v17 - v15;
      v20 = v12 - v18;
      v21 = 0;
      v28 = v19 - v18;
      v29 = 0LL;
      do
      {
        v22 = &v29;
        if ( v21 )
          v22 = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 21) + v6) + 80LL);
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, struct tagRECT *))(*(_QWORD *)v23 + 48LL))(
                v23,
                v20,
                *((_QWORD *)v7 + 30) + (unsigned int)(v18 * *((_DWORD *)v7 + 68)),
                v28,
                *((_DWORD *)v7 + 69),
                *((_DWORD *)v7 + 68),
                v22);
        if ( v24 < 0 )
        {
          MilWerRegisterMemoryBlock(
            *(const void **)(*((_QWORD *)v7 + 2) + 632LL),
            *(_DWORD *)(*((_QWORD *)v7 + 2) + 640LL));
          ModuleFailFastForHRESULT((unsigned int)v24, retaddr);
        }
        ++v21;
        v6 += 8LL;
      }
      while ( v21 < (unsigned int)v16 );
      v25 = CRegion::TryAddRectangle((struct CSuperWetSource *)((char *)v7 + 288), &v29);
      if ( v25 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v25, retaddr);
    }
    (*(void (__fastcall **)(struct CSuperWetSource *, __int64))(*(_QWORD *)v7 + 72LL))(v7, 3LL);
    (*(void (__fastcall **)(struct CSuperWetSource *, __int64, struct CSuperWetSource *))(*(_QWORD *)v7 + 72LL))(
      v7,
      1LL,
      v7);
    CSuperWetInkManager::OnUpdatedInkReceived(*(CSuperWetInkManager **)(*((_QWORD *)v7 + 2) + 256LL), v7);
  }
  return v9;
}
