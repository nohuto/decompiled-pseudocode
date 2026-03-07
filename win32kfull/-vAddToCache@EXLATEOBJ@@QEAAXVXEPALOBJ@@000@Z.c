void __fastcall EXLATEOBJ::vAddToCache(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // r14
  __int64 v10; // rbx
  unsigned int i; // edx
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // edx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = Gre::Base::Globals(a1);
  v10 = *((_QWORD *)v9 + 5);
  v23[0] = v10;
  GreAcquireSemaphore(v10);
  for ( i = 0; i < 8; ++i )
  {
    v12 = *((_DWORD *)v9 + 1722);
    v13 = 32LL * v12;
    v14 = *(_QWORD *)((char *)v9 + v13 + 6640);
    if ( !v14 )
      goto LABEL_5;
    if ( !*(_DWORD *)((char *)v9 + v13 + 6632) )
    {
      FreeThreadBufferWithTag(v14);
LABEL_5:
      PopThreadGuardedObject(*(_QWORD *)a1 - 32LL);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1722) + 1658) = 1;
      *((_QWORD *)v9 + 4 * *((unsigned int *)v9 + 1722) + 830) = *(_QWORD *)a1;
      v15 = *(_QWORD *)(a2 + 120);
      if ( v15 == a2 )
        v16 = *(_DWORD *)(a2 + 32);
      else
        v16 = *(_DWORD *)(v15 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1722) + 1662) = v16;
      v17 = *(_QWORD *)(a3 + 120);
      if ( v17 == a3 )
        v18 = *(_DWORD *)(a3 + 32);
      else
        v18 = *(_DWORD *)(v17 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1722) + 1663) = v18;
      v19 = *(_QWORD *)(a4 + 120);
      if ( v19 == a4 )
        v20 = *(_DWORD *)(a4 + 32);
      else
        v20 = *(_DWORD *)(v19 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1722) + 1664) = v20;
      v21 = *(_QWORD *)(a5 + 120);
      if ( v21 == a5 )
        v22 = *(_DWORD *)(a5 + 32);
      else
        v22 = *(_DWORD *)(v21 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1722) + 1665) = v22;
      *(_DWORD *)(*(_QWORD *)a1 + 36LL) = *((_DWORD *)v9 + 1722);
      *(_DWORD *)(a2 + 56) = *((_DWORD *)v9 + 1722);
      *((_DWORD *)v9 + 1722) = ((unsigned __int8)*((_DWORD *)v9 + 1722) + 1) & 7;
      SEMOBJ::vUnlock((SEMOBJ *)v23);
      return;
    }
    *((_DWORD *)v9 + 1722) = ((_BYTE)v12 + 1) & 7;
  }
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v10);
  }
}
