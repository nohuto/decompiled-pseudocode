void __fastcall CPTPProcessor::CopyPointersIntoFrame(
        CPTPProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct PTPEnginePointerNode *a4,
        bool a5)
{
  __int64 v5; // rcx
  unsigned int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // rcx
  const struct RIMDEV *v10; // rbp
  const struct tagPOINTEREVENTINT *v11; // rsi

  v5 = *((_QWORD *)a2 + 30);
  v7 = 0;
  v8 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v9 = v5 + 168;
    do
    {
      *(_WORD *)(v9 - 8) = *((_WORD *)a4 + 2);
      *(_OWORD *)v9 = *(_OWORD *)a4;
      *(_OWORD *)(v9 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v9 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v9 + 48) = *((_OWORD *)a4 + 3);
      *(_OWORD *)(v9 + 64) = *((_OWORD *)a4 + 4);
      *(_OWORD *)(v9 + 80) = *((_OWORD *)a4 + 5);
      *(_DWORD *)(v9 + 4) = 0;
      if ( a5 )
        *((_QWORD *)a2 + 27) = ++*(_QWORD *)(v9 + 80);
      *(_DWORD *)(v9 - 164) |= 0x1000u;
      a4 = (const struct PTPEnginePointerNode *)((char *)a4 + 96);
      v9 += 480LL;
      ++v8;
    }
    while ( v8 < *((_DWORD *)a2 + 12) );
  }
  if ( a5 )
  {
    v10 = *(const struct RIMDEV **)(*((_QWORD *)a2 + 32) + 16LL);
    InputTraceLogging::Pointer::CommitFrame(v10, a2);
    if ( *((_DWORD *)a2 + 12) )
    {
      v11 = (const struct tagPOINTEREVENTINT *)(*((_QWORD *)a2 + 30) + 160LL);
      do
      {
        InputTraceLogging::Pointer::CommitFramePointer(v10, a2, v11);
        ++v7;
        v11 = (const struct tagPOINTEREVENTINT *)((char *)v11 + 480);
      }
      while ( v7 < *((_DWORD *)a2 + 12) );
    }
  }
}
