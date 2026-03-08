/*
 * XREFs of MiUpdateThunks @ 0x140B97620
 * Callers:
 *     MiBootImageRelocated @ 0x140B97534 (MiBootImageRelocated.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

void __fastcall MiUpdateThunks(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  char *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v4 = (char *)a2 + (unsigned int)(a4 - 1);
  v5 = (_QWORD *)(a1 + 16);
  v6 = *(_QWORD **)(a1 + 16);
  v7 = a3 - (_QWORD)a2;
  v8 = a2;
  while ( v6 != v5 )
  {
    LOBYTE(a2) = 1;
    a2 = (_QWORD *)RtlImageDirectoryEntryToData(v6[6], (int)a2, 12, (int)&v11);
    if ( a2 )
    {
      v11 >>= 3;
      v9 = v11;
      if ( v11 )
      {
        do
        {
          v10 = *a2;
          if ( *a2 >= (unsigned __int64)v8 && v10 <= (unsigned __int64)v4 )
            *a2 = v7 + v10;
          ++a2;
          --v9;
        }
        while ( v9 );
      }
    }
    v6 = (_QWORD *)*v6;
  }
}
