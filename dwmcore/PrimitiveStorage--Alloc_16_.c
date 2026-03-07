PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  int v2; // eax
  _DWORD *Value; // rdi
  int v4; // ecx
  char *v5; // r9
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void **v12; // rax
  PrimitiveStorage::CInlineStorageBase *result; // rax
  char *v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  HANDLE ProcessHeap; // rax
  struct CObjectCache *ObjectCache; // rax
  unsigned int v21; // r8d
  PrimitiveStorage::CInlineStorageBase *v22; // rdi
  int v23; // edx
  CThreadContext *v24; // rax
  unsigned int v25; // ecx
  CThreadContext *v26; // rax
  __int128 v27; // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+30h] [rbp-50h]
  __int128 v29; // [rsp+40h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+8h]

  if ( *(_DWORD *)a1 )
  {
    v2 = *((_DWORD *)a1 + 2);
    if ( v2 != 2 || *((_DWORD *)a1 + 4) )
      goto LABEL_15;
    if ( *(_DWORD *)a1 <= 4u && *((_DWORD *)a1 + 3) <= 6u )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v24 = (CThreadContext *)operator new(0x190uLL);
        if ( !v24 || (v26 = CThreadContext::CThreadContext(v24), (Value = v26) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v26);
      }
      v4 = Value[53];
      v5 = 0LL;
      if ( v4 )
      {
        v5 = (char *)*((_QWORD *)Value + 27);
        *((_QWORD *)Value + 27) = *(_QWORD *)v5;
        Value[53] = v4 - 1;
      }
      if ( !v5 )
      {
        v5 = (char *)DefaultHeap::Alloc(0x1B0uLL);
        if ( !v5 )
          return 0LL;
      }
      v6 = *(unsigned int *)a1;
      v7 = *((_DWORD *)a1 + 2) + 2;
      *(_QWORD *)&v27 = &v5[(((((_BYTE)v5 + 112) & 0xF) + 15) & 0x10)
                          - (unsigned __int64)(((_BYTE)v5 + 112) & 0xF)
                          + 112];
      *((_QWORD *)&v27 + 1) = (unsigned int)(8 * v7 * *(_DWORD *)a1) + (_QWORD)v27;
      v8 = (unsigned int)(8 * *((_DWORD *)a1 + 1) * v7) + *((_QWORD *)&v27 + 1);
      v9 = *((unsigned int *)a1 + 3);
      *(_OWORD *)(v5 + 8) = *(_OWORD *)a1;
      *(_QWORD *)&v29 = v8;
      v10 = v8 + 8 * v6;
      v11 = v10 + 2 * v9;
      *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 4);
      v12 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
      goto LABEL_11;
    }
    if ( *(_DWORD *)a1 > 8u || *((_DWORD *)a1 + 3) > 0x1Eu )
    {
LABEL_15:
      v14 = (char *)DefaultHeap::Alloc(
                      (unsigned int)(2
                                   * (*((_DWORD *)a1 + 3)
                                    + 4
                                    * (*((_DWORD *)a1 + 1) * (v2 + 2)
                                     + *(_DWORD *)a1 * (v2 + 3)
                                     + 6 * *((_DWORD *)a1 + 4)))
                                   + 15)
                    + 112LL);
      v5 = v14;
      if ( !v14 )
        return 0LL;
      v15 = *(unsigned int *)a1;
      v16 = *((_DWORD *)a1 + 2) + 2;
      *(_QWORD *)&v27 = &v14[(((((_BYTE)v14 + 112) & 0xF) + 15) & 0x10)
                           - (unsigned __int64)(((_BYTE)v14 + 112) & 0xF)
                           + 112];
      *((_QWORD *)&v27 + 1) = (unsigned int)(8 * v16 * *(_DWORD *)a1) + (_QWORD)v27;
      v17 = (unsigned int)(8 * *((_DWORD *)a1 + 1) * v16) + *((_QWORD *)&v27 + 1);
      v18 = *((unsigned int *)a1 + 3);
      *(_OWORD *)(v5 + 8) = *(_OWORD *)a1;
      *(_QWORD *)&v29 = v17;
      v10 = v17 + 8 * v15;
      v11 = v10 + 2 * v18;
      *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 4);
      v12 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
LABEL_11:
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      *((_QWORD *)&v29 + 1) = v10;
      *((_OWORD *)v5 + 2) = v27;
      *((_OWORD *)v5 + 3) = v29;
      *((_QWORD *)v5 + 8) = v11;
      *(_QWORD *)v5 = v12;
      return (PrimitiveStorage::CInlineStorageBase *)v5;
    }
    ObjectCache = CThreadContext::GetObjectCache(a1);
    v22 = 0LL;
    v23 = *((_DWORD *)ObjectCache + 1);
    if ( v23 )
    {
      v22 = (PrimitiveStorage::CInlineStorageBase *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v22;
      *((_DWORD *)ObjectCache + 1) = v23 - 1;
    }
    if ( v22 || (v22 = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x300uLL)) != 0LL )
    {
      PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v22, a1, v21);
      *(_QWORD *)v22 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
    }
    return v22;
  }
  else
  {
    ProcessHeap = GetProcessHeap();
    result = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(ProcessHeap, 0, 0x70uLL);
    if ( result )
    {
      *(_QWORD *)&v28 = 0LL;
      *((_QWORD *)&v28 + 1) = *((unsigned int *)a1 + 2);
      *(_QWORD *)result = &CDrawListPrimitive0::`vftable';
      *((_OWORD *)result + 2) = 0LL;
      *(_OWORD *)((char *)result + 8) = v28;
      *((_DWORD *)result + 6) = 0;
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      *((_OWORD *)result + 3) = 0LL;
      *((_QWORD *)result + 8) = 0LL;
    }
  }
  return result;
}
