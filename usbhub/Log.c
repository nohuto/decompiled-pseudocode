void __fastcall Log(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // [rsp+10h] [rbp+10h]

  if ( (a2 & UsbhLogMask) != 0 && a1 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      HIBYTE(v7) = a3;
      LOBYTE(v7) = HIBYTE(a3);
      BYTE1(v7) = BYTE2(a3);
      BYTE2(v7) = BYTE1(a3);
      v6 = *(_QWORD *)(v5 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
      *(_DWORD *)v6 = v7;
      *(_QWORD *)(v6 + 24) = a5;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = a4;
    }
  }
}
