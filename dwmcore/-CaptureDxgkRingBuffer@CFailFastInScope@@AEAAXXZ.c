void __fastcall CFailFastInScope::CaptureDxgkRingBuffer(CFailFastInScope *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  unsigned int *v5; // rax
  int v6; // edi
  void *v7; // rcx
  _DWORD *v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  unsigned int *v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+48h] [rbp-8h]
  int v16; // [rsp+4Ch] [rbp-4h]
  unsigned int v17; // [rsp+68h] [rbp+18h] BYREF

  v17 = 0;
  v11 = 0LL;
  v13 = 0;
  v16 = 0;
  v14 = &v17;
  v12 = 9;
  v15 = 4;
  v2 = D3DKMTEscape(&v11);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( v2 != -2147483643 )
    {
      v10 = 3614;
      goto LABEL_8;
    }
    v17 += 1028;
    v5 = (unsigned int *)operator new(v17);
    *((_QWORD *)this + 1) = v5;
    if ( !v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xE25u, 0LL);
LABEL_9:
      v7 = (void *)*((_QWORD *)this + 1);
      if ( v7 )
      {
        operator delete(v7);
        *((_QWORD *)this + 1) = 0LL;
      }
      return;
    }
    v15 = v17;
    v14 = v5;
    v12 = 9;
    *v5 = v17 - 4;
    v4 = D3DKMTEscape(&v11);
    if ( v4 < 0 )
    {
      v10 = 3630;
LABEL_8:
      v6 = v4 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v6, v10, 0LL);
      if ( v6 >= 0 )
        return;
      goto LABEL_9;
    }
    v8 = (_DWORD *)*((_QWORD *)this + 1);
    v9 = *v8 + 4;
    v17 = v9;
    if ( v9 > 0x2000 )
    {
      memmove_0(v8, (char *)v8 + v9 - 0x2000, 0x2000uLL);
      v9 = 0x2000;
      **((_DWORD **)this + 1) = 8188;
      v17 = 0x2000;
    }
    MilWerRegisterMemoryBlock(*((const void **)this + 1), v9);
  }
}
