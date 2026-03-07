__int64 __fastcall CTableTransferEffect::ProcessUpdateTable(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int *v8; // rbx
  char *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v5 = 0;
  if ( a4 )
  {
    v8 = (unsigned int *)((char *)a3 + 12);
    if ( !*((_DWORD *)a3 + 2) )
    {
      v9 = (char *)this + 32 * *v8 + 8 * *v8 + 184;
      *((_DWORD *)v9 + 6) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)v9, 4u);
    }
    v10 = DynArray<float,0>::AddMultipleAndSet((__int64)this + 32 * *v8 + 8 * *v8 + 184, a4, a5 >> 2);
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2Au, 0LL);
  }
  return v5;
}
