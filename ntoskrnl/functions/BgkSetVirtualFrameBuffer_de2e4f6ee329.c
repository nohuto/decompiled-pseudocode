__int64 __fastcall BgkSetVirtualFrameBuffer(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  char v2; // di
  __int64 DisplayContext; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  int v10; // eax
  size_t v11; // rsi
  _DWORD *v12; // r9
  size_t v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v2 = 0;
  if ( a2 )
  {
    qword_140C6A7F8 = a2;
  }
  else if ( !qword_140C6A7F8 )
  {
    return 3221225712LL;
  }
  if ( !a1 )
    return 0LL;
  DisplayContext = BgGetDisplayContext();
  LOBYTE(v6) = BgGetIsColorOverridden(&v16);
  if ( *(_BYTE *)DisplayContext && *(_BYTE *)(DisplayContext + 1) )
  {
    v7 = *(unsigned int *)(DisplayContext + 16);
    v8 = 24;
    if ( (_DWORD)v7 == 4 )
    {
      v9 = 24;
    }
    else
    {
      v9 = 1;
      if ( (_DWORD)v7 == 5 )
        v9 = 32;
    }
    v10 = *(_DWORD *)(a1 + 36);
    if ( v10 == 4 )
    {
      LOBYTE(v6) = 0;
    }
    else
    {
      v8 = 1;
      if ( v10 == 5 )
        v8 = 32;
    }
    v11 = *(_DWORD *)(DisplayContext + 4) * *(_DWORD *)(DisplayContext + 12) * (v9 >> 3);
    if ( v11 != *(_QWORD *)(a1 + 8) )
      return 3221225473LL;
    if ( !*(_BYTE *)(a1 + 40) )
    {
      BgAcquireSpinLock(v7, v6);
      memmove(*(void **)a1, *(const void **)(DisplayContext + 32), v11);
      v2 = 1;
      goto LABEL_31;
    }
    v12 = *(_DWORD **)a1;
    if ( !(_BYTE)v6 )
    {
      memset(*(void **)a1, 0, *(_DWORD *)(DisplayContext + 4) * *(_DWORD *)(DisplayContext + 12) * (v9 >> 3));
LABEL_29:
      BgAcquireSpinLock(v7, v6);
LABEL_31:
      v15 = *(_QWORD *)(a1 + 16);
      if ( v2 )
      {
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = *(_DWORD *)(DisplayContext + 8);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = *(_DWORD *)(DisplayContext + 4);
      }
      else
      {
        *(_DWORD *)(v15 + 4) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0;
      }
      **(_DWORD **)(a1 + 16) = 0;
      if ( v9 != v8 )
        BgConvertResources(v8);
      *(_QWORD *)(DisplayContext + 32) = *(_QWORD *)a1;
      *(_OWORD *)(DisplayContext + 4) = *(_OWORD *)(a1 + 24);
      BgSetFrameBufferAccess(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + 4LL, *(_QWORD *)(a1 + 16) + 24LL);
      byte_140C6A800 = 1;
      BgReleaseSpinLock();
      return 0LL;
    }
    v13 = v11 >> 2;
    if ( v13 )
    {
      v14 = v16;
      if ( ((unsigned __int8)v12 & 4) == 0 )
        goto LABEL_26;
      *v12 = v16;
      if ( --v13 )
      {
        ++v12;
LABEL_26:
        memset64(v12, v14 | (v14 << 32), v13 >> 1);
        v7 = 0LL;
        if ( (v13 & 1) != 0 )
          v12[v13 - 1] = v14;
      }
    }
    v2 = 1;
    goto LABEL_29;
  }
  return 3221225474LL;
}
