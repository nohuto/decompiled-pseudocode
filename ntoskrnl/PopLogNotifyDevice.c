void __fastcall PopLogNotifyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  _QWORD v11[32]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v12; // [rsp+130h] [rbp+30h] BYREF
  int v13; // [rsp+138h] [rbp+38h]
  int v14; // [rsp+13Ch] [rbp+3Ch]

  memset(v11, 0, sizeof(v11));
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v6 = *(_QWORD *)(a3 + 184);
    v7 = *(_QWORD *)(a1 + 8);
    v11[0] = a3;
    v11[1] = *(_QWORD *)(v7 + 24);
    *(_WORD *)((char *)&v11[2] + 1) = *(_WORD *)(v6 - 72);
    HIDWORD(v11[2]) = *(_DWORD *)(v6 - 56);
    LODWORD(v11[3]) = *(_DWORD *)(v6 - 48);
    if ( a2 )
    {
      v8 = *(_QWORD *)(a2 + 72);
      LOBYTE(v11[2]) = *(_BYTE *)(a2 + 56);
      if ( v8 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(v8 + 2 * v9) );
        v10 = v9;
        if ( (unsigned int)v9 > 0x6C )
          v10 = 108;
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v11[4], 0x6DuLL, (NTSTRSAFE_PCWSTR)(v8 + 2LL * (unsigned int)(v9 - v10)));
        goto LABEL_11;
      }
    }
    else
    {
      LOBYTE(v11[2]) = 0;
    }
    LOWORD(v11[4]) = 0;
    v10 = 0;
LABEL_11:
    v14 = 0;
    v12 = v11;
    v13 = 2 * v10 + 40;
    EtwTraceKernelEvent((__int64)&v12, 1u, 0x80008000, 0x1226u, 0x401802u);
  }
}
