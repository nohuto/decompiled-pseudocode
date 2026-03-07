__int64 __fastcall UMPDOBJ::Thunk(UMPDOBJ *this, _DWORD *a2, unsigned int a3, void *a4, size_t Size)
{
  size_t v6; // rsi
  __int64 ThreadWin32Thread; // rcx
  char v10; // al
  char *v11; // r15
  char *KernelPtr; // r14
  char *v13; // rax
  int v14; // ebp
  unsigned int MaxSize; // eax
  int v16; // edi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+38h] [rbp-30h]
  char *v24; // [rsp+70h] [rbp+8h]

  v6 = a3;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *((_DWORD *)this + 106) )
  {
    v10 = *((_BYTE *)this + 32);
    if ( (v10 & 1) == 0 )
    {
      *((_BYTE *)this + 32) = v10 | 1;
      v24 = UMPDOBJ::_AllocUserMem(this, v6, 0);
      v11 = UMPDOBJ::_AllocUserMem(this, Size, 0);
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v24);
      v13 = UMPDOBJ::GetKernelPtr((char **)this, v11);
      v14 = a2[1];
      Src = v13;
      if ( v24 )
      {
        if ( v11 && ((unsigned int)(v14 - 26) > 1 || (unsigned int)v6 >= 0x48) )
        {
          memmove(KernelPtr, a2, v6);
          if ( v14 == 26 && a2[10] || v14 == 27 && (a2[11] & 3) != 0 )
          {
            MaxSize = UMPDOBJ::ulGetMaxSize(this);
            *((_DWORD *)KernelPtr + 14) = MaxSize;
            a2[14] = MaxSize;
            *((_QWORD *)KernelPtr + 8) = &v11[(unsigned int)Size];
            *((_QWORD *)a2 + 8) = &v11[(unsigned int)Size];
          }
          v22 = *((_QWORD *)this + 49);
          *((_DWORD *)this + 107) = v14;
          _InterlockedExchange64((volatile __int64 *)this + 3, 0LL);
          v16 = PROXYPORT::SendRequest((PROXYPORT *)&v22, v24, v6, v11, Size);
          memmove(a4, Src, (unsigned int)Size);
          v17 = *((_QWORD *)this + 18);
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( v18 )
            {
              if ( v18 < (unsigned __int64)MmSystemRangeStart )
                *(_QWORD *)(v17 + 8) = 0LL;
            }
          }
          v19 = *((_QWORD *)this + 20);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8);
            if ( v20 )
            {
              if ( v20 < (unsigned __int64)MmSystemRangeStart )
                *(_QWORD *)(v19 + 8) = 0LL;
            }
          }
          if ( UMPDOBJ::bTryAcquireExclussiveAccess(this) || (*((_BYTE *)this + 32) & 2) != 0 )
          {
            *((_BYTE *)this + 32) &= 0xFCu;
            return (unsigned int)-(v16 != 0);
          }
        }
      }
    }
  }
  else if ( *(UMPDOBJ **)(ThreadWin32Thread + 40) == (UMPDOBJ *)((char *)this + 40) )
  {
    *((_DWORD *)this + 107) = a2[1];
    return ClientPrinterThunk(a2, v6, a4, Size);
  }
  return 0xFFFFFFFFLL;
}
