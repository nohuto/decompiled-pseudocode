__int64 KiVerifyScopesExecute()
{
  int v0; // ebx
  __int64 (__fastcall **v1)(); // rdi
  int v2; // esi
  __int64 (__fastcall *v3)(); // rax
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-28h]
  ULONG_PTR v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  v10 = 0;
  v8 = 0LL;
  v9 = 0;
  v0 = KiVerifyPass;
  v6 = 0xFEFFFFFFFFFFFFFFuLL;
  v7 = 0LL;
  if ( !KiVerifyPass )
  {
    BugCheckParameter4 = v8;
    goto LABEL_10;
  }
  do
  {
    v1 = KiVerifyXcptRoutines;
    LODWORD(v7) = (v0 & 1) == 0;
    v2 = 0;
    do
    {
      v3 = *v1;
      *(_QWORD *)((char *)&v7 + 4) = 0LL;
      ((void (__fastcall *)(unsigned __int64 *))v3)(&v6);
      if ( !DWORD2(v7) )
        KeBugCheckEx(0x14Du, v2, v0, SDWORD1(v7), 0LL);
      ++v2;
      BugCheckParameter4 = __ROL8__(v8 ^ SDWORD1(v7), BYTE4(v7) & 0x3F);
      ++v1;
      v8 = BugCheckParameter4;
    }
    while ( (__int64)v1 < (__int64)&qword_140D81148 );
    --v0;
  }
  while ( v0 );
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
LABEL_10:
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata(PsNtosImageBase);
  return KiVerifyPdata(PsHalImageBase);
}
