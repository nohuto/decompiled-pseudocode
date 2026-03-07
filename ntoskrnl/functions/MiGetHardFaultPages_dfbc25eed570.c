unsigned __int64 __fastcall MiGetHardFaultPages(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        volatile signed __int32 **a8)
{
  __int64 v8; // rsi
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r13
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // r15
  unsigned __int64 result; // rax
  unsigned int v18; // eax
  int v19; // r9d
  __int64 v20; // rax
  __int64 *v21; // rcx
  volatile signed __int32 **v22; // rdx
  __int64 v23; // r9
  unsigned int v24; // r8d
  __int64 SlabPage; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  ULONG_PTR v28; // rcx
  unsigned int v29; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v30 = a3;
  v8 = *a1;
  v29 = 0;
  v11 = (__int64)a3;
  if ( v8 )
  {
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4);
    while ( 1 )
    {
      v20 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFLL;
      if ( v20 == 0x3FFFFFFFFFLL )
        break;
      v8 = 48 * v20 - 0x220000000000LL;
    }
  }
  else
  {
    v12 = 0x3FFFFFFFFFLL;
  }
  v13 = a6;
  v14 = (*(unsigned __int16 *)(*(_QWORD *)(a6 + 208) + 32LL) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      result = MiGetAvailablePagesBelowPriority(a3, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1);
      if ( a2 > result )
      {
        if ( !result )
          return result;
        a2 = result;
      }
    }
  }
  v15 = MiUseSlabAllocator(v11, *(__int64 **)(v13 + 208), a7, &v29);
  v16 = a5;
  if ( v15 && a1[1] < a2 )
  {
    v21 = (__int64 *)(a5 + 120);
    while ( 1 )
    {
      v22 = a8;
      v23 = ~(unsigned __int8)(*(_DWORD *)(v16 + 80) >> 15) & 2;
      v24 = *((_DWORD *)v22 + 3) | (_DWORD)v22[1] & _InterlockedExchangeAdd(*a8, 1u);
      SlabPage = MiGetSlabPage(v11, v29, v24, v23, v21);
      v31 = SlabPage;
      if ( SlabPage == -1 )
        break;
      v26 = 48 * SlabPage - 0x220000000000LL;
      MiSetPfnBlink(v26, v12, 0);
      v27 = v26;
      v12 = v31;
      if ( *a1 )
        v27 = v8;
      *a1 = v26;
      ++a1[1];
      v8 = v27;
      v21 = (__int64 *)(v16 + 120);
      v11 = (__int64)v30;
      if ( a1[1] >= a2 )
        goto LABEL_5;
    }
    if ( *(_QWORD *)(v16 + 120) )
    {
      *(_QWORD *)(v16 + 128) = a2 - a1[1];
      v28 = *(_QWORD *)(v13 + 208);
      *(_QWORD *)(v16 + 104) = v28;
      MiRetainSubsection(v28);
      a2 = a1[1];
    }
  }
LABEL_5:
  result = a1[1];
  if ( result < a2 )
  {
    a6 = a2 - result;
    v18 = MiProtectionToCacheAttribute(v14);
    result = MiGetPageChain(
               v11,
               *(_QWORD *)(v16 + 56),
               *(_QWORD *)v16,
               v19,
               v18,
               0,
               0xFFFFFFFFFFFFFFFFuLL,
               (unsigned __int64 *)&a6);
    if ( result )
    {
      if ( *a1 )
        MiSetPfnBlink(v8, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(result + 0x220000000000LL) >> 4), 0);
      else
        *a1 = result;
      result = (unsigned int)a6;
      a1[1] += (unsigned int)a6;
    }
  }
  return result;
}
