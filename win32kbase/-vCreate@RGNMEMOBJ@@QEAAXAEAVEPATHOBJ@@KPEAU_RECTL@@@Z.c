void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, char a3, struct _RECTL *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  __m128i *v9; // rcx
  _DWORD *v10; // r9
  char *v11; // rdi
  int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  LONG v16; // ecx
  LONG bottom; // edx
  LONG top; // eax
  __int64 v19; // rsi
  __int64 v20; // rsi
  struct REGION *Region; // rax
  unsigned int v22; // esi
  _QWORD *v23; // rax
  int v24; // r14d
  struct _KTHREAD *CurrentThread; // r12
  __int64 v26; // rax
  int v27; // edx
  int v28; // eax
  unsigned __int64 v29; // rcx
  _DWORD *v30; // r9
  __int128 v32; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+38h] [rbp-C8h]
  __int128 v34; // [rsp+48h] [rbp-B8h]
  _OWORD v35[3]; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+90h] [rbp-70h] BYREF

  if ( *((_QWORD *)a2 + 1) )
  {
    *(_QWORD *)this = 0LL;
    v7 = *(_DWORD *)a2;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    memset(v35, 0, sizeof(v35));
    if ( (v7 & 1) == 0 || (unsigned int)EPATHOBJ::bFlatten(a2) )
    {
      EPATHOBJ::vCloseAllFigures(a2);
      v8 = *((_DWORD *)a2 + 1);
      if ( v8 >= 2 )
      {
        if ( !a4
          || (v9 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v9[3].m128i_i64[0]))
          && a4->bottom > _mm_srli_si128(v9[48LL], 8).m128i_i32[1] )
        {
          if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
          {
            RGNOBJ::vTighten(this);
            v10 = *(_DWORD **)this;
            if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0xF8000000) != 0
              && (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0xF8000000) != -134217728
              || (v10[17] & 0xF8000000) != 0 && (v10[17] & 0xF8000000) != -134217728
              || (v10[16] & 0xF8000000) != 0 && (v10[16] & 0xF8000000) != -134217728
              || (v10[15] & 0xF8000000) != 0 && (v10[15] & 0xF8000000) != -134217728 )
            {
              REGION::vDeleteREGION(*(_QWORD *)this);
              *(_QWORD *)this = 0LL;
            }
            return;
          }
        }
        if ( v8 >= 0x14 )
        {
          v13 = v8 + 1;
          if ( (unsigned int)v13 < v8 )
            return;
          v14 = 48 * v13;
          if ( (unsigned __int64)(48 * v13) > 0xFFFFFFFF )
            return;
          if ( !v14 )
            return;
          v11 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                          gpLeakTrackingAllocator,
                          260LL,
                          v14,
                          0x67646547u);
          if ( !v11 )
            return;
          v12 = 1;
        }
        else
        {
          v11 = &v36;
          v12 = 0;
        }
        v15 = *((_QWORD *)a2 + 1);
        v16 = *(_DWORD *)(v15 + 52);
        bottom = *(_DWORD *)(v15 + 60);
        if ( bottom >= v16 )
        {
          if ( a4 )
          {
            top = a4->top;
            if ( v16 > top )
              top = v16;
            v16 = top;
            if ( bottom >= a4->bottom )
              bottom = a4->bottom;
          }
          v19 = bottom - (__int64)v16;
          if ( v19 <= 0 )
            v19 = 0LL;
          v20 = 32 * (v19 >> 4) + 432;
          if ( v20 <= 0x7FFFFFFF )
          {
            Region = RGNMEMOBJ::AllocateRegion((unsigned int)v20);
            *(_QWORD *)this = Region;
            if ( Region )
            {
              *((_DWORD *)Region + 6) = v20;
              v22 = 0x80000000;
              *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 52LL) = 0;
              *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 32LL);
              v23 = (_QWORD *)(*(_QWORD *)this + 88LL);
              v23[1] = v23;
              *v23 = v23;
              v24 = bConstructGET(a2, v35, v11, a4);
              if ( v24 )
              {
                CurrentThread = KeGetCurrentThread();
                LODWORD(v33) = 0;
                *(_QWORD *)&v32 = &v32;
                HIDWORD(v32) = 0x7FFFFFFF;
                while ( 1 )
                {
                  if ( PsIsThreadTerminating(CurrentThread) )
                    goto LABEL_45;
                  if ( (__int128 *)v32 != &v32 )
                  {
                    vAdvanceAETEdges(&v32);
                    if ( (__int128 *)v32 != &v32 )
                      break;
                  }
                  v26 = *(_QWORD *)&v35[0];
                  if ( *(_OWORD **)&v35[0] == v35 )
                  {
                    if ( !v24 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v22, 0x7FFFFFFF) )
                      goto LABEL_45;
                    RGNOBJ::vTighten(this);
                    v30 = *(_DWORD **)this;
                    if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0xF8000000) != 0
                      && (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0xF8000000) != -134217728
                      || (v30[17] & 0xF8000000) != 0 && (v30[17] & 0xF8000000) != -134217728
                      || (v30[16] & 0xF8000000) != 0 && (v30[16] & 0xF8000000) != -134217728
                      || (v30[15] & 0xF8000000) != 0 && (v30[15] & 0xF8000000) != -134217728 )
                    {
                      v29 = *(_QWORD *)this;
                      goto LABEL_46;
                    }
                    goto LABEL_47;
                  }
                  v27 = v22;
                  v22 = *(_DWORD *)(*(_QWORD *)&v35[0] + 16LL);
                  if ( v22 != v27 )
                  {
                    if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v27, v22) )
                      goto LABEL_45;
                    goto LABEL_41;
                  }
LABEL_42:
                  if ( *(_DWORD *)(v26 + 16) == v22 )
                    vMoveNewEdges(v35, &v32, v22);
                  v28 = RGNMEMOBJ::bAddScans(this, v22++, (struct EDGE *)&v32, a3);
                  v24 = v28;
                  if ( !v28 )
                    goto LABEL_45;
                }
                if ( *(__int128 **)v32 != &v32 )
                  vXSortAETEdges(&v32);
LABEL_41:
                v26 = *(_QWORD *)&v35[0];
                goto LABEL_42;
              }
LABEL_45:
              v29 = *(_QWORD *)this;
LABEL_46:
              REGION::vDeleteREGION(v29);
              *(_QWORD *)this = 0LL;
            }
          }
        }
LABEL_47:
        if ( v12 && v11 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
      }
    }
  }
}
