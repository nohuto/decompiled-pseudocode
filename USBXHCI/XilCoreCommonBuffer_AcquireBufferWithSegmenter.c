unsigned int *__fastcall XilCoreCommonBuffer_AcquireBufferWithSegmenter(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        bool *a5)
{
  _QWORD *v5; // rax
  unsigned int *v7; // rbx
  unsigned int *v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int *result; // rax

  v5 = a2 + 8;
  v7 = (unsigned int *)*((_QWORD *)a2 + 4);
  v9 = a2;
  if ( v7 == a2 + 8 )
  {
    v7 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)a2,
        8,
        16,
        (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids);
    }
  }
  else
  {
    if ( *((_QWORD **)v7 + 1) != v5 || (v11 = *(_QWORD *)v7, *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v11;
    *(_QWORD *)(v11 + 8) = v5;
    memset(*((void **)v7 + 2), 0, *a2);
    --v9[7];
    *((_QWORD *)v7 + 9) = a3;
    v7[16] = a4;
    v7[20] = 1;
    v7[11] = *v9;
    v12 = *((_QWORD *)v7 + 4);
    if ( *(_BYTE *)(v12 + 16) )
    {
      *(_BYTE *)(v12 + 16) = 0;
      ++*(_DWORD *)(a1 + 204);
    }
  }
  result = v7;
  *a5 = v9[7] < v9[3];
  return result;
}
