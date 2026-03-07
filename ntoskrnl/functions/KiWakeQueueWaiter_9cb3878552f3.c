char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  char v9; // si
  __int64 v10; // rbx
  char v11; // cl
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // r8
  __int64 *v16; // rcx
  __int64 **v17; // rax
  _QWORD *v18; // r8
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  do
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      break;
    if ( (_QWORD *)v3[1] != v7 || (v8 = (_QWORD *)v7[1], (_QWORD *)*v8 != v7) )
LABEL_40:
      __fastfail(3u);
    *v8 = v3;
    v9 = 0;
    v3[1] = v8;
    v10 = v7[3];
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(v10 + 64) );
    }
    if ( *(_BYTE *)(v10 + 388) == 5 )
    {
      v11 = *(_BYTE *)(v10 + 112);
      v12 = v11 & 7;
      if ( v12 == 1 || v12 == 4 )
      {
        v13 = *(_QWORD *)(v10 + 232);
        if ( v13 )
        {
          if ( (*(_BYTE *)v13 & 0x7F) == 0x15 )
          {
            *(_DWORD *)(v10 + 540) = (unsigned __int8)*(_DWORD *)(v10 + 540);
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 4LL * *(unsigned int *)(v10 + 540) + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 40));
          }
        }
        v14 = *(_QWORD *)(v10 + 712);
        if ( v14 )
        {
          v21 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 32464), 0LL) )
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(_QWORD *)(v14 + 32464) );
          }
          v15 = (__int64 *)(v10 + 216);
          if ( *(_QWORD *)(v10 + 712) )
          {
            v16 = (__int64 *)*v15;
            if ( *(__int64 **)(*v15 + 8) != v15 )
              goto LABEL_40;
            v17 = *(__int64 ***)(v10 + 224);
            if ( *v17 != v15 )
              goto LABEL_40;
            *v17 = v16;
            v16[1] = (__int64)v17;
            *(_QWORD *)(v10 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 32464), 0LL);
        }
        KiEnterDeferredReadyState(v10);
        *v18 = *(_QWORD *)(a1 + 11528);
        *(_QWORD *)(a1 + 11528) = v18;
        *(_QWORD *)(v10 + 200) = a3;
        *(_QWORD *)(v10 + 976) = 0LL;
        goto LABEL_21;
      }
      if ( (*(_BYTE *)(v10 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v10 + 112) = v11 & 0xF8 | 2;
        *(_QWORD *)(v10 + 200) = a3;
        *(_QWORD *)(v10 + 976) = 0LL;
        *((_BYTE *)v7 + 17) = 0;
LABEL_21:
        v9 = 1;
        goto LABEL_22;
      }
      if ( v12 == 5 )
      {
        *(_BYTE *)(v10 + 112) = v11 & 0xF8 | 6;
      }
      else if ( v12 == 3 )
      {
        *((_BYTE *)v7 + 17) = 2;
      }
    }
LABEL_22:
    *(_QWORD *)(v10 + 64) = 0LL;
    ++*((_BYTE *)v7 + 17);
    if ( v9 )
      return 1;
  }
  while ( v3 != v4 );
  return 0;
}
