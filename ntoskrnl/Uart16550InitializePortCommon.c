char __fastcall Uart16550InitializePortCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx

  v5 = a4;
  v6 = a3;
  LOBYTE(a4) = a5;
  v7 = a2;
  LOBYTE(a3) = v5;
  LOBYTE(a2) = v6;
  UartpSetAccess(v7, a2, a3, a4);
  LOBYTE(v8) = 3;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 16))(v7, v8);
  LOBYTE(v10) = 3;
  LOBYTE(v11) = v9 & 0x7F;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v10, v11);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(v7 + 24))(v7, v12, 0LL);
  LOBYTE(v13) = 6;
  LOBYTE(v14) = 2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v14, v13);
  Uart16550SetBaud(v7, *(unsigned int *)(v7 + 8));
  LOBYTE(v15) = 1;
  LOBYTE(v16) = 2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v16, v15);
  LOBYTE(v17) = 3;
  LOBYTE(v18) = 4;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v18, v17);
  LOBYTE(v19) = 6;
  if ( ((*(__int64 (__fastcall **)(__int64, __int64))(v7 + 16))(v7, v19) & 0x40) != 0 )
    *(_WORD *)(v7 + 12) |= 2u;
  return 1;
}
