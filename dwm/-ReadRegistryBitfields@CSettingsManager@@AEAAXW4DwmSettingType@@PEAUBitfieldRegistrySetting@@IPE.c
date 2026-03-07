void __fastcall CSettingsManager::ReadRegistryBitfields(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  _DWORD *v5; // r14
  int v8; // ebx
  _DWORD *v9; // rdi
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // eax
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = a5;
  v8 = *a5;
  if ( a4 )
  {
    v9 = (_DWORD *)(a3 + 8);
    v10 = a4;
    do
    {
      if ( (int)CSettingsManager::GetDword(a1, a2, *((_QWORD *)v9 - 1), &v13) >= 0 )
      {
        v11 = v13;
      }
      else
      {
        v11 = v9[1];
        v13 = v11;
      }
      v12 = *v9;
      if ( v11 )
        v8 |= v12;
      else
        v8 &= ~v12;
      v9 += 4;
      --v10;
    }
    while ( v10 );
  }
  *v5 = v8;
}
