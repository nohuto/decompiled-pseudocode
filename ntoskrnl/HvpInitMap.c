__int64 __fastcall HvpInitMap(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r12
  void *v4; // r13
  void *v5; // r14
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  void *v13; // rax
  void *v14; // rbx
  _QWORD *v15; // rax
  void *v16; // rsi
  void *v18; // rax
  unsigned int v19; // ebx
  int v20; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v7 & 0xFFF) != 0 )
  {
    v19 = -1073741492;
    SetFailureLocation(v3, 0, 5, -1073741492, 0);
  }
  else
  {
    v8 = v7 >> 12;
    if ( v7 >> 12 )
      v9 = (v8 - 1) >> 9;
    else
      v9 = 0;
    *(_DWORD *)(a1 + 280) = v7;
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_10;
    v2 = (v8 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v2 )
      v2 = 4;
    v4 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, a2, 926043459LL);
    if ( v4 )
    {
      LOBYTE(v10) = 1;
      v5 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, v10, 926043459LL);
      if ( !v5 )
      {
        v19 = -1073741801;
        SetFailureLocation(v3, 0, 5, -1073741801, 32);
        goto LABEL_27;
      }
      memset(v4, 0, v2);
      memset(v5, 0, v2);
      *(_QWORD *)(a1 + 96) = v4;
      v11 = v7 >> 9;
      *(_DWORD *)(a1 + 88) = v11;
      *(_DWORD *)(a1 + 112) = v11;
      *(_QWORD *)(a1 + 120) = v5;
      *(_DWORD *)(a1 + 108) = v2;
LABEL_10:
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24);
      if ( v9 )
      {
        v18 = (void *)v12(0x2000LL, 0LL, 942820675LL);
        v16 = v18;
        if ( v18 )
        {
          memset(v18, 0, 0x2000uLL);
          if ( (unsigned __int8)HvpAllocateMap(a1, v16, 0LL, v9) )
          {
            v15 = (_QWORD *)(a1 + 296);
            v14 = 0LL;
            goto LABEL_13;
          }
          v19 = -1073741670;
          SetFailureLocation(v3, 0, 5, -1073741670, 64);
          HvpFreeMap(a1, v16, 0LL, v9);
          (*(void (__fastcall **)(void *, __int64))(a1 + 32))(v16, 0x2000LL);
LABEL_26:
          if ( !v4 )
          {
LABEL_30:
            if ( v5 )
            {
              if ( *(void **)(a1 + 120) == v5 )
                *(_QWORD *)(a1 + 120) = 0LL;
              (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v5, v2);
            }
            return v19;
          }
LABEL_27:
          if ( *(void **)(a1 + 96) == v4 )
            *(_QWORD *)(a1 + 96) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v4, v2);
          goto LABEL_30;
        }
        v20 = 48;
      }
      else
      {
        v13 = (void *)v12(12288LL, 0LL, 909266243LL);
        v14 = v13;
        if ( v13 )
        {
          memset(v13, 0, 0x3000uLL);
          v15 = (_QWORD *)(a1 + 296);
          v16 = (void *)(a1 + 296);
LABEL_13:
          *(_QWORD *)(a1 + 288) = v16;
          *v15 = v14;
          return 0LL;
        }
        v20 = 32;
      }
      v19 = -1073741670;
      SetFailureLocation(v3, 0, 5, -1073741670, v20);
      goto LABEL_26;
    }
    v19 = -1073741801;
    SetFailureLocation(v3, 0, 5, -1073741801, 16);
  }
  return v19;
}
