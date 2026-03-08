/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01BB474
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01BB1EC (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01BB2A4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C01BEEB4 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C03B7D00 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this)
{
  char v2; // di
  unsigned __int16 v3; // si
  unsigned int v4; // ebp
  char v5; // dl
  void *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // bp
  unsigned int v10; // edi
  unsigned int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int i; // edi
  __int64 v15; // r14
  unsigned int v16; // esi
  __int64 v17; // r15
  unsigned int v18; // ebp
  unsigned __int16 v19; // r13
  unsigned __int16 v20; // r12
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    operator delete(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    return;
  }
  v2 = 0;
  v3 = 1;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
    if ( v5 == 42 || v5 == 43 )
    {
      ++v3;
      if ( v2 )
      {
        if ( v2 != 43 )
          goto LABEL_28;
      }
      else
      {
        v2 = 43;
      }
    }
    else if ( v5 == 94 || v5 == 126 )
    {
      ++v3;
      if ( !v2 )
      {
        v2 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      if ( v2 != v5 )
LABEL_28:
        WdLogSingleEntry0(1LL);
    }
LABEL_7:
    ++v4;
  }
  while ( v4 < *((unsigned __int16 *)this + 4) );
  if ( v3 <= *((_WORD *)this + 16) )
    goto LABEL_12;
  v6 = (void *)*((_QWORD *)this + 3);
  *((_WORD *)this + 16) = 0;
  operator delete(v6);
  v7 = 8LL * v3;
  if ( !is_mul_ok(v3, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x63644356u, 256LL);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
LABEL_12:
    v9 = 0;
    v10 = 0;
    **((_QWORD **)this + 3) = 0LL;
    LOWORD(v11) = *((_WORD *)this + 4);
    *((_WORD *)this + 16) = 1;
    if ( (_WORD)v11 )
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 2);
        if ( *(_BYTE *)(v10 + v12) == 42 )
          goto LABEL_24;
        if ( *(_BYTE *)(v10 + v12) == 43 || *(_BYTE *)(v10 + v12) == 94 || *(_BYTE *)(v10 + v12) == 126 )
          break;
LABEL_17:
        v11 = *((unsigned __int16 *)this + 4);
        if ( ++v10 >= v11 )
          goto LABEL_18;
      }
      ++v9;
LABEL_24:
      if ( v10 + 1 == (unsigned __int16)v11 )
      {
        *((_WORD *)this + 4) = v11 - 1;
      }
      else
      {
        if ( *((_WORD *)this + 16) >= v3 )
          WdLogSingleEntry0(1LL);
        if ( *((_WORD *)this + 16) < v3 )
        {
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16)) = v10 + 1;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v9;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
        }
      }
      goto LABEL_17;
    }
LABEL_18:
    v13 = *((unsigned __int16 *)this + 16) - 1;
    if ( *((_WORD *)this + 16) != 1 )
    {
      v15 = 0LL;
      v16 = 1;
      v17 = v13;
      v25 = v13;
      do
      {
        v18 = v16;
        if ( v16 <= v13 )
        {
          do
          {
            v26 = *((_QWORD *)this + 3);
            v19 = *(_WORD *)(v15 + v26 + 6);
            v20 = *(_WORD *)(v26 + 8LL * v18 + 6);
            v21 = CCD_SET_STRING_ID::_CompareDescriptors(this, v19, v20);
            if ( v21 > 0 || !v21 && v19 > v20 )
            {
              *(_WORD *)(v15 + v26 + 6) = v20;
              *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v18 + 6) = v19;
            }
            ++v18;
          }
          while ( v18 <= v13 );
          v17 = v25;
        }
        ++v16;
        v15 += 8LL;
        v25 = --v17;
      }
      while ( v17 );
    }
    for ( i = 1; i < *((unsigned __int16 *)this + 16); ++i )
    {
      v22 = *((_QWORD *)this + 3);
      v23 = *(unsigned __int16 *)(v22 + 8LL * (i - 1) + 6);
      v24 = *(unsigned __int16 *)(v22 + 8LL * i + 6);
      if ( !(unsigned int)CCD_SET_STRING_ID::_CompareDescriptors(
                            this,
                            *(unsigned __int16 *)(v22 + 8LL * i + 6),
                            *(unsigned __int16 *)(v22 + 8LL * (i - 1) + 6)) )
        *(_WORD *)(v22 + 8 * v24 + 4) = *(_WORD *)(v22 + 8 * v23 + 4) + 1;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, v3);
    *(_DWORD *)this = -1073741801;
  }
}
