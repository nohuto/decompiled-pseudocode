void __fastcall Base853Encoder::EncodeBlock(Base853Encoder *this)
{
  unsigned int v1; // r8d
  unsigned int v3; // esi
  unsigned int v4; // r9d
  char v5; // bp
  unsigned int v6; // r8d
  char v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  char v10; // r14
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx

  v1 = *((_DWORD *)this + 2);
  v3 = *((_DWORD *)this + 3) + 1;
  v4 = v1 / 0x55;
  v5 = a0123456789Abcd[v1 % 0x55];
  v6 = v1 / 0x55 / 0x55;
  v7 = a0123456789Abcd[v4 - 85 * v6];
  v8 = v6 / 0x55 / 0x55;
  v9 = 85 * v8;
  LOBYTE(v8) = a0123456789Abcd[v8];
  v10 = a0123456789Abcd[v6 % 0x55];
  v11 = a0123456789Abcd[v6 / 0x55 - v9];
  std::string::push_back(*(_QWORD *)this, v8);
  LOBYTE(v12) = v11;
  std::string::push_back(*(_QWORD *)this, v12);
  if ( v3 > 2 )
  {
    LOBYTE(v13) = v10;
    std::string::push_back(*(_QWORD *)this, v13);
    if ( v3 > 3 )
    {
      LOBYTE(v14) = v7;
      std::string::push_back(*(_QWORD *)this, v14);
      if ( v3 > 4 )
      {
        LOBYTE(v15) = v5;
        std::string::push_back(*(_QWORD *)this, v15);
      }
    }
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
}
