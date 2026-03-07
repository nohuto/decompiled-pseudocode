__int64 __fastcall CContentResource::Create(__int64 a1, struct CFlipPropertySet *a2, struct CContentResourceState **a3)
{
  CFlipResource *Pool2; // rax
  CFlipResource *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rax

  Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 72LL, 1919107910LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    CFlipResource::CFlipResource(Pool2, a1, a2);
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 0LL;
    *(_QWORD *)v7 = &CContentResource::`vftable';
    *((_WORD *)v7 + 32) = 0;
    v8 = CContentResource::Initialize(v7);
    if ( v8 >= 0 )
    {
      v9 = DXGQUOTAALLOCATOR<256,1936868166>::operator new();
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_BYTE *)(v9 + 32);
        *(_QWORD *)v9 = &CFlipResourceState::`vftable';
        *(_QWORD *)(v9 + 24) = v7;
        *(_BYTE *)(v9 + 32) = v11 & 0xF0 | 1;
        *(_QWORD *)(v9 + 16) = v9 + 8;
        *(_QWORD *)(v9 + 8) = v9 + 8;
        v12 = *(_QWORD *)(v9 + 24);
        *a3 = (struct CContentResourceState *)v10;
        ++*(_DWORD *)(v12 + 24);
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_QWORD *)(v10 + 48) = 0LL;
        *(_QWORD *)(v10 + 56) = 0LL;
        *(_BYTE *)(v10 + 64) &= 0xFCu;
        *(_QWORD *)v10 = &CContentResourceState::`vftable';
      }
      else
      {
        v8 = -1073741801;
      }
    }
    CFlipResource::Release(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
