__int64 __fastcall GreGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, Gre::Base *a6, _QWORD *a7, int a8)
{
  Gre::Base *v8; // rsi
  _QWORD *v10; // r12
  unsigned int v13; // r13d
  int v14; // eax
  Gre::Base *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rbx
  _QWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF

  v8 = a6;
  v10 = a7;
  *(_DWORD *)a6 = 0;
  if ( v10 )
    *v10 = 0LL;
  v13 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0] )
  {
    LODWORD(a7) = a8;
    v14 = *(unsigned __int16 *)(v19[0] + 12LL);
    a6 = 0LL;
    HIDWORD(a7) = v14;
    if ( (unsigned int)RFONTOBJ::bInit(&a6, (struct XDCOBJ *)v19, 0, 2u, (const struct RFONTOBJ::Tag *)&a7) )
      GreAcquireSemaphore(*((_QWORD *)a6 + 63));
    v15 = a6;
    if ( a6 )
    {
      *a2 = *(_QWORD *)(*((_QWORD *)a6 + 15) + 84LL);
      v16 = (__int64 *)*((_QWORD *)v15 + 15);
      if ( v16 )
      {
        v17 = *v16;
        v20 = v17;
        if ( v17 )
        {
          v13 = 1;
          if ( PFFOBJ::bInPrivatePFT((PFFOBJ *)&v20) )
          {
            *(_DWORD *)v8 |= 1u;
            if ( v10 )
              *v10 = *(unsigned int *)(*v16 + 140);
          }
          if ( (*(_DWORD *)(v17 + 52) & 0x10) != 0 )
            *(_DWORD *)v8 |= 4u;
          if ( *(_QWORD *)(v17 + 40) )
          {
            *(_DWORD *)v8 |= 2u;
            if ( a3 )
              memmove(a3, *(const void **)(v17 + 40), *(unsigned int *)(v17 + 48));
            if ( a4 )
              *a4 = *(_DWORD *)(v17 + 48);
            if ( a5 )
            {
              *a5 = *(_DWORD *)(v17 + 136);
              *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v17 + 40), *(_DWORD *)(v17 + 48));
            }
          }
          else
          {
            if ( a3 )
              memset(a3, 0, 0x48uLL);
            if ( a4 )
              *a4 = 0;
            if ( a5 )
              *a5 = 0;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
    if ( v19[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  }
  return v13;
}
