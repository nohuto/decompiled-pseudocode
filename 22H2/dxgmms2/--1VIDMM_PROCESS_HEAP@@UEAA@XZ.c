/*
 * XREFs of ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C00CA214
 * Callers:
 *     ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0029810 (--_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0023328 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this, __int64 a2)
{
  DXGFASTMUTEX *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v3 )
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((VIDMM_PROCESS_HEAP **)this + 26) != (VIDMM_PROCESS_HEAP *)((char *)this + 208) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4[3] = 270LL;
    v4[4] = 2LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 24) != (VIDMM_PROCESS_HEAP *)((char *)this + 192) )
  {
    v5 = WdLogNewEntry5_WdCriticalError(v3, a2);
    *(_QWORD *)(v5 + 24) = 270LL;
    *(_QWORD *)(v5 + 32) = 2LL;
    *(_QWORD *)(v5 + 40) = 1LL;
    *(_OWORD *)(v5 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 28) != (VIDMM_PROCESS_HEAP *)((char *)this + 224) )
  {
    v6 = WdLogNewEntry5_WdCriticalError(v3, a2);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(_QWORD *)(v6 + 24) = 270LL;
    *(__m128i *)(v6 + 32) = si128;
    *(_OWORD *)(v6 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 30) != (VIDMM_PROCESS_HEAP *)((char *)this + 240) )
  {
    v8 = WdLogNewEntry5_WdCriticalError(v3, a2);
    v9 = 2LL;
    v10 = 2LL;
    *(_QWORD *)(v8 + 24) = 270LL;
    v11 = (_QWORD *)(v8 + 32);
    do
    {
      *v11++ = v9++;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)(v8 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 32) != (VIDMM_PROCESS_HEAP *)((char *)this + 256) )
  {
    v12 = WdLogNewEntry5_WdCriticalError(v3, a2);
    *(_QWORD *)(v12 + 24) = 270LL;
    *(_QWORD *)(v12 + 32) = 2LL;
    *(_QWORD *)(v12 + 40) = 4LL;
    *(_OWORD *)(v12 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 34) != (VIDMM_PROCESS_HEAP *)((char *)this + 272) )
  {
    v13 = WdLogNewEntry5_WdCriticalError(v3, a2);
    *(_QWORD *)(v13 + 24) = 270LL;
    *(_QWORD *)(v13 + 32) = 2LL;
    *(_QWORD *)(v13 + 40) = 5LL;
    *(_OWORD *)(v13 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
